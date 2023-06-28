#include <iostream>
using namespace std;

int main()
{
	//Task1 В одномерном массиве, заполненном случайными числами,
	// определить минимальный и максимальный элементы.
	const int size = 10;
	srand(time(0));
	int array[size];
	int min = 1, max = 1;
	for (int i = 0; i < size; i++)
	{	
		array[i] = -10 + rand() % 21;
	}
	for (int i = 0; i < size; i++)
	{
		min = array[i] > min ? min : array[i];
		max = array[i] < max ? max : array[i];
	}
	cout << min << " " << max << endl;

	//Task2 В одномерном массиве, заполненном случайными числами
	// в заданном пользователем диапазоне, найти сумму элементов, значения которых меньше указанного пользователем.
	srand(time(0));
	int arr[size];
	int low, high, number, sumOfArr = 0;
	cout << "Start of range = ";
	cin >> low;
	cout << "End of range = ";
	cin >> high;
	for (int i = 0; i < size; i++)
	{	
		arr[i] = low + rand() % (high-low);
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "Enter a number: ";
	cin >> number;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < number)
		{
			sumOfArr += arr[i];
		}
	}
	cout << sumOfArr << endl;


	//Task3 Пользователь вводит прибыль фирмы за год (12 месяцев). Затем пользователь вводит диапазон(например, 3 и 6 — поиск
	// между 3 - м и 6 - м месяцем).Необходимо определить месяц, в котором прибыль была максимальна и месяц, в котором
	// прибыль была минимальна с учетом выбранного диапазона.
	const int Size = 12;
	int firm[Size];
	for (int i = 0; i < Size; i++)
	{
		cout << "Enter the profit of the month: ";
		cin >> firm[i];
	}
	int x, y;
	cout << "Enter start of range from 1 to 12: ";
	cin >> x;
	cout << "Enter end of range from " << x << " to 12: ";
	cin >> y;
	int minProfit = firm[x], maxProfit = 0;
	for (int i = x-1; i < y; i++)
	{	
		minProfit = firm[i] > minProfit ? minProfit : firm[i];
		maxProfit = firm[i] < maxProfit ? maxProfit : firm[i];
	}	
	cout << "Max profit = " << maxProfit << endl;
	cout << "Min profit = " << minProfit << endl;


	//Task4 В одномерном массиве, состоящем из N вещественных чисел вычислить :
	//■ Сумму отрицательных элементов.
	//■ Произведение элементов, находящихся между min и max элементами.
	//■ Произведение элементов с четными номерами.
	//■ Сумму элементов, находящихся между первым и последним отрицательными элементами.
	
	const int SIZE = 7;
	double Arr[SIZE] = { 3.14, -3.14, 5.5, -3.5, -1.2, -1.4, 7.6 };
	float elements = 0.0;
	int Minimum = 1, Maximum = 1;
	int Negative = -0.0, Positive = -0.0;
	int product = 1;
	int sumOfNumbers = 0;
	for (int i = 0; i < SIZE; i++)
	{
		if (Arr[i] < 0)
		{
			elements += Arr[i];
		}
		Minimum = Arr[i] > Minimum ? Minimum : Arr[i];
		Maximum = Arr[i] < Maximum ? Maximum : Arr[i];
		if (i % 2 == 0)
		{
			product *= Arr[i];
		}
		if (Arr[i] < 0)
		{
			Negative = Arr[i] > Negative ? Negative : Arr[i];
			Positive = Arr[i] < Positive ? Positive : Arr[i];
			if (Arr[i] != Negative || Arr[i] != Positive) 
			{
				sumOfNumbers += Arr[i];
			}
		}
		
		
	}
	cout << "Sum of negative numbers = " << elements << endl;
	cout << "Product of minimum number and maximum number = " << Minimum * Maximum << endl;
	cout << "Product of numbers with even numbers = " << product << endl;
	cout << "Sum of negative numbers without min negative number and max negative number = " << sumOfNumbers << endl;

}
