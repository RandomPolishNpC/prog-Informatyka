#include<iostream>
using namespace std;
int main(){
	int a;
	int b;
	int c = 1;
	cout << "podaj szerokosc: ";
	cin >>a;
	cout << "podaj wysokosc: ";
	cin >>b;
	for (int i = 1; i <= b; i++){
		for (int j = 1; j <= a;j++){
			cout <<"	"<<c;
			c += 2;
		}
	cout <<endl;
	}
	return 0;
}