#include<iostream>
using namespace std;
int main(){
	int a;
	int b = 2;
	cout << "podaj liczbe n" <<endl;
	cin >> a;
	while(b<=a)
	{
		cout << b <<endl;
		b += 2;
	}
	return 0;
}