#include <iostream>
#include <ctime>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	//Вариант 2
	//1.
	/*const int n = 12;
	int summa = 0;
	int arr[n];
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 5;
		cout << arr[i] << ' ';
		summa += arr[i];
	}
	cout << summa;*/
	//4.
	/*const int n = 15;
	int summa = 0;
	int arr[n];
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 25;
		if (arr[i] % 2 != 0) {
			summa += arr[i];
		}
	}
	cout << summa;*/
	//3.
	//const int n = 11;
	//int k;  // количество
	//int arr[n];
	//for (int i = 0; i < n; i++) {
	//	arr[i] = rand() % 20;
	//	if (arr[i] % 3 == 0 || arr[i] % 5 == 0 || arr[i] % 7 == 0) {
	//		k += 1;
	//	}
	//}
	//cout << k;



}