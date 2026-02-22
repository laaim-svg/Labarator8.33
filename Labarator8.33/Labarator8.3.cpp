#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru_RU.UTF-8");
	const int SIZE = 10;
	{
		cout << "\n В-1 Статистический масив, индексная адресация " << endl;
		int arr[SIZE];
		for (int i = 0; i < SIZE; i++) {
			arr[i] = i * i;
		}
		for (int i = 0; i < SIZE; i++) {
			cout << "arr[" << i << "]=" << arr[i] << endl;
		}
	}
	{
		cout << "\n В-2 Статестический массив, косвенная адресация" << endl;
		int arr[SIZE];
		int* p = arr;
		for (int i = 0; i < SIZE; i++) {
			*(p + i) = i * i;

		}
		for (int i = 0; i < SIZE; i++) {
			cout << "arr[" << i << "]=" << *(p + i) << endl;

		}
	}
	{
		cout << "\n В-3 Динамический массив, индексная адресация" << endl;
		int* D = new int[SIZE];
		for (int i = 0; i < SIZE; i++) {
			D[i] = i * i;
		}
		for (int i = 0; i < SIZE; i++) {
			cout << "Darr[" << i << "]=" << D[i] << endl;
		}
		delete[] D;
	}
	{
		cout << "\n В=4 Динамический массив, косвенная адресация" << endl;
		int* t = new int[SIZE];
		for (int i = 0; i < SIZE; i++) {
			*(t + i) = i * i;
		}
		for (int i = 0; i < SIZE; i++) {
			cout << "Darr[" << i << "]=" << *(t + i) << endl;
		}
		delete[] t;
	}
	return 0;
}//проверка