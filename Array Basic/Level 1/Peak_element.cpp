// An element is called a peak element if its value is not smaller than the value of its adjacent elements(if they exists).
// Given an array arr[] of size N, Return the index of any one of its peak elements.

int peakElement(int arr[], int n)
{
    int peak=0;
    
   for(int i = 0 ; i < n ; i++)
   {
//      Edge case index at 0
       if(i==0 && arr[i]>arr[i+1])
       {
           return i;
       }
//      Edge case index at 1
       else if(i==n-1 && arr[i]>arr[i-1])
       {
           return i;
       }
//      when the loop is in the middle of the array we check for the adjacent elements
       else if(arr[i]>=arr[i+1] && arr[i]>=arr[i-1])
       {
            return i;    
       }
       
   }
   return peak;
}


// TC : O(N) - Lets bring down this to O(log(n))
// SC : O(1)
