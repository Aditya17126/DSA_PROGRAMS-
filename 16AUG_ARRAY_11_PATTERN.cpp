#include <iostream>

using namespace std;

int main()
{
int arr[100];
int size;
 
cout<<"enter the size of an array"<<endl ;
cin>>size;

for(int i = 0 ;i<size;i++)
{
cout<<"enter the elements"<<i+1<<endl;
cin>>arr[i];
}
cout<<endl;

for(int i = 0 ;i< size;i++)
{
	for(int j = 0 ; j<=i ; j++)
	{
		cout<<arr[j]<<" ";
	}
for(int k =(size-1)-i ; k>0; k--)
	{
		cout<<"0"<<" ";
	}
cout<<endl;
}


	return 0;
}

