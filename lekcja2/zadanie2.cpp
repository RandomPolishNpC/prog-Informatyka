#include<iostream>
using namespace std;
int main(){
	int a;
	float b;
	cout << "podaj wage (kg)" <<endl;
	cin >> a;
	cout << "podaj wzrost (metry)"<<endl;
	cin >> b;
	cout <<endl;
	float c = (a/(b*b));
	cout << "twoje bmi wynosi " << c << endl;
	if ((c<18.5)&&(c>0)){
		cout << "niedowaga";
	} else if ((c>=18.5) && (c<=24.9)){
		cout << "w normie";
	} else if ((c>=25)&&(c<=29.9)){
		cout << "nadwaga";
	} else if ((c>=30)&&(c<=50)){
		cout << "otylosc";
	} else if (c<=0){
		cout << "szkielecik";
	} else if (c>=50.1){
		cout << "big mac";
	}
	return 0;
}