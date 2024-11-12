#include<iostream>
using namespace std;
int main (){
	int a;
	cout << "podaj liczbe calkowita" << endl;
	cin >> a;
	if (a%2 == 0){
		cout << "liczba jest parzysta";
	}else {
		cout << "liczba jest nieparzysta";
	}
	cout << endl;
	if (a%3 == 0){
		cout << "liczba jest podzielna przez 3";
	} else {
		cout << "liczba nie jest pozielna przez 3";
	}
}