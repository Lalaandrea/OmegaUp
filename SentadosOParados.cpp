#include <iostream>
using namespace std;

int main() {
	long long int r, s, b, aux1, aux2;
	cin >> r >> s >> b;
	aux1 = r * s;
	aux2 = b - aux1;
	if (aux2 < 0){
		aux2 = 0;
		aux1=b;
	}

	cout <<  aux1 << " " << aux2 << endl;
	
	return 0;
}