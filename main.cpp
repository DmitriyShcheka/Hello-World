#include <iostream>
#include "main.h"

using namespace std;

void print_hello() {
	cout << "Hello, world!" << endl;
	while (true){
		string str;
		cout << "Write your text: ";
		cin >> str;
		cout << "Hello, " << str << "!" << endl;
	}
}
