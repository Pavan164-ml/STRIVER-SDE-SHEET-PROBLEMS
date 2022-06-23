
/*Function to find frequency of x
* x : element whose frequency is to be found
* v : input vector
*/
int findFrequency(vector<int> v, int x){
    // Your code here
    int k = 0 ;
    int n = v.size();
    for(int i = 0 ; i < n ; i++)
    {
        if(v[i]==x)
        {
            k++;
        }
    }
    return k;
}

// SC : O(1)
// TC : O(N)
