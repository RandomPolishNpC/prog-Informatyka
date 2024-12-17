#include<iostream>
using namespace std;
int main(){
	int a;
	int b = 0;
	cout << "podaj liczbe" << endl;
	cin >> a;
	for (int i = 0;i <= a; i++)
	{
		b += i;
	}
	cout << "wynik = "<< b <<endl;
	return 0;
}