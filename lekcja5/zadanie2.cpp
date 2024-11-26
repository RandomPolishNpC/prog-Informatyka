#include<iostream>
using namespace std;
int main(){
	float a;
	char b;
	cout << "podaj temperature w celciuszach" <<endl;
	cin >> a;
	cout << "podaj teperature docelowa (F-farenheit K-kelvin)"<<endl;
	cin >> b;
	switch(b){
		case 'F':
			cout << "w farenheit'ah = " << a*(9/5+32);
			break;
		case 'K':
			cout << "w kelvin'ah = " << (a*370.15);
			break;
		case 'f':
			cout << "w farenheit'ah = " << a*(9/5+32);
			break;
		case 'k':
			cout << "w kelvin'ah = " << (a*370.15);
			break;
		default:
			cout << "error";
			return 0;
			break;
	}
	return 0;
}