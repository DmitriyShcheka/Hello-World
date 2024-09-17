#include <iostream>
#include <fstream>
#include "main.h"

using namespace std;

void print_hello() {
	ofstream file("test_data.txt", std::ios::app);

	if (file.is_open()){
		cout << "Hello, world!" << endl;

		file << "Program was started.\n-----------------\n";
		file << "print_hello was called.\n------------------\n\n\n";

		while (true){
			string str;
			cout << "Write your text (or off progr. with 'off'): ";
			cin >> str;

			if (str == "off") {
				file << "program completed successfully.\n-------------------\n\n";
				file.close();
				break;
			}

			cout << "Hello, " << str << "!" << endl;

			file << "\nuser write text:" << str << "\n";
			file << "\nprogram completed successfully.\ncucle update.\n--------------\n";
		}
		file.close();
	} else {
		cerr << "unable to open file test_data.txt" << endl;
	}
}
