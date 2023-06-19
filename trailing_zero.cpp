#include<iostream>
using namespace std;

int trailing_zero(int n)
{
	int res = 0;
	
	for(int i=5;i<=n;i=i*5)
	{
		res = res + n/i;
		
	}
	return res;
}
int main()
{
	int x = trailing_zero(100);
	cout<<"the number of zeros in the 100 are: "<<x<<endl;
}