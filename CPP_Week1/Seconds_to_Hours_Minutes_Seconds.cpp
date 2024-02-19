//Write a C++ program to convert the time in seconds to hours, minutes and seconds.
//Aakanxa Modha
//230970031

#include<iostream>
using namespace std;

class Time
{
        public:
                int hrs, mins, sec, rem_sec;

                void getTime()
                {
                        cout<<"Converting the time in seconds to hours:minutes:seconds :- "<<endl;
                        cout<<"==========================================================="<<endl;
                        cout<<"Enter time in seconds: "<<endl;
                        cin>>sec;
                }

                void calculateTime()
                {
                        hrs = sec/3600;
                        rem_sec = sec%3600;
                        mins = rem_sec/60;
                        rem_sec = rem_sec%60;
                }

                void displayTime()
                {
                        cout<<"After conversion: "<<endl;
                        cout<<"=================="<<endl;
                        cout<<sec<<" seconds = "<<hrs<<":"<<mins<<":"<<rem_sec;

                }
};

int main()
{
        Time t;
        t.getTime();
        t.calculateTime();
        t.displayTime();

        return 0;
}
