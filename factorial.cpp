#include<iostream>
using namespace std;

int fact(int n)
{
	int sum = 1;
	for(int i=2;i<=n;i++)
	{
		sum=sum *i;
	}
	return sum;
}
 //return n*fact(n-1);
 
 int main()
 {
 	int n=fact(5);
 	cout<<"sum:"<<n;
 }