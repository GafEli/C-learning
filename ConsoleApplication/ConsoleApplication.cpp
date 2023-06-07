#include <iostream>
#include <iomanip>
#define _USE_MATH_DEFINES
#include <cmath> 
#include <math.h> 
#include <iostream>
#include <string>
#include <stdio.h>
//#include <conio.h> 
#include <windows.h> 
//#include<locale.h>


using namespace std;


//  ЗАДАЧА 1.1. ВЫВЕСТИ НА ЭКРАН ЧИСЛО ПИ С ТОЧНОСТЬЮ ДО СОТЫХ
void function1()
{
	cout << setprecision(3) << M_PI <<endl;
}

//  ЗАДАЧА 1.2.  ВЫВЕСТИ НА ЭКРАН ЧИСЛО е (основание натурального логарифма) С ТОЧНОСТЬЮ ДО ДЕСЯТЫХ
void function2()
{
	cout << setprecision(2) << exp(1.0) << endl;
}
//  ЗАДАЧА 1.3.  СОСТАВИТЬ ПРОГРАММУ ВЫВОДА НА ЭКРАН ЧИСЛА, ВВОДИМОГО С КЛАВИАТУРЫ. ВЫВОДИМОМУ ЧИСЛУ ДОЛЖНО ПРЕДШЕСТВОВАТЬ СООБЩЕНИЕ "ВЫ ВВЕЛИ ЧИСЛО"
void function3()
{
	int a;
	cout << "Введите число: ";
	cin >> a;
	cout << "Вы ввели число: " << a << endl;
}
//  ЗАДАЧА 1.4.  СОСТАВИТЬ ПРОГРАММУ ВЫВОДА НА ЭКРАН ЧИСЛА, ВВОДИМОГО С КЛАВИАТУРЫ. ПОСЛЕ ВЫВОДИМОГО ЧИСЛА ДОЛЖНО СЛЕДОВАТЬ СООБЩЕНИЕ "ВОТ КАКОЕ ЧИСЛО ВЫ ВВЕЛИ"
void function4()
{
	double a;
	cout << "Введите число: ";
	cin >> a;
	cout << a << " - вот какое число Вы ввели" << endl;
}
//Задача 1.5. Вывести на одной строке числа 1, 13 и 49 с одним пробелом между ними
void function5()
{
	double a = 1;
	double b = 13;
	double c = 49;
	cout << a << " " << b << " " << c << endl;
}
//Задача 1.6. Вывести на одной строке числа 7, 15 и 100 с двумя пробелами между ними.

void function6()
{
	double a = 7;
	double b = 15;
	double c = 100;
	cout << a << "  " << b << "  " << c << endl;
}

//Задача 1.7. Составить программу вывода на экран в одну строку трех любых чисел с двумя пробелами между ними.
void function7()
{
	double a, b, c;

	cout << "Введите число a: ";
	cin >> a;

	cout << "Введите число b: ";
	cin >> b;

	cout << "Введите число c: ";
	cin >> c;

	cout << a << "  " << b << "  " << c << endl;
}

// Задача 1.8. Составить программу вывода на экран в одну строку четырех любых чисел с одним пробелом между ними
void function8()
{
	double a, b, c, d;

	cout << "Введите число a: ";
	cin >> a;

	cout << "Введите число b: ";
	cin >> b;

	cout << "Введите число c: ";
	cin >> c;

	cout << "Введите число d: ";
	cin >> d;

	cout << a << " " << b << " " << c << " " << d << endl;
}

// Задача 1.9. Вывести на экран числа 50 и 10 одно под другим.
void function9()
{
	double a = 50;
	double b = 10;
	cout << a << "\n" << b << endl;
}

// Задача 1.10. Вывести на экран числа 5, 10 и 21 одно под другим.
void function10()
{
	double a = 50;
	double b = 10;
	double c = 21;

	cout << a << "\n" << b << "\n" << c << endl;
}

void function11()
{
	int a{ 5 }; 
	a += 10;  // 15
	a -= 3;   // 12
	a *= 2;   // 24
	a /= 6;   // 4
	a <<= 4;  // 64
	a >>= 2;  // 16
	cout << "a = " << a << endl;
}
//2.1. Дано расстояние в сантиметрах. Найти число полных метров в нем.
void function12()
{
	int sm;

	cout << "Введите расстояние в сантиметрах:\n";
	cin >> sm;

	int m = sm / 100;

	cout << "Метров: " << m << endl;
}
//2.7. Дан прямоугольник с размерами 543*130 мм. Сколько квадратов со стороной 130 мм можно отрезать от него ?
void function13()
{
	cout << 543/130 << endl;
}

