#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Coding{
    public:
    int nonRepeatingElements(vector<int>&arr){

        int n = arr.size();
        vector<int>ans;

        for(int i = 0; i<n ; i++){
            if(arr[i] != arr[i+1]){
                ans.push_back(arr[i]);
            }else{
                i++;
            }
        }
        arr = ans;
    }
};
int main(){
    Coding solver;
    vector<int>arr = {1,2,3,3,3,4,4,5,6,7,9,9};
    solver.nonRepeatingElements(arr);
    for(int num : arr){
        cout<<num<<" ";
    }
}