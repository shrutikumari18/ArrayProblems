#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Coding{
    public:
    int suffixArray(vector<int>&arr, int index){

        vector<int>suffix_arr;

        int suffix_sum = 0;

        int n = arr.size();

        for(int i = 0; i <= index; i++){
            suffix_arr.push_back(arr[i]);
        }

        int i = index;

        for( i = index + 1; i<n ; i++){
            suffix_sum = suffix_sum + arr[i];
        }
        suffix_arr.push_back(suffix_sum);

        arr = suffix_arr;
    }
};
int main(){
    Coding solver;
    vector<int>arr = {1,2,3,4,5,6,7,8};
    int index = 3;
    if(solver.suffixArray(arr, index)){
        for(int num : arr){
            cout<<num<<" ";
        }
    }
}