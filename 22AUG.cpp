#include <iostream>
#include <string>

using namespace std;

class student 
{
 public:
 int rollno;
 string name;
 string course;
 
 student()
 {
 	cout<<"default constructor called"<<endl;
 	cout<<endl;
 	cout<<"this for s : "<<this<<endl;
	cout<<"this for s : "<<this->rollno<<endl;
    cout<<"this for s : "<<this->name<<endl;
    cout<<"this for s : "<<this->course<<endl; 
    cout<<endl;
 	
 }
 student(int rollno,string name,string course)
 {
 	cout<<endl<<"parameterised constructor called"<<endl;
 	this->rollno=rollno;
 	this->name=name;
 	this->course=course;
 	cout<<endl;
 	cout<<"this for s : "<<this<<endl;
	cout<<"this for s : "<<this->rollno<<endl;
    cout<<"this for s : "<<this->name<<endl;
    cout<<"this for s : "<<this->course<<endl; 
    cout<<endl;
 	
}

void show()
{
  cout<<" name :"<<name<<endl;
    cout<<" roll no :"<<rollno<<endl;
    cout<<" course :"<<course<<endl;

 } 
};

int main()
{
student s1(0,"0","0");

s1.show();
cout<<"this for s1: "<<&s1;

student s2(103,"aditya","bba");
s2.show();
cout<<"this for s2: "<<&s2;
cout<<endl;
student s3(s2);
cout<<" for s3"<<endl;
s3.show();
	return 0;
}

