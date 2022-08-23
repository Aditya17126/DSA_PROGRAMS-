#include <iostream>
//when we pass array to a funct. then we  give address of the first variable to an array in a function in C++.  
using namespace std;


void reverse(int arr[],int size)
{
	arr[0]=122;
	arr[1]=0;
	for(int i=0;i<size;i++)
{
	cout<<arr[i]<<"  ";
}
}
int main()
{
int arr[100];
int size;
cout<<"enter size of an array"<<endl;
cin>>size;

for(int i=0;i<size;i++)
{
	cout<<"enter element"<<i+1<<endl;
	cin>>arr[i];
}
reverse(arr,size);
cout<<endl;

for(int i=0;i<size;i++)
{
	cout<<arr[i]<<"  ";
}
	return 0;
}

