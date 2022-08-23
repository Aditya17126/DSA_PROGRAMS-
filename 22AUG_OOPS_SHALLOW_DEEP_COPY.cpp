#include <iostream>

using namespace std;

class student 
{
 public:
 int rollno;
 string name;
 string course;
 
 
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
student s1(105,"ADHEERA","BTECH");
cout<<"address of s1 : "<<&s1<<endl;

student s2(s1);
s2.show();
cout<<endl;

s1.name="BDHEERA";
s1.show();
s2.show();
	
	
	return 0;
}

