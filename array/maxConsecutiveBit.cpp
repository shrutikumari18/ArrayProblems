#include<iostream>
#include<vector>
using namespace std;

class Coding{
    public:
    int maxConsecutiveBit(vector<int>&arr){
        int count = 1;
        int ans = 1;
        for(int i = 0; i< arr.size()-1; i++){
            if(arr[i] == arr[i+1]){
                count++;
            }else{
                count = 1;
            }
            ans = max(ans, count);
        }
        return ans;
    }
};
int main(){
    Coding solver;
    vector<int>arr = {1,2,1,1,1,1,4,5,6,6,6};
    int ans = solver.maxConsecutiveBit(arr);
    cout<<"count is"<<ans;
}