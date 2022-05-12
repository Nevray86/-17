#include <iostream>

using namespace std;

int main() {
	// Задача 1

	/*int input_min;
	const int min_in_clok = 60;

	cout << "input_min ";
	cin >> input_min;
	int clok = input_min / min_in_clok;
	int min = input_min - clok * min_in_clok;
	cout << clok << " clok " << min << " min";*/

	// Задача 2

	/*int user_input;
	const float One_inch = 2.54;
	cout << "user input ";
	cin >> user_input;
	int diagonal = user_input * One_inch + 1; //округляем в большуу сторону при помощи +1
	cout << "diagonal: " << diagonal;*/

	//Задача 3

	float Feed_for_dey; // количество корма в граммах
	int Days_in_month = 30;
	cout << "Feed_for_dey (g): ";
	cin >> Feed_for_dey;
	float Feed_for_month = Feed_for_dey * Days_in_month / 1000; // переводим граммы в килограммы делим на 1000
	cout << "Feed for a month (kg): " << Feed_for_month;











	return 0;


}