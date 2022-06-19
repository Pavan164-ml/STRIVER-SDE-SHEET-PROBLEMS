#include <bits/stdc++.h>
using namespace std;

void recursion(int n)
    {
        if(n==10)
        {
            return;
        }
        else
        {
            recursion(n+1);
            cout<<n<<" ";
        }
    }

int main()
{
  recursion(1);
}


// 9 8 7 6 5 4 3 2 1
