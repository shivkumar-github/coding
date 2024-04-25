/*

*/

#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;
int main(){
    unordered_map<int, string> studentsum;
    map<int, string> studentsm;
    pair<int,string> p1(1, "shivkumar1");
    pair<int,string> p3(3, "shivkumar3");
    pair<int,string> p2(2, "shivkumar2");
    studentsum.insert(p1);
    studentsum.insert(p3);
    studentsum.insert(p2);
    studentsm.insert(p1);
    studentsm.insert(p3);
    studentsm.insert(p2);

    // for (auto i : studentsm )
    // {
    //     cout << i.first << " ";
    //     cout<< i.second << endl;
    // }
    
    // for (auto i : studentsum )
    // {
    //     cout << i.first << " ";
    //     cout<< i.second << endl;
    // }

    cout<< studentsm.front() << endl;
return 0;
}