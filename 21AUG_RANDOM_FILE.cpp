#include <iostream>
#include <fstream>
using namespace std;

int main()
{
ofstream inFile;
	inFile.open("account.dat",ios::binary);
	inFile.close();

	return 0;
}