//2.9.С начала 1990 года по некоторый день прошло n месяцев и 2 дня.
//Присвоить целочисленной величине x значение 1, 2, ..., 11 или 12 в зависимости от того, 
//каким месяцем(январем, февралем и т.п.) является месяц этого дня.Например, при n=3 значение х равно 4.
void function14()
{
	int n = 9; //объявляем переменную целого типа
	const char* x[] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12" };
	cout << x[n % 12] << endl; //остаток от деления,но индексация массива начинается с нуля
}

//2.3. Дана масса в килограммах. Найти число полных тонн в ней.
void function15()
{
	int kg;
	cout << "Введите массу в килограммах:\n";
	cin >> kg;
	int t = kg / 1000;
	cout << "Тонн: " << t << endl;
}
//Дано двузначное число.Найти:
//а) число десятков в нем;
//б) число единиц в нем;
//в) сумму его цифр;
//г) произведение его цифр.

void function16()
{
	int a;
	cout << "Число двузначное: ";
	cin >> a;
	cout << a / 10 << endl;  //число десятков в нем;
	cout << a % 10 << endl;   //число единиц в нем;
	cout << (a / 10) + (a % 10) << endl;    //cумму его цифр;
	cout << (a / 10) * (a % 10) << endl;   //произведение его цифр.
}
//2.16. Дано трехзначное число. Найти число, полученное при перестановке первой и второй цифр заданного числа.
void function17()
{
	int abc;
	cout << "Введите трёхзначное число:\n";
	cin >> abc;
	int a = abc / 100;
	int b = (abc / 10) % 10;
	int c = abc % 10;
	int bac = b * 100 + a * 10 + c;
	cout << bac << endl;
}
//2.20. Дано четырехзначное число. Найти:а) число, полученное при прочтении его цифр справа налево;
void function18()
{
	int abcd;
	cout << "Введите четырехзначное число:\n";
	cin >> abcd;
	int a = abcd / 1000;
	int b = (abcd / 100) % 10;
	int c = (abcd/10) % 10;
	int d = abcd % 10;
	int dcba = d * 1000 + c * 100 + b * 10 + a;
	cout << dcba << endl;
}
//Дано четырехзначное число. Найти:
// число, образуемое при перестановке первой и второй, третьей и четвертой цифр заданного числа.Например, из числа 5434 получить 4543, из числа 7048— 784;
void function19()
{
	int abcd;
	cout << "Введите четырехзначное число:\n";
	cin >> abcd;
	int a = abcd / 1000;
	int b = (abcd / 100) % 10;
	int c = (abcd / 10) % 10;
	int d = abcd % 10;
	int badc = b * 1000 + a * 100 + d * 10 + c;
	cout << badc << endl;
}
//2.24. Из трехзначного числа x вычли его последнюю цифру. Когда результат разделили на 10, 
//а к частному слева приписали последнюю цифру числа x, то получилось число 237. Найти число x.
void function20()
{
	int y = 237;
	int a = (y / 100); //первая цифра числа 237
	int b = y % 100;
	int x = b * 10 + 2;
  
	cout << x << endl;
}
//2.33. В трехзначном числе x зачеркнули его последнюю цифру. Когда в оставшемся
//двузначном числе переставили цифры, а затем приписали к ним слева последнюю цифру числа x, то получилось число n.По заданному n найти число x
//(значение n вводится с клавиатуры, 1 ≤ n ≤ 999 и при этом число единиц в n не равно нулю).
void function21()
{
	int n;
	cin >> n;
	int a = n / 100;
	int b = (n / 10) % 10;
	int c = n % 10;
	int x = c * 100 + b * 10 + a;
	cout << x << endl;
}
//3.1. Вычислить значение логического выражения при следующих значениях логических величин А, В и С: А = Истина, В = Ложь, С = Ложь:
//а) А или В; б) А и В; в) В или С.
void function22()
{
	bool A = true;
	bool B = false;
	bool C = false;
	cout << boolalpha; // вывод текста, а не 1 и 0
	cout << (A || B) << endl;      //А или В;
	cout << (A && B) << endl;      //А и В;
	cout << (B || C) << endl;  //В или С.
}
//3.4. Вычислить значение логического выражения при следующих значениях логических величин X, Y и Z: X = Истина, Y = Истина, Z = Ложь:
//а) не X и Y; б) X или не Y; в) X или Y и Z.
void function23()
{
	bool X = true;
	bool Y = true;
	bool Z = false;
	cout << boolalpha; // вывод текста, а не 1 и 0
	cout << (!X && Y) << endl;
	cout << (X || !Y) << endl;      
	cout << (X || Y && Z) << endl;    // операция && (и) приоритетнее. Поэтому если надо вначале выполнить ИЛИ надо взять в скобки
}
// 3.13. Вычислить значение логического выражения при всех возможных значениях логических величин А и В : не(А и В);
void function24()
{
	bool A[2] = { false, true };
	bool B[2] = { false, true };
	//cout << " A B C\n";

	for (bool a : A)
		for (bool b : B)
			//cout << setw(2) << a << setw(2) << b << setw(2) << !(a && b) << endl; //setw сдвиги - число, колво пробелов
			cout << "не( " << a << " и " << b << " ) = " << !(a && b) << endl;
}

