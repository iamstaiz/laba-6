#include "Movie.h"
using namespace std;
Movie::Movie(string name_, string genre_, int age_) : name{ name_ }, genre{ genre_ }, age{ age_ } {}
Movie::~Movie(){}
void Movie::write_file() {
	ofstream list("Movies.txt", ios::app);
	if (list.is_open()) {
		string buff;
		buff = to_string(this->age);
		list << buff.length() << " " << this->age << " ";
		list << this->name.length() << " " << this->name << " ";
		list << this->genre.length() << " " << this->genre << "\n";
	}
	else {
		cout << " File isn`t open.\n";
	}
}
