#include<iostream>
#include<vector>
using namespace std;

class Coding{
    public:
    bool ifSortedArray(vector<int>&arr){

        bool isSorted = false;

        for(int i = 0; i<arr.size()-1; i++){
            if(arr[i] > arr[i+1]){
                return false;
            }
        }
        return true;
    }
};
int main(){
    Coding solver;
    vector<int>arr = {1,2,7,8,4};
    if(solver.ifSortedArray(arr)){
        cout<<"array is sorted.";
    }
    else{
        cout<<"Array is not sorted.";
    }
}