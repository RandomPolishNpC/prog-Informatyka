#include <iostream>
using namespace std;
int main(){
	int a;
	int b;
	cout << "podaj pierwsza liczbe: ";
	cout << endl;
	cin >> a;
	cout << endl;
	cout << "podaj druga liczbe: ";
	cout << endl;
	cin >> b;
	cout << endl;
	cout << "suma " << a+b;
	cout << endl;
	cout << "roznica " << a-b;
	cout << endl;
	cout << "iloczyn " << a*b;
	cout << endl;
	cout << "iloraz " << a/b;
	cout << endl;
	cout << "reszta z dzielenia " << a-(a/b*b);
	return 0;
}