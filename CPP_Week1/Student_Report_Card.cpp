/*Write a C++ program to accept student details such as Name, Registration number, Year of Joining, Semester number, marks in five subjects. 
Calculate the average marks as total marks divided by five. Design a score card as based on the following grading criteria:

Average >=90 Grade A
Average between 80 and 89 Grade B
Average between 61 and 79 Grade C
Average between 51 and 59 Grade D
Average between 41 and 49 Grade E
Less than 40 Grade F (Fails) */

//Aakanxa Modha
//230970031

#include<iostream>
using namespace std;

class Student
{
        public:
                char name[50], grade;
                int RegNo, YearofJoining, SemNum, mark1, mark2, mark3, mark4, mark5, total;
                float average;

                void getDetails()
                {
                        cout<<"Enter student name: "<<endl;
                        cin.getline(name, 50);
                        cout<<"Enter registration number: "<<endl;
                        cin>>RegNo;
                        cout<<"Enter year of joining: "<<endl;
                        cin>>YearofJoining;
                        cout<<"Enter semester number: "<<endl;
                        cin>>SemNum;
                        cout<<"Enter marks for subject1, subject2, subject3, subject4, subject5: "<<endl;
                        cin>>mark1>>mark2>>mark3>>mark4>>mark5;
                }


                void calculateResult()
                {
                        total = mark1+mark2+mark3+mark4+mark5;
                        average = total/5;

                        if(average>=90)
                                grade = 'A';
                        else
                                if(average >= 80 && average <= 89)
                                        grade = 'B';
                                else
                                        if(average >= 61 && average <= 79)
                                                grade = 'C';
                                        else
                                                if(average >= 51 && average <= 59)
                                                        grade = 'D';
                                                else
                                                        if(average >= 41 && average <= 49)
                                                                grade = 'E';
                                                        else
                                                                grade = 'F';
                }

                void displayDetails()
                {
                        cout << "==========================================================================" << endl;
                        cout << "\t\t\tScore Card for Student: " << name << endl;
                        cout << "Registration Number: " << RegNo << "\t\tSemester: " << SemNum << "\t\tYear: " << YearofJoining << endl;
                        cout << "Grade Assigned: " << grade << endl;
                        cout << "\n\n";

                        cout << "Serial No." << "\t\tSubject Name" << "\t\tMarks Scored (out of 100)" << endl;
                        cout << "__________________________________________________________________________" << endl;
                        cout << "1" << "\t\t\tObject Oriented Programming" << "\t\t" << mark1 << endl;
                        cout << "2" << "\t\t\tDBMS" << "\t\t\t\t\t" << mark2 << endl;
                        cout << "3" << "\t\t\tResearch Methodology" << "\t\t\t" << mark3 << endl;
                        cout << "4" << "\t\t\tComputational Mathematics" << "\t\t" << mark4 << endl;
                        cout << "5" << "\t\t\tWeb Technologies" << "\t\t\t" << mark5 << endl;
                        cout << "\n\n";

                        cout << "\t\t\t\t\tTotal: " << "\t\t\t" << total << endl;
                        cout << "\t\t\t\t\tAverage: " << "\t\t" << average<<endl;
                        cout << "\t\t\t\t\tGrade: " << "\t\t\t" << grade << endl;
                }
};

int main()
{
        Student s;
        s.getDetails();
        s.calculateResult();
        s.displayDetails();

        return 0;
}
