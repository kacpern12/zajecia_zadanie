#include <iostream>
using namespace std;

bool czy_doskonala(int n) {
    if (n < 2) return false;
    int suma = 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            suma += i;
            if (i * i != n) suma += n / i;
        }
    }
    return suma == n;
}


int main() {
    int n;
    if (cin >> n) {
	if(n>0){
        cout << n <<(czy_doskonala(n) ? " jest liczba doskonala " : " nie jest liczba doskonala")<< endl;
	}else{
	cout<<"Blad: To nie jest liczba dodatnia naturalna"<<endl;
	}
    }
    return 0;
}
