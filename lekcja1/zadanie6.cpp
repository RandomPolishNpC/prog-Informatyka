#include <iostream>
using namespace std;
int main(){
	int a;
	int b;
	cout << "podaj pierwsza liczbe " <<endl;
	cin >> a;
	cout << "podaj druga liczbe " << endl;
	cin >> b;
	int c = a+b;
	cout << "suma " << c << endl;
	if (c%2 == 0)(
	cout << "suma jest parzysta"
	);else(
	cout << "suma nie jest parzysta");
	return 0;
}