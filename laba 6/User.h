#include <string>
#include <iostream>
#include <fstream>
using namespace std;

class User {
protected:
    string username;


public:
    User(string _username);
    ~User();
    friend ostream& operator<<(ostream& os, User& user);
    friend istream& operator>>(istream& is, User& user);
};