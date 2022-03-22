#include <iostream>
using namespace std;
#include <time.h>
#include<algorithm>
#include<stdlib.h>
//задача 1
int sum(int a =0, int b=0, int c=0, int d=0, int i=0) {
	int res;
	res = a + b + c + d + i;
	return res;
}


		
	
// задача 2
void printArray(int array[], int length) {
	for (int i = 0; i < length; i++) {
		array[i] = rand() % (10 - (-10)) + (-10);
		if (array[i] < 0)
			cout << array[i] * (-1) << " ";
		else
			cout << array[i]<<" ";
	}
}
//задача 3
int s(int n) {
	static int s = 2;
	return s * n;
}

int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	// задача 1
	cout << " задача 1\n";
	int t = sum(2,6);
	cout << t<<endl;

	// Задача 2
	cout << " задача 2\n";
	int arr[10];
	printArray(arr, 10);
	cout << endl;
	// Задача 3 
	cout << " задача 3\n";
	cout << s(4)<<endl;
	cout << s(5)<<endl;
	cout << s(10)<<endl;

	return 0;
}