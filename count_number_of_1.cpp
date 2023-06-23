#include<iostream>
using namespace std;


int count(int n)
{
	int sum =0;
	int temp = n;
	int l ;
	
while(n != 0)
{
  temp = n%2;
 sum = sum + temp;
 n = n/2;
 
	 
}
cout<<sum;
}
int main()
{
	count(256);
}
