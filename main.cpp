#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	double cost, tax;

	cout << "������� ��������� ��������:";
	cin >> cost;
	cout << endl;

	cout << "������� ������� ������ � ������:";
	cin >> tax;

	cout << "�������� ���������:"<<(cost/100)*(100+tax);
}