#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using std::cout; using std::cin; using std::endl; using std::string; using std::vector;

class Date {
public:
	Date(const string &str);
	void printData() {
		cout << "month: " << m
			 << " day: " << d
			 << " year: " << y << endl; 
	}
private:
	unsigned getYear(const string &str);
	unsigned getMonth(const string &str);
	unsigned getDay(const string &str);
	unsigned lengthOfStr(unsigned curr, const string &str);
	unsigned m = 0, d = 0, y = 0;
};

Date::Date(const string &str) {
	unsigned curr = 0;
	string month = str.substr(curr, lengthOfStr(curr, str));
	curr += lengthOfStr(curr, str) + 1;    // @improve: change inside lengthOfStr?
	string day = str.substr(curr, lengthOfStr(curr, str));
	curr += lengthOfStr(curr, str) + 1;
	string year = str.substr(curr);
	m = getMonth(month);
	d = getDay(day);
	y = getYear(year);
}

unsigned Date::lengthOfStr(unsigned curr, const string &str) {
	string data = "1234567890abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	unsigned length = 0;
	size_t not_data = str.find_first_not_of(data, curr);
	if (not_data != string::npos) 
		length = not_data - curr;
	return length;
}

unsigned Date::getMonth(const string &str) { 
	if (isdigit(str[0]))
		return stoi(str);
	vector<string> mv = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Nov", "Oct", "Dec"};
	for (size_t i=0; i!=mv.size(); ++i) {
		if (str.find(mv[i]) != string::npos && str.find(mv[i]) == 0)
			return i+1;
	}
	return 0;
}
unsigned Date::getDay(const string &str) { return stoi(str); }
unsigned Date::getYear(const string &str) { return stoi(str); }

int main(void) {
	Date d1("9/1/1990");
	Date d2("dasdFeb 22 1910");  
	Date d3("Jun 1, 1900");
	Date d4("Junxxxeww 1, 1900"); // @improve: invalid data
	d1.printData();
	d2.printData();
	d3.printData();
	d4.printData();
}



// other solution
// #include <iostream>
// #include <string>
// #include <vector>
/*@Soyn
*Ex 9.51
*Date: 2015.6.12
*/
// using namespace std;
// class My_date{
// private:
//     unsigned year, month, day;
// public:
//     My_date(const string &s){

//         unsigned tag;
//         unsigned format;
//         format = tag = 0;

//         // 1/1/1900
//         if(s.find_first_of("/")!= string :: npos)
//         {
//             format = 0x01;
//         }

//         // January 1, 1900 or Jan 1, 1900
//         if((s.find_first_of(',') >= 4) && s.find_first_of(',')!= string :: npos){
//             format = 0x10;
//         }
//         else{ // Jan 1 1900
//             if(s.find_first_of(' ') >= 3
//                 && s.find_first_of(' ')!= string :: npos){
//                 format = 0x10;
//                 tag = 1;
//             }
//         }

//         switch(format){

//         case 0x01:
//             day = stoi(s.substr(0, s.find_first_of("/")));
//             month = stoi(s.substr(s.find_first_of("/") + 1, s.find_last_of("/")- s.find_first_of("/")));
//             year = stoi(s.substr(s.find_last_of("/") + 1, 4));

//         break;

//         case 0x10:
//             if( s.find("Jan") < s.size() )  month = 1;
//             if( s.find("Feb") < s.size() )  month = 2;
//             if( s.find("Mar") < s.size() )  month = 3;
//             if( s.find("Apr") < s.size() )  month = 4;
//             if( s.find("May") < s.size() )  month = 5;
//             if( s.find("Jun") < s.size() )  month = 6;
//             if( s.find("Jul") < s.size() )  month = 7;
//             if( s.find("Aug") < s.size() )  month = 8;
//             if( s.find("Sep") < s.size() )  month = 9;
//             if( s.find("Oct") < s.size() )  month =10;
//             if( s.find("Nov") < s.size() )  month =11;
//             if( s.find("Dec") < s.size() )  month =12;

//             char chr = ',';
//             if(tag == 1){
//                 chr = ' ';
//             }
//             day = stoi(s.substr(s.find_first_of("123456789"), s.find_first_of(chr) - s.find_first_of("123456789")));

//             year = stoi(s.substr(s.find_last_of(' ') + 1, 4));
//             break;
//         }
//     }

//     void print(){
//         cout << "day:" << day << " " << "month: " << month << " " << "year: " << year;
//     }
// };
// int main()
// {
//     My_date d("Jan 1 1900");
//     d.print();
//     return 0;
// }
