#include <iostream>
#include <vector>
#include <string>  

using namespace std;

#include "13_36_msgfldr.h"

// @bugfix: number of folders is problematic
int main() {  
    string s1("cutter_point1");  
    string s2("cutter_point2");  
    string s3("cutter_point3");  
    string s4("cutter_point4");  
    string s5("cutter_point5");  
    string s6("cutter_point6");  
  
    // all new messages, no copies yet  
    Message m1(s1);  
    Message m2(s2);  
    Message m3(s3);  
    Message m4(s4);  
    Message m5(s5);  
    Message m6(s6);  
  
    Folder f1;  
    Folder f2;  
  
    m1.save(f1); 
    m3.save(f1); 
    m5.save(f1);  
    m1.save(f2);  
    m2.save(f2); 
    m4.save(f2); 
    m6.save(f2);  
  
    // create some copies  
    Message c1(m1);  
    Message c2(m2), c4(m4), c6(m6);  
   // now some assignments  
    m2 = m3;  
    m4 = m5;  
    m6 = m3;  
    m1 = m5; 

  
    // finally, self-assignment  
    m2 = m2;  
    m1 = m1;  
  
    vector<Message> vm;  
    cout << "capacity（初始vm容纳量）: " << vm.capacity() << endl;  
    vm.push_back(m1);  
  
    cout << "capacity（添加m1后vm容纳量）: " << vm.capacity() << endl;  
    vm.push_back(m2);  
  
    cout << "capacity（添加m2后vm容纳量）: " << vm.capacity() << endl;  
    vm.push_back(m3);  
  
    cout << "capacity（添加m3后vm容纳量）: " << vm.capacity() << endl;  
    vm.push_back(m4);  
  
    cout << "capacity（添加m4后vm容纳量）: " << vm.capacity() << endl;  
    vm.push_back(m5);  
  
    cout << "capacity（添加m5后vm容纳量）: " << vm.capacity() << endl;  
    vm.push_back(m6);  
    cout << "capacity（添加m6后vm容纳量）: " << vm.capacity() << endl;  
  
    vector<Folder> vf;  
    cout << "capacity（初始vf容纳量）: " << vf.capacity() << endl;  
    vf.push_back(f1);  
  
    cout << "capacity（添加f1后vf容纳量）: " << vf.capacity() << endl;  
    vf.push_back(f2);  
  
    cout << "capacity（添加f2后vf容纳量）: " << vf.capacity() << endl;  
    vf.push_back(Folder(f1));  
  
    cout << "capacity（再添加f1后vf容纳量）: " << vf.capacity() << endl;  
    vf.push_back(Folder(f2));  
  
    cout << "capacity（再添加f2后vf容纳量）: " << vf.capacity() << endl;  
    vf.push_back(Folder());  
    cout << "capacity（再添加空Folder后vf容纳量）: " << vf.capacity() << endl;  
  
    Folder f3;  
    f3.save(m6);  
    vf.push_back(f3);  
    cout << "capacity（再添加空f3后vf容纳量）: " << vf.capacity() << endl;  
  
    cout<<"m1到m6储存于folders的个数："<<endl;  
    m1.show(); m2.show(); m3.show();  

    m4.show(); m5.show(); m6.show();  
    cout<<"f1到f3中储存的Message的个数："<<endl;  
    f1.show(); f2.show(); f3.show();  
    cout<<"c1,c2,c4,c6储存于folders的个数："<<endl;  
    c1.show(); c2.show();  
    c4.show(); c6.show();  
  
    cout << endl;  
    return 0;  
}  