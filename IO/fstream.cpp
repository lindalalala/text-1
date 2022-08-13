#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream in("test.txt",ofstream::app);
	string a;
	cin>>a;
	in<<a<<endl;
	in.close();
	ifstream out("test.txt",ifstream::in);
	while(!out.eof())
	{
	string b;
	out>>b;
	cout<<b<<endl;		
	}
	out.close();
	return 0;
}