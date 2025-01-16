#include<iostream>
using namespace std;
int main(){
	int n;
	cout << "podaj n" <<endl;
	cin >> n;
	for (int p = 1; p != (n+1); p++){
		cout << p << "^2 = "<<(p*p)<<endl;
	}
	return 0;
}