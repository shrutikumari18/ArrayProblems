#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Coding{
    public:
    int kadaneAlgo(vector<int>&arr){
        
        int ans = -1e4;
        int sum = 0;

        for(int i =0; i< arr.size(); i++){

            sum = sum + arr[i];
            sum = max(sum, arr[i]);
            ans = max(sum, ans);
        }
        return ans;
    }
};
int main(){
    Coding solver;
    vector<int>arr = {4,-2,4,-7,3,4,-2};
    int ans = solver.kadaneAlgo(arr);
    cout<<ans<<" ";
}