//Write a C++ program to calculate the area of a circle and a triangle.
//Aakanxa Modha
//230970031

#include<iostream>
using namespace std;

class Area
{
        public:
                double area;
                int r, b, h;

                void circle()
                {
                        cout<<"Calculating area of a circle: "<<endl;
                        cout<<"=============================="<<endl;
                        cout<<"Enter radius: "<<endl;
                        cin>>r;

                        area = 3.14 * r * r;

                        cout<<"Area of a circle: "<<area<<endl;
                }

                void triangle()
                {
                        cout<<"Calculating area of a triangle: "<<endl;
                        cout<<"================================"<<endl;
                        cout<<"Enter base and height: "<<endl;
                        cin>>b>>h;

                        area = 0.5 * b * h;

                        cout<<"Area of a triangle: "<<area<<endl;
                }
};

int main()
{
        Area a;
        a.circle();
        a.triangle();

        return 0;
}
