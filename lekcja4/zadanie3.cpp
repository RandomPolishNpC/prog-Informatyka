#include<iostream>
using namespace std;
int main(){
	int a;
	cout << "podaj liczbe a:";
	cin >> a;
	cout << "liczby nieparzyste od 1 do " <<a<<endl;
	for (int b = 1;a >= b;b += 2){
		cout << b << endl;
	}
	return 0;
}