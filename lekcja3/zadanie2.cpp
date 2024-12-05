#include<iostream>
using namespace std;
int main(){
	int a;
	int b = 0;
	int c = 0;
	cout << "podaj liczbe" << endl;
	cin >> a;
	while(a>=b){
		c +=  b;
		b += 1;
	}
	cout << c;
	return 0;
}