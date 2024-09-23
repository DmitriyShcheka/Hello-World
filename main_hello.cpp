#include <iostream>
#include <fstream>
#include "main.h"
 /* На самом деле так делать нехорошо, потому что это загрязняет
 * пространство имен и иногда провоцирует конфликты имет, поэтому 
 * привыкай просто везде писать std:: */
using namespace std;

/* Молодец, что поработал с файлами, но в этом задании это перебор, конечно. Плюс
 * эта функция не то чтобы будет кому-то нужна в таком виде. В функции надо выделять
 * то, что имеет потенциал к переиспользованию. Большую часть этого стоит вынести просто
 * в main, и выделить операцию вывода hello + слово */
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
