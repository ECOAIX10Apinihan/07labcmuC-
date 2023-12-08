#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

char before(char x){
	char z;
	if (x >= 'A' && x <= 'Z')
	{
		if ( x == 'A')
		{
			z = 'Z';
			return z;
		}else{
			z = x-1;
			return z;
		}
	}else
	{
		z = '0';
		return z;
	}
}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
