//Write a C++ program to convert the temperature given in Fahrenheit to Celsius and vice versa. (C = 5/9(F-32))
//Aakanxa Modha
//230970031

#include<iostream>
using namespace std;

class Temperature
{
        public:
                double fahren, celsi;

                void convertToCelsius()
                {
                        cout<<"Converting fahrenheit to celsius :- "<<endl;
                        cout<<"===================================="<<endl;
                        cout<<"Enter fahrenheit: "<<endl;
                        cin>>fahren;

                        celsi = 5.0/9.0 * (fahren-32);

                        cout<<"Celsius: "<<celsi<<endl;
                }

                void convertToFahrenheit()
                {
                        cout<<"Converting celsius to fahrenheit :- "<<endl;
                        cout<<"===================================="<<endl;
                        cout<<"Enter celsius: "<<endl;
                        cin>>celsi;

                        fahren = ((9.0/5.0)*celsi) + 32;

                        cout<<"Fahrenheit: "<<fahren<<endl;
                }
};

int main()
{
        Temperature t;
        int choice;

        do
        {
                cout<<"Conversions :- "<<endl;
                cout<<"1. Fahrenheit to Celsicus"<<endl;
                cout<<"2. Celsius to Fahrenheit"<<endl;
                cout<<"3. Exit"<<endl;
                cout<<"Enter your choice: "<<endl;
                cin>>choice;

                switch(choice)
                {
                        case 1: t.convertToCelsius();
                                break;

                        case 2: t.convertToFahrenheit();
                                break;

                        case 3: cout<<"Exiting the program...";
                                break;

                        default: cout<<"Enter either 1, 2 or 3 only!"<<endl;
                                 break;
                }
        }
        while(choice != 3);
}
