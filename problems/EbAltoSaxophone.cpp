#include <iostream>
#include <array>
#include <list>
#include <map>
#include <string>
using namespace std;

int main(void){

	int ite;
	cin >> ite;

	map <char, list<int>> notes = {
		{'c',{2,3,4,7,8,9,10}},
		{'d',{2,3,4,7,8,9}},
		{'e',{2,3,4,7,8}},
		{'f',{2,3,4,7}},
		{'g',{2,3,4}},
		{'a',{2,3}},
		{'b',{2}},
		{'C',{3}},
		{'D',{1,2,3,4,7,8,9}},
		{'E',{1,2,3,4,7,8}},
		{'F',{1,2,3,4,7}},
		{'G',{1,2,3,4}},
		{'A',{1,2,3}},
		{'B',{1,2}}
	};
	
	// take in the numbers of iteration
	for (int j = 0; j < ite; j++){
		
		// take in the pressed notes
		string input;
		cin >> input;

		// init output array
		array<int, 10> result = {0};

		// calculate the input
		for (char c: input){
			list<int> ps = notes[c];

			for (int p: ps){
				result[p]++;
			}
		}

		// produce the output
		for (int i = 0; i < result.size(); i++){
			cout << result[i] << " ";
		}



	}
}









