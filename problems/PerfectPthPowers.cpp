#include <iostream>
#include <cmath>

using namespace std;

int main(void){
	int x;
	std::cin >> x;

	if (x > 0){
		
		int base = 1;
		int power = 1;
		
		for (int b = 2; b <= sqrt(x); b++){
			
			float exp = log(x)/log(b);
			if (ceilf(exp) == exp){
				power = exp;
				std::cout << power << endl;
				return 0;
			
			}
		}
		std::cout << power << endl;
	} 
	return 0;
}