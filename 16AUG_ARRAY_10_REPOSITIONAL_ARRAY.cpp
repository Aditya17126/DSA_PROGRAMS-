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
for(int i = 0 ;i<size;i++)
{
if(i+1<size)
{
swap(arr[i],arr[i+1]);
}
}

for(int i = 0 ;i<size;i++)
{
cout<<arr[i]<<"  ";
}	

return 0;
}

