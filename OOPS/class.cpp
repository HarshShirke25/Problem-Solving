#include<iostream>
using namespace std;

class Student{

    public:
    string name;
    int age;
    //constructor
    Student(string n,int a)
    {
        name = n;
        age = a;
    }
};

int main()
{

    //object
    Student s1("Harsh",20);
    Student s2("Raj",20);
    
    cout<<s1.name<<" ";
    cout<<s1.age<<endl;

    cout<<s2.name<<" ";
    cout<<s2.age<<endl;
    

}