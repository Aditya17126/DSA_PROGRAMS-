#include <iostream>

using namespace std;

void reverse(int arr[],int size)
{
	int arr1[size];
	int j=0;
	for(int i=size-1;i>=0;i--)
	{
		arr1[j]=arr[i];
		j++;
	}
	cout<<"elements after reversing the order are"<<endl;
for(int i=0;i<size;i++)
{
	cout<<arr1[i]<<"  ";
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


	return 0;
}

