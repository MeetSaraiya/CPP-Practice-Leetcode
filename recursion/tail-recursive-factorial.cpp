#include <iostream>

int Factorial(int n,int ans){
    if(n<=1){
        return ans;
    }else
    return Factorial(n-1,ans*n);
}

int main()
{
    std::cout<<"Factorial of 33 ------->"<<Factorial(33,1);

    return 0;
}