#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n,i,t=0,sum=0;
	vector<int> a[n];
	cout<<"Enter size : ";
	cin>>n;
	cout<<"Enter an elements of array :\n";
	for(i=0;i<n;i++)
	a[i];
	
	for(i=0;i<n;i++)
	{
			if(a[i]<a[i+1])
			{
				sum+=a[i];
			}
			else
			{
				t=a[i];
				break;
			}
	}
	cout<<(sum+t);
}

