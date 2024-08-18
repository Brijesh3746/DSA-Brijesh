#include<iostream>
using namespace std;

class Student{

// by default all data member are private
private:
    string gf;

    

public:
    int id;
    int age;
    bool present;
    string name;

    // default ctor -> always in public 
    // private ma banaoge to Class ka objet nahi banane dega
    // what is the use of ctor
    // ctor is used for initilize the data member of the class
    Student(){
        cout << "Ctor is calling" << endl;
    }

    Student(int id,int age,bool present,string name,string gf){
        // class ki property ke ander funciton ke pass jo value aayi hai 
        // use class ke data member ke ander dal do

        // isme confuse ho jata hai compiler
        // id = id;
        // age = age;
        // present = present;
        // name = name;
        // gf = gf;

        // this is a pointer
        // that point to current object 

        this->id = id;
        this->age = age;
        this->present = present;
        this->name = name;
        this->gf = gf;
        

        cout << "Parameterized ctor calling \n";

    }

    Student(int _id,int _age,string _name){
        // class ki property ke ander funciton ke pass jo value aayi hai 
        // use class ke data member ke ander dal do
        id = _id;
        age = _age;
        // present = _present;
        name = _name;
       
        

        cout << "Parameterized ctor w/o gf calling \n";

    }




    void sleep(){
        cout << "sleeping" << endl;
    }

    void bunk(){
        cout << "Bunking"<< gf << endl;
    }

private:
    void chatting(){
        cout << "chatting" << endl;
    }
};


int main()
{
    // jitne obj banaoge agar dusra koi ctor nahi hoga to 
    // by default ctor call hoga
    Student s1;
    cout << endl;

    Student s2(1,21,1,"Chintu","Chinti");
    cout << s2.age << endl;
    cout << s2.name << endl;

    // Student s3(2,11,"Raju");
    // cout << s3.age << endl;
    // cout << s3.name << endl;

    // can't access gf because it's private
    // cout << s2.gf << endl;


    // s1.age = 1;
    // s1.name="raju";

    
 return 0;
}