/*Write a C++ program to calculate the compound interest.
 A = P (1 + r/n )nt
 Where, A = the future value of the investment/loan, including interest
 P = the principal investment amount (the initial deposit or loan amount)
 r = the annual interest rate
 n = the number of times that interest is compounded per unit t
 t = the time the money is invested or borrowed for */

//Aakanxa Modha
//230970031

#include<iostream>
#include<cmath>
using namespace std;

class CompoundInterest
{
        public:
                int p, n;
                double t, r, interest;

                void getData()
                {
                        cout<<"Calculating Compound Interest :- "<<endl;
                        cout<<"================================="<<endl;
                        cout<<"Enter principal amount: "<<endl;
                        cin>>p;
                        cout<<"Enter the annual interest rate: "<<endl;
                        cin>>r;
                        cout<<"Enter the number of times that interest is compounded per unit t: "<<endl;
                        cin>>n;
                        cout<<"Enter the time the money is invested or borrowed for: "<<endl;
                        cin>>t;
                }

                void calculateInterest()
                {
                        double base = 1 + (r/(100*n));
                        double expo = n*t;
                        interest = p * pow(base, expo);
                }

                void displayData()
                {
                        cout<<"Compound Interest :- "<<endl;
                        cout<<"====================="<<endl;
                        cout<<"Principal amount: "<<p<<endl;
                        cout<<"Annual interest rate: "<<r<<endl;
                        cout<<"Number of times interest is compounded per unit t: "<<n<<endl;
                        cout<<"Time the money is invested or borrowed for: "<<t<<endl;
                        cout<<"============================================"<<endl;
                        cout<<"Compound Interest = "<<interest<<endl;
                }
};

int main()
{
        CompoundInterest ci;
        ci.getData();
        ci.calculateInterest();
        ci.displayData();
}
