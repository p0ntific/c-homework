#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib> // для EXIT_SUCCESS
#include <clocale> // для setlocale
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian"); //для вывода русских букв
	vector <int> arr = { 1, 5, 7, 4, 1243 };
	int arr_copy[5] = { 1,2,3,4,5 };
	copy(arr.begin(), arr.end(), arr_copy);
	for (int x : arr_copy)
		cout << x << " ";
	return EXIT_SUCCESS;
}
