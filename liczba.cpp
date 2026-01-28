#include <iostream>
using namespace std;

int main() {
    int n;
    if (cin >> n) {
        if(n>0){
		cout<<n<<endl;
}else{
	cout<<"Blad: To nie jest liczba dodatnia naturalna"<<endl;
}
    }
    return 0;
}
