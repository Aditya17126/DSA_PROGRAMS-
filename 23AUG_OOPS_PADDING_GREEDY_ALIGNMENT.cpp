#include <iostream>

using namespace std;

class student 
{
 public:
 int rollno;	
 int x;
 int y;
 string name;
 string course;
};

int main()
{
student s1;

//padding and greedy alignment
cout<<"size  :"<<sizeof(s1.rollno)<<endl;
cout<<"size  :"<<sizeof(s1.name)<<endl;
cout<<"size  :"<<sizeof(s1.course)<<endl;
cout<<"size  :"<<sizeof(s1.x)<<endl;
cout<<"size  :"<<sizeof(s1)<<endl;


	return 0;
}

