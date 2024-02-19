//Write a C++ program to convert the distance in mm to cm, inch, feet (1 cm = 10mm, 1 inch = 2.5cm, 1 feet = 12 inches).
//Aakanxa Modha
//230970031

#include<iostream>
using namespace std;

class Distance
{
        public:
                double mm, cm, inch, feet;

                void getDistance()
                {
                        cout<<"Enter distance in mm: "<<endl;
                        cin>>mm;
                }

                void calculateDistance()
                {
                        cm = mm/10;
                        inch = cm/2.5;
                        feet = inch/12;
                }

                void displayDistance()
                {
                        cout<<"MM: "<<mm<<endl;
                        cout<<"CM: "<<cm<<endl;
                        cout<<"Inches: "<<inch<<endl;
                        cout<<"Feet: "<<feet<<endl;
                }
};

int main()
{
        Distance d;
        d.getDistance();
        d.calculateDistance();
        d.displayDistance();

        return 0;
}
