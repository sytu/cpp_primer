#include <iostream>
#include <memory>

using namespace std;
	
struct destination {};
struct connection {};

connection connect(destination *pd) {
	cout << "open connection" << endl; 
	return connection();
}
void disconnect(connection c) {
	cout << "close connection" << endl; 
}

void f(destination &d) {
	cout << "directly control connection" << endl; 
	connection c = connect(&d);
	cout << endl; 
}

void end_connection(connection *p) { disconnect(*p); }

void f_sp(destination &d) {
	cout << "using shared_ptr control connection" << endl; 
	connection c = connect(&d);
	shared_ptr<connection> p(&c, end_connection);
	cout << endl; 
}
int main(void) {
	destination d;
	f(d);
	f_sp(d);
}
