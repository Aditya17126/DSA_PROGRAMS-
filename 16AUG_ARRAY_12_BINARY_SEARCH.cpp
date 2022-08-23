#include <iostream>

using namespace std;

int binarysearch(int arr[],int size,int key)
{
	int start=0;
	int end =size-1;
	int mid = (start+end)/2;
	
while(start<=end)
{
 if(arr[mid]==key)
{
  return mid;
}
		
if(key>arr[mid])
{
start=mid+1;
}
else
   {
	end=mid-1;
	}		
	mid = (start+end)/2;	
}
	return -1;
	
}
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
int begin=0;
int end=size-1;

//sort(arr [0], arr[size]);
int key;
cout<<"enter the element you want to search";
cin>>key;
int element;
element =binarysearch(arr,size,key);
cout<<element;


	return 0;
}

