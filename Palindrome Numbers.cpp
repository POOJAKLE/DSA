#include<iostream>
using namespace std;

int p(int x)
{
	int res=0;
	
	while(x!=0)
	{
		int l ;
		l = x%10;
		res = res*10+l;
		x = x/10;
	}
	cout<<res;
}
int main()
{
	p(1001);
}