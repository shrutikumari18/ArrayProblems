#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

class Coding{
    public:
    int removeDuplicatesUnsortedArray(vector<int>&arr){

        int n = arr.size();

        map<int,int>mp;

        vector<int>ans;

        for(int i =0; i<n; i++){

            mp[arr[i]]++;

            if(mp[arr[i]] == 1){
                ans.push_back(arr[i]);
            }
        }

        arr = ans;
    }
};
int main(){
    Coding solver;
    vector<int>arr = {1,2,2,3,4,5,4,5};
    solver.removeDuplicatesUnsortedArray(arr);
    for(int num :arr){
        cout<<num<<" ";
    }
}
