#pragma once
#include <string>
#include <iostream>
#include <fstream>
using namespace std;
class Movie{
private:
	string name;
	string genre;
	int age;
public:
	Movie(string name_, string genre_, int age_);
	~Movie();
	void write_file();
	void read_file();
};