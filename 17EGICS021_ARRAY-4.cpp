#include <iostream>
using namespace std;

int main()
{
	int n,s,i;
	cout<<"Enter the size of String : ";
	cin>>n;
	char a[n],r[n]; 
	cout<<"Enter string : ";
	cin>>a;
	cout<<"Enter shift :";
	cin>>s;
	s=s%n;
	for(i=0;i<n;i++)
	{
		r[s]=a[i];
		s++;
		if(s==n)
			s=0;
	}
	cout<<r;
}
