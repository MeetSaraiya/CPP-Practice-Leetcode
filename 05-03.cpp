#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool solve(int n, int p)
    {
        if (n == 0)
            return true;
        if (pow(3, p) > n)
            return false;
        return solve(n - pow(3, p), p + 1) || solve(n, p + 1);
    }
    bool checkPowersOfThree(int n)
    {
        return solve(n, 0);
    }
};

// ---------------------------------------------------------------------------------------------------------------

class Solution
{
public:

    bool checkPowersOfThree(int n)
    {
        while(n>0){    
            if(n%3==2) 
                return false;
            n = n/3;  
        }
        return true;
    }
};