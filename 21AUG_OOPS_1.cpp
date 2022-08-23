#include <iostream>
#include <string>


using namespace std;

class student 
{
 public:
 int rollno;
 string name;
 string course;
 
 void addstudent()
 {
 	cout<<"Name of the student "<<endl;
 	cin>>name;
 	
 	cout<<"roll no of the student "<<endl;
 	cin>>rollno;
 	
	 cout<<"Course of the student "<<endl;
 	cin>>course;
 }
 void show()
 {
 	cout<<" name a student "<<name<<endl;
 	cout<<" roll no of student "<<rollno<<endl;
 	cout<<" name a student "<<course<<endl;
 	
 }
 
 
 
 int getrollno()
 {
 	return rollno ;
 }
 string getname()
 {
 	return name ;
 }
 string getcourse()
 {
 	return course ;
 }
void setrollno(int roll)
 {
 	rollno = roll;
 }
 void setname(string nm)
 {
 	name = nm;
 }
 void  setcourse(string crse)
 {
 	this->course= crse ;
 }

};


int main()

 
{
 //static allocation
  student s1;
 s1.addstudent();
 s1.show();
 cout<<endl;

 //dynamic allocation
 student *s2 = new student;
 s2->addstudent();
 s2->show();
                     
  
 
 
 
 
 
 
 /*
  s1.setname("aditya");
  cout<<" name :"<<s1.getname()<<endl;
  
  s1.setcourse("Btech");
  cout<<" course :"<<s1.getcourse()<<endl;
 
 cout<<"using setters and getters";
 s1.name="aditya";
 cout<<" name :"<<s1.getname()<<endl;
 
  s1.name="aditya";
   cout<<" name :"<<s1.getname()<<endl;
 

//padding and greedy alignment
cout<<"size  :"<<sizeof(s1)<<endl;

*/

	return 0;
}