//3.29. Записать условие, которое является истинным, когда:
//void function25()
//а) if (x % 2 != 0 && y % 2 != 0)    каждое из чисел X и Y нечетное;
//б) if ((x<20 && y>=20) || (x>=20 && y<20))    только одно из чисел X и Y меньше 20;
//г) if (x<0 && y<0 && z<0)    каждое из чисел X, Y, Z отрицательное;
//д) if ((x%5==0 && y%5!=0 && z%5!=0) || (x%5!=0 && y%5==0 && z%5!=0) || (x%5!=0 && y%5!=0 && z%5==0))   только одно из чисел X, Y и Z кратно пяти;
//е)  (x>100 || y>100 || z>100)     хотя бы одно из чисел X, Y, Z больше 100.
//void function25()

//4.1. Рассчитать значение у при заданном значении х:
void function26()
{
	int x;
	cout << "Ведите число x: ";
	cin >> x;

	if (x > 0) 
	{
		int y = pow(sin(x), 2);
		cout << "pow(sin(x), 2)= " << y << endl;
	}
	else
	{
		int y = 1 - 2 * sin(pow(2, x));
		cout << "1 - 2 * sin(pow(2, x))= " << y << endl;
	}
}
//4.2.Рассчитать значение у при заданном значении х :

void function27()
{
	int x;
	cout << "Ведите число x: ";
	cin >> x;
	if (x > 0) 
	{
		int y = sin(pow(2, x));
		cout << "sin(pow(2, x)= " << y << endl;
	}
	else
	{
		int y = 1 + 2 * pow(sin(x), 2);
		cout << "1 + 2 * pow(sin(x), 2)= " << y << endl;
	}
}
void function28()
{
	float x;
	cout << "Введите х=";
	cin >> x;

	float y;
	cout << "Введите у=";
	cin >> y;

	if ((x < -4) || (y < 0) || (x > 4) || (y > 4))
	{
		cout << "0" << endl;
	}
	else if (x < 0)
	{
		x *= -1;
	}
	else if ((x + y) > 4)
	{
		cout << "0" << endl;
	}
	else
	{
		cout << "1" << endl;
	}
}
//4.3. Определить, в какую из областей — I или II (рис. 4.1) — попадает точка с заданными координатами. Для простоты принять, что точка не попадает на границу областей.
void function29()
{
	float x;
	cout << "Введите х=";
	cin >> x;

	if (x < 4)
	{
		cout << "1" << endl;
	}
	else
	{
		cout << "2" << endl;
	}
}
//4.4. Определить, в какую из областей — I или II (рис. 4.2) — попадает точка с заданными координатами. Для простоты принять, что точка не попадает на границу областей.
void function30()
{
	float y;
	cout << "Введите y=";
	cin >> y;

	if (y > 3)
	{
		cout << "1" << endl;
	}
	else
	{
		cout << "2" << endl;
	}
}
//4.5. Для функций, заданных графически (рис. 4.3), определить значение у при заданном значении х.
void function31()
{
	double x;
	cout << "x = ";
	cin >> x;

	if (x > 2) {
		double y = 2;
		cout << y << endl;
	}
	else
	{
		double y = x;
		cout  << "y = " << y << endl;
	}
}
void function32()
{
	double x;
	cout << "x = ";
	cin >> x;

	if (x > 3)
	{
		int y = -3;
		cout << "y= " << y << endl;
	}
	else if ((x < 3) && (x>0)) 
	{
		double y = x;
		cout << "y= " << y << endl;
	}
	else
	{
		double y = -x;
		cout << "y = " << y << endl;
	}
}
//Даны два различных вещественных числа. Определить:
//а) какое из них больше;
//б) какое из них меньше.
void function33()
{
	double a = 300.5;
	double b = 100.7;
	cout << "Наибольшее: " << max(a, b) << "\nНаименьшее: " << min(a, b) << endl;
}
//4.9. Известны две скорости: одна в километрах в час, другая — в метрах в секунду. Какая из скоростей больше?
void function34()
{
	double km_v_h;
	cout << "Введите Скорость в километрах в час: "; 
	cin >> km_v_h;

	double m_v_sec;
	cout << "Введите Скорость в метрах в секунду: "; 
	cin >> m_v_sec;

	if ((km_v_h * 1000. / 3600.) < m_v_sec)
	{
		cout << "Скорость в метрах в секунду больше скорости в километрах в час" << endl;
	}
	else 
	{
		cout << "Скорость в метрах в секунду меньше скорости в километрах в час" << endl;
	}
}
//4.10. Даны радиус круга и сторона квадрата. У какой фигуры площадь больше?
void function35()
{
	const double pi = M_PI;
	double a;
	cout << "Введите сторону квадрата: ";
	cin >> a;

	double r;
	cout << "Введите радиус круга: ";
	cin >> r;

	double Ssquare = pow(a, 2);
	double Scircle = pi * pow(r, 2);

	if (Ssquare > Scircle) cout << "У квадрата" << endl;
	else cout << "У круга" << endl;
}

