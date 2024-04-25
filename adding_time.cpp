// Accepting time and adding them and storing the addition in third time
#include<iostream>
using namespace std;

class Time{
    public:
    int hrs,mins,secs;
    void set_Time(int a=0,int b=0,int c=0){
    if(a>=24 || b>59 || c>59){
    cout << "Please enter a valid time !!!" << endl;
    exit(0);}
    hrs=a;
    mins=b;
    secs=c;}

    void add_Time(Time t1,Time t2){
    hrs=t1.hrs + t2.hrs;
    mins=t1.mins + t2.mins;
    secs=t1.secs + t2.secs;
    if(secs>60){
    secs-=60;
    mins++;
    }
    if(mins>60){
    mins-=60;
    hrs++;
    }
    if(hrs>24){
    hrs-=24;
    }
    }

    void display_Time(void){
    cout<< "The time is : "<<hrs<<":"<<mins<<":"<<secs<<endl;}

    };

int main(){
    Time t1,t2;
    int t1a,t2a,t1b,t2b,t1c,t2c;
    cout << "Enter the hours for first time :" ;
    cin >> t1a;
    cout << "Enter the minutes for first time :" ;
    cin >> t1b;
    cout << "Enter the seconds for first time :" ;
    cin >> t1c;
    cout << "Enter the hours for second time :" ;
    cin >> t2a;
    cout << "Enter the minutes for second time :" ;
    cin >> t2b;
    cout << "Enter the seconds for second time :" ;
    cin >> t2c;

    t1.set_Time(t1a,t1b,t1c);
    t2.set_Time(t2a,t2b,t2c);
    Time t3;
    t3.add_Time(t1,t2);
    t3.display_Time();
return 0;
}