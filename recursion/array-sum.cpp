#include <iostream>
#include <vector>
using namespace std;

int arraySum(vector<int>&v, int n){
    if(n<=0){
        return 0;
    }
    return v[n-1]+arraySum(v,n-1);
}
int main()
{
    vector<int>v = {9,9,9,9,9};
    cout<<arraySum(v,5)<<endl;

    return 0;
}