// Указатели и ссылки
double FootToKm(const double& foot)
{
	const double km_v_foot = 0.000305;
	double km = foot * km_v_foot;
	return km;
};

//Известны два расстояния: одно в километрах, другое — в футах 1 фут=0,305 м Какое из расстояний меньше ?
void function36()
{
	double km;
	cout << "Расстояние в километрах: ";
	cin >> km;

	double foot;
	cout << "Расстояние в футах: ";
	cin >> foot;

	if (km > FootToKm(foot)) cout << "Расстояние в футах меньше";
	else if (abs(km - FootToKm(foot)) < 10e-5) cout << "Расстояния одинаковые";
	else cout << "Расстояние в километрах меньше";
}
//Дано двузначное число N. Определить, какая из цифр больше, первая или вторая, или они одинаковые.
void function37()
{
	int n;
	cout << "Введите число" << endl;
	cin >> n;
	if ((n / 10) < (n % 10)) cout << "Первая меньше второй ";
	else if ((n / 10) > (n % 10)) cout << "Вторая меньше первой ";
	else cout << "Равны ";
}
//Дано двузначное число. Определить, равен ли квадрат этого числа учетверенной сумме кубов его цифр. 
//Например, для числа 48 ответ положительный, для числа 52 — отрицательный. 
void function38()
{
	int n;
	cout << "Введите двузначное число: ";
	cin >> n;
	double xFourSummCubNum = 4.0 * (pow((n / 10), 3) + pow((n % 10), 3));
	if (abs(pow(n, 2) - xFourSummCubNum) < 10e-5) cout << "Ответ положительный" << endl; // n - двухзначное число
	else cout << "Ответ отрицательный " << endl;
}
// ФУНКЦИИ
//Найти периметр фигуры ABCD по заданным сторонам AB, AD и DC —
//рис. 10.1. (Определить функцию для расчета гипотенузы прямоугольного
//треугольника по его катетам.)

double calculate_the_hypotenuse(double x, double y)
{
	return sqrt(x * x + y * y);
}

double calculate_the_leg(double hyp, double leg)
{
	return sqrt(hyp * hyp - leg * leg);
}

int function39()
{
	const double AB = 3;
	const double AC = 7;
	const double CD = 2;

	double BC = calculate_the_hypotenuse(AB, AC);
	double AD = calculate_the_leg(AC, CD);

	cout << "Периметр фигуры равен: " << AB + BC + CD + AD;
	return 0;
}
//Даны основания и высоты двух равнобедренных трапеций. Найти сумму их
//периметров. (Определить функцию для расчета периметра равнобедренной
//трапеции по ее основаниям и высоте)

double perimetr(double a, double b, double h)
{
	return a + b + 2.0 * sqrt(h * h + (a - b) * (a - b) / 4.0);
}

