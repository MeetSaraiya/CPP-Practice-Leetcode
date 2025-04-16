#include <iostream>
using namespace std;
int Fibonaci(int n){
    
    if( n<=1  ){
        return n;
    }
    return Fibonaci(n-1)+Fibonaci(n-2);
}

int main()
{
    int num = 0;
    cout<<"Enter number for nth fibonacci term "<<endl;
    cin>>num;
    if (num < 0) {
        cout << "Fibonacci is not defined for negative numbers." << endl; // Return a special value to indicate invalid input
    }else{
    std::cout<<"Fibonaci of "<<num<<" ------->"<<Fibonaci(num);
    }

    return 0;
}