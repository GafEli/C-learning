﻿#include <iostream>
#include <cmath>


// таким способом задаем глобальную константу
#define eps_max 0.0000001  // максимально допустимая ошибка по х

// предварительно объявляем функции
// в С++ должно быть объявление + определение функции ДО ее использования
double log_mean(double z1, double z2);
double round_2(double u);


// вычисляемая функция
double fx(double t_c)
{
    const double t_cold_in = 15.0;    // Входная температура холодного потока(хладагента)
    const double t_hot_in = 70.0;    // Входная температура горячего потока

    const double C_cold = 4200.0;  // удельная теплоемкость холодного потока Дж / (кг·К).Можно заменить на переменное 
    const double C_hot = 2100.0;  // удельная теплоемкость горячего потока Дж / (кг·К)Можно заменить на переменное

    const double alpha_hot = 2287.0;  // коэффициент теплоотдачи горячего потока Вт / (м²·К)
    const double alpha_cold = 507.0;   // коэффициент теплоотдачи холодного потока Вт / (м²·К)

    const double delta_st = 0.002;    // толщина стенки теплообменной трубки
    const double lambda_st = 28.0;    // теплопроводность стали 08Х13

    const double f = 32.2; // поверхность теплообмена м2

    const double G_hot = 3.89; // Массовый расход горячего потока, kg / s
    const double G_cold = 6.68; // Массовый расход холодного потока, kg / s

    double k_tp = 1 / ((1 / alpha_hot) + (1 / alpha_cold) + (delta_st / lambda_st)); // коэф.теплопередачи
    double q_f = 0; // начальное приближение теплового потока
    double q_exch = C_cold * G_cold * (t_c - t_cold_in); //  теплоты получил холодный поток, W;
    double t_h = t_hot_in - q_exch / (C_hot * G_hot); //  выходная температура горячего потока, K
    double dt1 = t_hot_in - t_c;  //  разность температур горячего потока и нагретого хладагента, K
    double dt2 = t_h - t_cold_in; // разность температур охлаждённого горячего потока и холодного хладагента, K

    double delta_t_cp = 0.0;
    double delta_q = 0.0;

    if (dt2 < 0) 
    {
        delta_t_cp = 0;
    }
    else
    {
        delta_t_cp = log_mean(dt1, dt2); //  средний логарифмический температурный напор, K
    }
    q_f = k_tp * f * delta_t_cp; // значение теплового потока через контактную поверхность, W
    delta_q = q_exch - q_f;          // Эта величина должна быть равна 0 для точного решения

    return delta_q;
}


// производная функции
double dfx(double x)
{
    const double hloc = 0.001;          // приращение независимого аргумента при вычислении производной
    const double hinvloc = 1 / (2 * hloc); // множитель для вычисления производной

    double dx = hinvloc * (fx(x + hloc) - fx(x - hloc));

    return dx;
}


// Подпрограмма вычисления среднего логарифмического температурного напора
double log_mean(double z1, double z2)
{
    double lm;

    if (z1 == z2) { // если усредняемые числа равны,
        lm = z1;    // то среднее равно первому из них : log_mean(z, z) = z
    }
    else {
        lm = (z1 - z2) / log(z1 / z2); // среднее смещено в меньшую сторону.
    }
    return lm;
}


// функция округления до сотых
double round_2(double u)
{
    return u = 0.01 * round(100 * u); // умножить на 100, округлить до целых и разделить на 100
}


double newton(double x)
{
    unsigned int niter = 0;

    double y = 0;
    double dy = 0;
    double dx = 1000.; // 1d + 12;

    while (fabs(dx) > eps_max)  // пока не достигнута точность 0.01  (можно поставить 0.000001)
    {
        y = fx(x);    // значение функции в текущей точкеy = f0(x);% значение функции в текущей точке
        dy = dfx(x);   // значение производной в текущей точке
        dx = y / dy;   // смещение по x для перехода ближе к корню
        x = x - dx;   // новое значение переменной

        // x = x - dx; эквивалентно  
        // x -= dx;

        niter++; // инкрементируем - т.е. niter = niter + 1
        std::cout << "текущее значение температуры при данной итерации: " << x << '\n';
    }
    std::cout << "Выполнено итераций: " << niter << '\n';

    return x;
}


int main()
{
    setlocale(LC_ALL, "Russian"); // чтобы вывод был на русском, иначе будут крокозябры 

    double x = 15.0; //  начальное приближение
    double result = newton(x);

    std::cout << "Найденное значение выходной температуры холодного теплоносителя: " << round_2(result) << '\n';

    return 0;
}


