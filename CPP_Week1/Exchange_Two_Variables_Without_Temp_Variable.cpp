//Write a C++ program to exchange two variables without using any temporary variable.
//Aakanxa Modha
//230970031

#include<iostream>
using namespace std;

int main()
{
        int num1, num2;

        cout<<"Enter two numbers: "<<endl;
        cin>>num1>>num2;

        cout<<"Number 1 (before exchanging): "<<num1<<endl;
        cout<<"Number 2 (before exchanging): "<<num2<<endl;

        num1 = num1 + num2;
        num2 = num1 - num2;
        num1 = num1 - num2;

        cout<<"==============================="<<endl;

        cout<<"Number 1 (after exchanging): "<<num1<<endl;
        cout<<"Number 2 (after exchanging): "<<num2<<endl;

        return 0;
}
