#include <bits/stdc++.h>
using namespace std;

void recursion(int n)
    {
        if(n==0)
        {
            return;
        }
        else
        {
            recursion(n-1);
            cout<<n<<" ";
        }
    }

int main()
{
    int n = 8;
    recursion(n);
}

}
