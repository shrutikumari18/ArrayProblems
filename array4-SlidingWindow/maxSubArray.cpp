#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Coding{
    public:
    int maxSubArray(vector<int>&arr, int k){
        int ans = 0;
        int sum = 0;

        for(int i = 0; i<arr.size(); i++){
            sum = sum + arr[i];

            if(i >= k){
                sum = sum - arr[i-k];
            }
             if(i >= k-1){
                ans = max(ans, sum);
             }
        }
    }
};
int main(){
    Coding solver;
    vector<int> arr = {1,2,9,4,5,6};
    int k = 3;
    int ans = solver.maxSubArray(arr, k);
    cout<<ans;  
}
