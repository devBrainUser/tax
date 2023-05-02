#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	double cost, tax;

	cout << "¬ведите стоимость продукта:";
	cin >> cost;
	cout << endl;

	cout << "¬ведите процент налога в стране:";
	cin >> tax;

	cout << "»тогова€ стоимость:"<<(cost/100)*(100+tax);
}