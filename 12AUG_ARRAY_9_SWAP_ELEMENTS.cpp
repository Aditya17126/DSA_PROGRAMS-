#include <iostream>

using namespace std;

int main()
{
int arr[100];
int size;
cout<<"enter size of an array "<< endl ;
cin>>size;

for(int i=0 ; i<size ; i++)
{
	cout<<"enter the size of an element "<< i+1 << endl ;
	cin>>arr[i];
}
for(int i=0 ; i<size ; i=i+2)
{
	if( arr[i] % 10 == 0)
{
	swap(arr[i],arr[i+1]);
}
}

for(int i=0 ; i<size ; i++)
{
	cout<<"element -"<< i+1<<":" ;
	cout<<arr[i] << endl;
}

	return 0;
}

