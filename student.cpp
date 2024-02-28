#include<iostream>
using namespace std;
class student{
     public:
        string fullName;
        int rollNum;
        double semPercentage;
        string collegeName;
        int collegeCode;
        student(){
            cout<<"Constuctor has been created"<<endl;
        }
        ~student(){
            cout<<"Its completed"<<endl;
        }
};
int main()
{
   student virat;
   virat.fullName="Sai";
   virat.rollNum=52;
   virat.semPercentage=75;
   virat.collegeName="MVGR";
   virat.collegeCode=33;
   cout<<"Name of the student is "<<virat.fullName<<endl;
   cout<<"Rollno of the student is "<<virat.rollNum<<endl;
   cout<<"Sempercantege of the student is "<<virat.semPercentage<<endl;
   cout<<"Collegename of the student is "<<virat.collegeName<<endl;
   cout<<"Collegecode of the student is "<<virat.collegeCode<<endl;
}
