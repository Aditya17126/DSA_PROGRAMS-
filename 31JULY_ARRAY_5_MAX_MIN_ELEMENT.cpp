#include <iostream>

using namespace std;

int getmax(int arr[],int size)
{
	int max=INT_MIN;
	for(int i=0;i<size;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	return max;
}
int getmin(int arr[],int size)
{
	int min=INT_MAX;
	for(int i=0;i<size;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	return min;
}

int main()
{
int size;
int arr[100];
cout<<"enter size"<<endl;
cin>>size;
for(int i=0;i<size;i++)
{
	cin>>arr[i];
}
cout<<"MAX. VALUE IN AN ARRAY "<<getmax(arr,size)<<endl;
cout<<"MIN. VALUE IN AN ARRAY "<<getmin(arr,size)<<endl;

	return 0;
}

