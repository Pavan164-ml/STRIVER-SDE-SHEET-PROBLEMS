vector<int> sortArr(vector<int>arr, int n){
    //complete the function here
     int key ,j,i;
    for(i = 1; i < n ; i++)
    {
        key = arr[i];
        j = i - 1;
        
        while(j>=0 && key<=arr[j])  // Shifting the elements right so that we can make space for the element to fit in sorted subarray
        {
            arr[j+1] = arr[j];             
            j--;
        }
        arr[j+1] = key ;
    }
        return arr;
    }
