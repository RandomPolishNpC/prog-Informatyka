#include <iostream>
using namespace std;
int main(){
	int a;
	cout << "podaj liczbe punktow otrzymana na egzaminie: " << endl;
	cin >> a;
	if ((a>=0) && (a<=49)){
		cout << "niedostateczna";
	} else if ((a>=50) && (a<=69)){
		cout << "dostateczna";
	} else if ((a>=70) && (a<=84)){
		cout << "dobra";
	} else if ((a>=85) && (a<=99)){
		cout << "bardzo dobra";
	} else if (a==100){
		cout << "celujaca";
	} else if (a>100){
		cout << "bardzo smieszne ._.";
	}
	return 0;
}