#include "array.h"

bool checkString(string word) {
	int a = 'a';
	int z = 'z';
	cout << a << "\n";
	cout << z << "\n";
	int len = z - a + 1;
	cout << len << "\n";
	int chars[len];
	for(int w : word) {
		cout << w << "\n";
		chars[checkChar(w) - 'a']++;
	}
	bool state = true;
	for(int i : chars) {
		cout << i << "\n";
		if((i % 2) != 0 && state == true) {
			state = false;
		} else return false;
	}
	return false;
}

char checkChar(char c) {
	char x;
	if('A'<= c && c >= 'Z' ) {
		return 'a' + (c - 'A');
	} else if ('a' <= c && c >= 'z') {
		return c;
	}
	return -1;
} 


int main() {
	string s = "aAbBzZ";
	checkString(s);
}