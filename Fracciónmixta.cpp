#include <iostream>
#include <tgmath.h> 
using namespace std;

int main() {
	long long int n, m, b, aux1, aux2;
	cin >> n >> m;
	if( n % m == 0){
		cout << n / m << endl;
	}
	else{
		aux1 = int(floor( n / m));
		aux2 = n - aux1 * m;
		cout <<  aux1<<" "<< aux2 << "/" << m << endl;

	}

	
	
	return 0;
}