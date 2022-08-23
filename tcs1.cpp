#include <iostream>
#include<vector>

using namespace std;

int main()
{
int n,x;
vector <int > M;

cin>>n;

for(int i=0;i<n;i++)
{
	
	cin>>x;
	
	M.push_back(x);
}

for(int i=0;i<M.size();i++)
{
	cout<<M[i]<<" ";
}


for(int i=0;i<M.size()-1;i++)
{
	if(M[i]==M[i+1])
	{
		M.erase(M.begin()+(i+1));
	}
}

cout<<"after sorted";
for(int i=0;i<M.size();i++)
{
	cout<<M[i]<<" ";
}


	return 0;
}

