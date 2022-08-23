#include <iostream>

using namespace std;

void reverse(int arr[],int size)
{
int start=0;
int end=1;
 
for(int i=0;i<size;i++)
{
 if(end<size)
{
swap(arr[start],arr[end]);
start+=2;
end+=2;
}
}
}

void printarray(int arr[],int size)
{
for(int i=0;i<size;i++)
{
   cout<<arr[i]<<" ";
}
	
}
int main()
{
int size;
int arr[100];

cout<<"enter size"<<endl;
cin>>size;

for(int i=0;i<size;i++)
{
   cout<<"enter the elements in an array ="<<i+1<<endl;
   cin>>arr[i];
}
reverse(arr,size);
printarray(arr,size);


	return 0;
}

