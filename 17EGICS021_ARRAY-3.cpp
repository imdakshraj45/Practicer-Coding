#include<iostream>
#include<string>
int main()
{
	int i,n,a[n],no,count=0,j;
	std::cout<<"Enter the Size of Array : ";
	std::cin>>n;
	
	for(i=0;i<n;i++)
	std::cin>>a[i];
	
	for(int i=0;i<n;i++)
	{
		count=0;
		for(j=i;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count++;
			}
		}
		if(count==1)
		{
			std::cout<<a[i];
			break;
		}
	}	
}
