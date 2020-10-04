//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//  //write your code here
//  int t, n;
//  cin>>t;
//  
//  while(t--){
//    
//    cin>>n;
//   
//    int sum = 1;
//    for(int i=2; i<n; i++){
//      
//      if(n%i==0){
//        sum = sum + i;
//      }
//        
//    }
//    
//    if(sum==n){
//      cout<<"true"<<endl;
//    }else{
//      cout<<"false"<<endl;
//    }
//    }
//  
//  return 0;
//}

// C++ program to check whether a given number is a perfect number or not

#include<iostream>
using namespace std;

int is_perfect_number(int n)
{
int sum = 1;

for (int i=2; i*i<=n; i++)
{
if (n%i==0)
{
if(i*i!=n)
sum = sum + i + n/i;
else
sum=sum+i;
}
}

if (sum == n && n != 1)
return 1;

return 0;
}

int main()
{
int n;
cout <<"\nEnter a number :";
cin >> n;
cout << endl;
if (is_perfect_number(n))
cout << n << " is a perfect number\n";
else
cout << n << "is not a perfect number\n";

return 0;
}

