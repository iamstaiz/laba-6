#include <iostream>
#include "User.h"
using namespace std;

int main(){
	int punct = 0;
	bool exit;
	exit = 0;
	while (exit ==0){
		cout << "1.user" << endl;
		cout << "2.admin"<< endl;
		cout << "3.exit" << endl;
		try {
			string check;
			cout << "Choose:";
			cin >> check;
			size_t size = check.find_first_not_of( "0123456789");
			if (size == 0)
				throw string{ "Invalid input!\n" };
			punct = stoi(check, 0);
		}
		catch (string& ex) {
			cout << ex;
		}
		if (punct == 1) {

		}else if(punct == 2){

		}
		else if (punct == 3) {
			exit = 1;
		}
	}
	return 0;
}
