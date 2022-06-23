#include <iostream>
#include <bits/stdc++.h>
using namespace std ;



int k_th_smallest_element(int k , int arr[], int n)
{
  // Sorting the array 
        sort(arr,arr+n);    
        return arr[k];
}

int main()
{
    int n = 7;
    int arr[n] = {7 ,10, 4, 3, 20, 15};
    int k = 3 ;
    
    int mini = k_th_smallest_element(k,arr,n);
    
    cout<<"The kth smallest element in the array is :";
    cout<< mini << endl;
    return 0 ;
}
