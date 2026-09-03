#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Coding{
    public:

    int removeDuplicats(vector<int>&arr){
        // if (arr.empty()) return 0;

        vector<int>new_arr;

        sort(arr.begin(), arr.end());

        for(int i = 0; i < arr.size(); i++){
            if( i== 0){
                new_arr.push_back(arr[i]);
            }
            else if(arr[i] != arr[i-1]){
                new_arr.push_back(arr[i]);
            }
        }arr = new_arr;
    }
};
int main(){
    Coding solver;
    vector<int>arr = {1,1,2,3,4,4,6,7,7,8};
    solver.removeDuplicats(arr);
    for(int num : arr){
        cout<<num;
    }
}