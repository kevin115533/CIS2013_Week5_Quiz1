#include <iostream>
#include <stdlib.h>

using namespace std;

void primeNum(int x, int y) {
	for (int i = x; i <= y; i++) {
		bool prime = true;
		for(int p=2; p<i;p++)
			if(i%p==0){
				prime = false;
		}
		if (prime) { cout << i << " is prime" << endl; }
	}
}

int leastComm(int x, int y) {
	int oneCounter = x;
	int twoCounter = y;

	while (x != y) {
		if (x < y) {
			x += oneCounter;
		}
		else {
			y += twoCounter;
		}
	}
	cout << "The least common multiplier is " << y << endl;
	return y;
}


	int main() {
		int num1, num2,lcm;
		char stay;

		cout << "Enter your first number" << endl;
		cin >> num1;

		cout << "Enter your second number" << endl;
		cin >> num2;

		lcm = leastComm(num1, num2);
		primeNum(num1, lcm);

		cin >> stay;
		
		return 0;
	}