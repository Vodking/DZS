#include<iostream>

int main()
{
	setlocale(LC_ALL, "ru");
	
	//Задание 1
int count = 0;
int digit1;
int digit2;
int digit3;
for (int i = 100; i < 1000; i++)
{
	digit1 = i / 100;
	digit2 = (i - digit1 * 100) / 10;
	digit3 = i - digit1 * 100 - digit2 * 10;
	if (digit1 == digit2 || digit1 == digit3 || digit2 == digit3)
	{
		count++;
	}

}
std::cout << "Количество чисел с двумя или более одинаковыми цифрами: " << count << "\n\n\n";

//Задание 2
count = 0;
digit1 = 0;
digit2 = 0;
digit3 = 0;
for (int i = 100; i < 1000; i++)
{
	digit1 = i / 100;
	digit2 = (i - digit1 * 100) / 10;
	digit3 = i - digit1 * 100 - digit2 * 10;
	if (digit1 != digit2 && digit1 != digit3 && digit2 != digit3)
	{
		count++;
	}

}
std::cout << "Количество чисел со всеми разными цифрами: " << count << "\n\n\n";

//Задание 3
int num;
int curnum;
int value = 0;
int curdigit;
int multiplier;
count = 0;
std::cout << "Введите любое целое число: \n";
std::cin >> num;
if (num < 0)
{
	for (int j = 1; value > num; j *= 10)
	{
		value = 1 * -j;

	}
	value = value / 10;
}
else if(num > 0)
{
	for (int j = 1; value < num; j *= 10)
	{
		value = 1 * j;

	}
	value = value / 10;
}
else
{
	value = 0;
}

curnum = num;
for (float i = 1; value != 0; i *= 10)
{
	curdigit = curnum / value;
	curnum = curnum - curdigit * value;
	if (curdigit == 3 || curdigit == 6)
	{
		num -= curdigit * value;
	}
	value = value / 10;
}
std::cout << "Число без 3 и 6: " << num << "\n\n\n";

//Задача 4
int num1;
int curnum1;
int curdigit1;
std::cout << "Введите целое число: \n";
std::cin >> num1;
if (num1 < 0)
{
	for (int j = 1; value > num1; j *= 10)
	{
		value = 1 * -j;

	}
	value = value / 10;
}
else if (num1 > 0)
{
	for (int j = 1; value < num1; j *= 10)
	{
		value = 1 * j;

	}
	value = value / 10;
}
else
{
	value = 0;
}

curnum1 = num1;
for (int i = 1; value != 0; i *= 10)
{
	curdigit1 = curnum1 / value;
	curnum1 = curnum1 - curdigit1 * value;
	if ((curdigit1 * curdigit1) % num1 == 0 && (curdigit1 * curdigit1 * curdigit1) % num1 != 0)
	{
		std::cout << curdigit1 << "\n";
	}
	value /= 10;
}
std::cout << "\n\n\n";

//Задача 5
int num2;
int curnum2;
int curdigit2;
int sum = 0;
std::cout << "Введите целое число: \n";
std::cin >> num2;
if (num2 < 0)
{
	for (int j = 1; value > num2; j *= 10)
	{
		value = 1 * -j;

	}
	value = value / 10;
}
else if (num2 > 0)
{
	for (int j = 1; value < num2; j *= 10)
	{
		value = 1 * j;

	}
	value = value / 10;
}
else
{
	value = 0;
}

curnum2 = num2;

for (int i = 1; value != 0; i *= 10)
{
	curdigit2 = curnum2 / value;
	curnum2 -= curdigit2 * value;
	sum += curdigit2;
	value /= 10;
}
if (sum * sum == num2 * num2)
{
	std::cout << "Куб суммы цифр этого числа равен квадрату этого числа\n\n\n";
}
else
{
	std::cout << "Куб суммы цифр этого числа не равен квадрату этого числа\n\n\n";
}

//Задание 6
int num3;
std::cout << "Введите целое число: \n";
std::cin >> num3;
for (int i = 1; i != num3; i++)
{
	if (num3 % i == 0)
	{
		std::cout << i << "\n";
	}
}
std::cout << "\n\n\n";

//Задание 7
int num4;
int num5;
std::cout << "Введите первое целое число: \n";
std::cin >> num4;
std::cout << "Введите второе целое число: \n";
std::cin >> num5;
for (int i = 1; i != num4 && i != num5; i++)
{
	if (num4 % i == 0 && num5 % i == 0)
	{
		std::cout << i << "\n";
	}
}
std::cout << "\n\n\n";
}