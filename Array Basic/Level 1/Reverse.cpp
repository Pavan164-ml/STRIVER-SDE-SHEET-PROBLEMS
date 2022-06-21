#include <bits/stdc++.h>
#include <iostream>
using namespace std;


int main() 
{
	long long t;
	cin>>t;
	while(t--)
	{
	    long long n ;
	    long long arr[n];
	    cin>>n;
	    
	    for(long long i=0 ; i < n ; i++)
	    {
	        cin>>arr[i];
	    }
	    
	   for(long long j = n-1 ; j>=0 ; j--)
	   {
	       cout<<arr[j]<<" ";
	   }
	}
	return 0;
}
