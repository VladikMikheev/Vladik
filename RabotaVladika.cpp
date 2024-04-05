#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	cout << "First num: ";
	cin >> a;
	cout << "Second num: ";
	cin >> b;
	cout << "Sum:" << a+b << endl;
}