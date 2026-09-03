#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

class Coding{
    public:
    int firstNonRepeating(vector<int>&arr){
                        
        map<int,int>mp;
        int n = arr.size();

        for(int i = 0; i<n; i++){

            int key = arr[i];

            mp[key]++;
        }

        for(int i = 0; i<n; i++){
            if(mp[arr[i]] == 1){
                return arr[i];
            }
        }
        return 0;
    }
};
int main(){
    Coding solver;
    vector<int>arr = {1,1,1,2,3,4,2,4,3,5,6,6,7,7,8,9,9};
    int ans = solver.firstNonRepeating(arr);
    cout<<ans;
}