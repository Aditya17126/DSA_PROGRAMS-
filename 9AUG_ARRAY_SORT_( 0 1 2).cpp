#include <iostream>

using namespace std;

int main()
{
int arr[100];
int size;
cout<<"enter size of an array ";
cin>>size;
for (int i=0;i<size;i++)
{
	cin>>arr[i];
}

cout<<"arrays before sorting"<< endl ;

for (int i=0;i<size;i++)
{
	cout<<arr[i]<<" ";
}
cout<<endl;

int i=0;
int high=size-1;
int m=0;

while( m<=high )
{
if( arr[m]==1)
{
	m++;
}

else if( arr[m]==0)
{
 swap(arr[m],arr[i]);
    i++;
	m++;
}
else if( arr[m]==2)
{
 swap(arr[m],arr[high]);
 high--;
}
}
cout<< endl ;

cout<<"arrays after sorting"<< endl ;

for (int i=0;i<size;i++)
{
	cout<<arr[i]<<" ";
}

	return 0;
}

