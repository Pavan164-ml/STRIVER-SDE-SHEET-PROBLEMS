pair<long long, long long> getMinMax(long long a[], int n) {
      long long min_num, max_num;
    for(int i = 0 ; i < n ; i++)
    {
        if(i == 0)
        {
            min_num = a[i];
            max_num = a[i];
        }
        else
        {
            if(a[i] < min_num)
            {
                min_num = a[i];
            }
            if(a[i] > max_num)
            {
                max_num = a[i];
            }
        }
    }
    return make_pair(min_num, max_num);
}

// make_pair function - constructs a pair

// TC - O(N)
// SC - O(1)
