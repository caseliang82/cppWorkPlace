#include <iostream>
#include <cmath>
using namespace std;

int main(void){

	int terms;
	cin >> terms;

	int result = 0;

	for (int i = 0; i < terms; i++){
		int next;
		cin >> next;
		int power = next % 10;
		int base = next/10;
		result += pow(base, power);
	}

	cout << result << endl;
	return 0;
}