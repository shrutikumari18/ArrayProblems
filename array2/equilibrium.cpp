#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Coding{
    public:
    int equilibrium(vector<int>&arr, int term){

        int n = arr.size();

        int prefix_sum = 0;
        int i = 0;
        int j = term;

        while(i < j){
            prefix_sum = prefix_sum + arr[i];
        }

        int suffix_sum = 0;
        i = term +1;
        j = n;

        while(i < n){
            suffix_sum = suffix_sum + arr[i];
        }

        for( i = 0; i<n ; i++){

        if (prefix_sum == suffix_sum){
            return true;
        }
        return false;
    }
    }
};
int main(){
    Coding solver;
    vector<int> arr = {1,2,3,4,6};
    int term = 3;
    if(solver.equilibrium(arr, term)){
        cout<<"At index"<<term<<"it is equilibrium";
    }else{
        cout<<"Not equilibrium";
    }
}