#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

class student
{ 
    private: 
    char name[20];
    int midterm,final;
    public:
    student(char name[],int midterm,int final)
    {
        strcpy(this->name,name);
        this->midterm=midterm;
        this->final=final;
    }

 void gradecutting()
 {
    int grade=(midterm+final)/2;
    if(grade>=90)
    {
        cout<<"A"<<endl;
    }
    else if(grade>=80)
    {
        cout<<"B"<<endl;
    }
    else if(grade>=70)
    {
        cout<<"C"<<endl;
    }
    else if(grade>=60)
    {
        cout<<"D"<<endl;
    }
    else
    {
        cout<<"F"<<endl;
    }
 }

};



int main()
{
    char name[20];
    int midterm,final;
    cout<<"Enter name: ";
    cin.getline(name,20);
    cout<<"Enter midterm score: ";
    cin>>midterm;
    cout<<"Enter final score: ";
    cin>>final;
    student s(name,midterm,final);
    cout<<"name: "<<name<<endl;
    cout<<"midterm: "<<midterm<<endl;
    cout<<"final: "<<final<<endl;
    s.gradecutting();
    return 0;
}