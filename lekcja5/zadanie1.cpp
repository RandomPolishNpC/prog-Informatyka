#include<iostream>
using namespace std;
int main(){
	int a;
	int b;
	char c;
	cout << "podaj pierwsza liczbe" <<endl;
	cin >> a;
	cout << "podaj druga liczbe" <<endl;
	cin >> b;
	cout << "podaj znak matematyczny z podanych" <<endl << "- + * /" <<endl;
	cin >> c;
	switch(c){
		case '-':
			cout << "wynik: "<<(a-b);
			break;
		case '+':
			cout <<"wynik: "<<(a+b);
			break;
		case '*':
			cout << "wynik: "<<(a*b);
			break;
		case '/':
			if (a==0){
				cout << "syntax error";
				return 0;
			} else if (b==0){
				cout << "syntax error";
				return 0;
			}
			cout << "wynik: "<<(a/b);
			break;
	}

	return 0;
}