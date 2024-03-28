 #include <iostream>



void say_hi() {
	std::cout << "Привет, мир!\n";
	std::cout << "Привет, всем!\n";
}

void mult_x2(int num) {
	std::cout << num * 2 << std::endl;
}

int sum(int a, int b) {
	return a + b;
}

void print_arr(int arr[], int const length) {
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ' ';
	std::cout << std::endl;
}//вывод массива


void mult_x5(int num) {  //параметр это нум это копия аргумента
	num *= 5;
}

void mult_arr_x5(int arr[]) {
	arr[1] *= 5;
}

void positive_indexes(int arr[], const int length) {
	for (int i = 0; i < length; i++)
		if (arr[i] > 0)
			std::cout << i << ' ';
	std::cout << std::endl;
}

unsigned long long factorial(int num) {
	if (num < 0)
		return 0;
	unsigned long long result = 1;
	for (int i = 2; i <= num; i++)
	result *= i;
	return result;
}




int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	int m;


	// функции, не возвращающие значения (процедуры)
	say_hi();
	say_hi();

	std::cout << "Введите число -> ";
	std::cin >> n;
	mult_x2(n);


	//функции возвращающие значения (истинные)
	std::cout << "Введите два числа -> ";
	std::cin >> n >> m;
	std::cout << n << " + " << m << " = " << sum(n, m) << std::endl;

	// функции принимающие массив
	const int size = 5;
	int arr[size]{ 7, 15, 42, 105, -77 };

	std::cout << "Массив: ";
	print_arr(arr, size);

	//параметры и аргументы функции

	n = 10;//аргумент
	mult_x5(n);
	std::cout << n << std::endl; // выводится аргумент

	int myarr[3]{ 15, 25, 35 };

	mult_x5(myarr[1]);
	std::cout << myarr[1] << std::endl;//25


		mult_arr_x5(myarr);
	std::cout << myarr[1] << std::endl;// 125

	//Задача 1 Индексы положительных элементов массива

	std::cout << "Задача 1. \nМассив:\n";
	const int size1 = 5;
	int arr1[size1]{ 0, 77, -5, -100, 42 };
	print_arr(arr1, size1);
	std::cout << "Индексы положительных элементов: \n";
	positive_indexes(arr1, size1);

	//Задача 2 Принимает число  и возвращает его факториал

	std::cout << "Задача 2 \n Введите число -> ";
	std::cin >> n;
	std::cout << n << "! = " << factorial(n) << std::endl;








	return 0;
}