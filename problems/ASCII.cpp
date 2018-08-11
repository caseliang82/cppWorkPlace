#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(void){
	
	string s1, s2, s3;
	cin >> s1 >> s2 >> s3;

	sort(s1.begin(),s1.end());
	sort(s2.begin(),s2.end());
	sort(s3.begin(),s3.end());
	
		for (int i = 0; i < s1.length(); i++){
			cout << s1[i] << " ";
		}
		cout << endl;
	

	
		for (int i = 0; i < s1.length(); i++){
			cout << s2[i] << " ";
		}
		cout << endl;
	

	
		for (int i = 0; i < s1.length(); i++){
			cout << s3[i] << " ";
		}
		cout << endl;
	
}


	