int function40()
{
	double a1, a2, b1, b2, h1, h2, p;
	cout << "Верхнее основание первой трапеции"; cin >> a1; cout << a1 << endl;
	cout << "Нижнее основание первой трапеции"; cin >> b1; cout << b1 << endl;
	cout << "Высота первой трапеции"; cin >> h1; cout << h1 << endl;
	cout << "Верхнее основание второй трапеции"; cin >> a2; cout << a2 << endl;
	cout << "Нижнее основание второй трапеции"; cin >> b2; cout << b2 << endl;
	cout << "Высота второй трапеции"; cin >> h2; cout << h2 << endl;

	cout << "Суммарный Периметр трапеций =" << perimetr(a1, b1, h1) + perimetr(a2, b2, h2);
	return 0;
}
//Найти периметр треугольника, заданного координатами своих вершин. (Определить функцию для расчета длины отрезка по координатам его вершин.)

double dist(int x1, int y1, int x2, int y2) {
	return hypot(x1 - x2, y1 - y2);
}

double perimeter(int x1, int y1, int x2, int y2, int x3, int y3)
{
	return dist(x1, y1, x2, y2) + dist(x2, y2, x3, y3) + dist(x1, y1, x3, y3);
}

int function41()
{
	int x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	cout << "Периметр  =" << perimeter(x1, y1, x2, y2, x3, y3);
	return 0;
}
//Даны шесть различных чисел. Определить максимальное из них. Определить функцию, находящую максимум из двух различных чисел.)

int Max(int a, int b) 
{
	return a > b ? a : b;
}
int function42()
{
	int a, b, c, d, e, g;
	cin >> a >> b >> c >> d >> e >> g;
	int Maximum = Max(a, Max(b, Max(c, Max(d, Max(e, g)))));
	cout << Maximum;
	return 0;
}

//Получить все шестизначные счастливые номера. Счастливым называется  номер, у которого сумма первых трех цифр номера равна сумме последних трех цифр.
//Использовать функцию для расчета суммы цифр трехзначного числа.

int Sum3number(int n)
{
	return n / 100 + n / 10 % 10 + n % 10;
}
int function43()
{
	for (int n = 100000; n < 1000000; n++)
		if (Sum3number(n % 1000) == Sum3number(n / 1000))
			cout << n << endl;
	system("pause");
	return 0;
}
//Даны два предложения.Найти общее количество букв н в них. (Определить функцию для расчета количества букв н в предложении.)

int pod(string s, char symbol)
{
	int k = 0;
	for (unsigned int i = 0; i < s.length(); i++)
		if ((int)s[i] == (int)symbol)
			k++;
	return k;
}
int function44()
{
	int r1, r2;
	string s1, s2;
	cout << "Введите первое предложение: ";
	getline(cin, s1);
	cout << "Введите второе предложение: ";
	getline(cin, s2);
	r1 = pod(s1, 'h');   //Дим, я так понимаю здесь нельзя русскую букву использовать????
	r2 = pod(s2, 'h');
	cout << r1 + r2;
	return 0;
}

// Объявить два целочисленных массива  с разными размерами и написать функцию, которая заполняет их элементы значениями и 
//показывает на экран. Функция должна принимать два параметра – массив и его размер.


void fillAndShowArray(int arrayForFilling[], int size); //заполнить и показать массив 

int function45()
{
	const int SIZE1 = 6;
	const int SIZE2 = 8;

	int arrayForFilling1[SIZE1] = {};
	int arrayForFilling2[SIZE2] = {};

	fillAndShowArray(arrayForFilling1, SIZE1);
	fillAndShowArray(arrayForFilling2, SIZE2);
	return 0;
}

void fillAndShowArray(int arrayForFilling[], int size) //Когда необходимо передать в функцию одномерный массив, при её определении надо указать пустые [ ] скобки после имени параметра, обозначающего массив. Если надо передать двумерный массив – первые квадратные скобки  оставляют пустыми, а во вторые надо внести значение.
{
	for (int i = 0; i < size; i++)
	{
		arrayForFilling[i] = i + 1;
		cout << arrayForFilling[i] << "  ";
	}
	cout << endl;
}


int main()
{
	setlocale(LC_ALL, "rus");
	//function1();
	//function2();
	//function3();
	//function4();
	//function5();
	//function6();
	//function7();
	//function8();
	//function9();
	//function10();
	//function11();
	//function12();
	//function13();
	//function14();
	//function15();
	//function16();
	//function17();
	//function18();
	//function19();
	//function20();
	//function21();
	//function22();
	//function23();
	//function24();
	//function25();
	//function26();
	//function27();
	//function28();
	//function29();
	//function30();
	//function31();
	//function32();
	//function33();
	//function34();
	//function35();
	//function36();
	//function37();
	//function38();
	//function39();
	//function40();
	//function41();
	//function42();
	//function43();
	//function44();
	function45();
}
