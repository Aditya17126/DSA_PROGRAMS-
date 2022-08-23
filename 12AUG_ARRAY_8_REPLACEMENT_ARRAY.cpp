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

for(int i=0 ; i<size ; i++)
{
	if( arr[i]%2!=0 )
	{
		cout << arr[i]<<"  " << arr[i]%2 << endl ;
		arr[i]=arr[i]*2;
	}
else{
	arr[i]=3*arr[i];
}
}
for(int i=0 ; i<size ; i++)
{
	cout<<"  the element "<< i+1 << endl ;
	cout<<arr[i] << endl;
}

	return 0;
}

