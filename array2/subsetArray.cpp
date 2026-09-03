#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Coding{
    public:
    bool isSubsetArray(vector<int>arr, vector<int>check_arr){

        int isSubset = false;

        sort(arr.begin(), arr.end());
        sort(check_arr.begin(), check_arr.end());

        int i =0;
        int j = 0;

        while(i< arr.size() && j < check_arr.size()){
            if(arr[i] == check_arr[j]){
                i++;
                j++;
            }else{
                i++;
            }
        }
        if (j == check_arr.size()) return true;
        return false;
    }
};

int main(){
    Coding solver;
    vector<int> arr = {1,2,4,5,6,8,9};
    vector<int>check_arr = {3,4};
    if(solver.isSubsetArray(arr, check_arr)){
        cout<< " is subset.";
    }else{
        cout<<"not subset";
    }
}