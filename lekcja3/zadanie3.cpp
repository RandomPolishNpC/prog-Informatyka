#include<iostream>
using namespace std;
int main(){
	int a;
	char b;
	do {
	cout << "podaj liczbe" << endl;
	cin >> a;	
	cout << "podales: " << a << endl;
	cout << "czy chcesz wprowadzic kolejna liczbe? (t/n)";
	cin >> b;
}while (b=='t');

	return 0;
}