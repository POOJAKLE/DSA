#include<iostream>
using namespace std;


string convert(int n)
{
	string res = " ";
	int temp = n;


  while(n !=0)
  {

   temp = n;
   int l = temp%2;
   res = char(l+'0')+res;
   n = n/2;	
  }
  return res;
  //cout<<temp;
}
int main()
{
string b;
 b = convert(5);
 cout<<b;
}
