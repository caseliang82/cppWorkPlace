// my first program in C++
#include <iostream>
#include <math.h>
using namespace std;
	
int Planina(int ite){
		
		int start = 2;
		int points = 4;

		for (int i = 0; i < ite; i++){
			start += pow(2,i);
		}


		return start * start ;
	
}


int main(){
  int i;
  cin >> i;
  cout << Planina(i) << "\n";
}