#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Coding{
    public:
    int prefixArray(vector<int>&arr, int index){

        int prefix_sum = 0;
        vector<int>prefix_arr;

        int i = 0;

        while(i <= index){
            prefix_sum = prefix_sum + arr[i];
            i++;
        }
        prefix_arr.push_back(prefix_sum);

        
        for( i = index+1; i< arr.size(); i++){
            prefix_arr.push_back(arr[i]);
        }

        arr = prefix_arr;
    }
};
int main(){
    Coding solver;
    vector<int>arr = {1,2,3,4,5,6,7,8};
    int index = 3;
    if(solver.prefixArray(arr, index)){
        for (int num : arr){
            cout<< num <<" ";
        }
    }
}