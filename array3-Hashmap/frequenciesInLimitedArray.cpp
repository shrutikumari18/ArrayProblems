#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Coding{
    public:
    vector<int> frequencyLimitedArray(vector<int>&arr){

        int n = arr.size();
        vector<int>freq(n, 0);

        for(int i = 0; i<n; i++){
            int key = arr[i];
            freq[key-1]++;
        }
        return freq;
    }
};
int main(){
    Coding solver;
    vector<int>arr = {1,2,3,1,1,2,3,3,4,5};
    vector<int>ans = solver.frequencyLimitedArray(arr);
    for(int i = 0; i<ans.size(); i++){
        cout<<"element "<< (i+1)<<" occurs "<<ans[i]<<" times"<<endl; 
}
}
