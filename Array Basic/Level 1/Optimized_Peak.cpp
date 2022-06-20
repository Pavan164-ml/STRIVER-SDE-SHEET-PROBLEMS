// input array :arr[]
// array size : n

class Solution
{
  public:
  int peakElement(int arr[] , int n)
  {
    int l = 0, h = n-1;
    while(l<=h)
    {
      int mid = (l+h)/2;
      if(mid==0 or arr[mid]>=arr[mid+1] and (mid==n-1 or arr[mid]<=arr[mid-1]))
      {
        return mid;
      }
      else if (mid>0 and arr[mid-1]>arr[mid])
      {
        h = mid-1;
      }
      else
      {
        l = mid+1;
      }
    }
  }
}

// This code should solve the problem in much lesser Time complexity but due to edge cases the code isnt working
// TC : O(log(N))
// SC : O(1)
