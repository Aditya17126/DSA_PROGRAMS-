#include <iostream>

using namespace std;
int getmax(int arr[],int size)
{
	int maxi=INT_MIN;
	for(int i=0;i<size;i++)
	{
	maxi=max(maxi,arr[i]);
	}
	return maxi;
}
int getmin(int arr[],int size)
{
	int mini=INT_MAX;
	for(int i=0;i<size;i++)
	{
			mini=min(mini,arr[i]);
	}
	return mini;
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

