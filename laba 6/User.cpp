#include "User.h"
User::User(string _username):username(_username){}
ostream& operator<<(ostream& os, User& user) {
	os << user.username << endl;
	return os;
}
istream& operator>>(istream& is, User& user) {
	cout << "User name ";
	is >> user.username;
	return is;
}