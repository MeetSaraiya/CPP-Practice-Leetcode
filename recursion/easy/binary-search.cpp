#include <iostream>
#include <vector>
using namespace std;

int bs(vector<int>&arr,int target, int start, int end){
    if(start>end){
        return -1;
    }
    int mid = start + (end-start)/2;
    if(arr[mid] == target)
        return mid;
    if(arr[mid] > target)
        return bs(arr,target,start,mid-1);
    return bs(arr,target,mid+1,end);
}

int main() {
    vector<int>v = {1,2,3,4,5,6,7,8,9};
    int target =63;
    int end = v.size();

    cout<<bs(v,target,0,end-1);

    return 0;
}
