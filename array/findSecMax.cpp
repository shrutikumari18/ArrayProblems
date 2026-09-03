#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Coding{
    public:
    long long secMax(vector<int>&arr){
        long long max = INT_MIN;
        long long secMax =INT_MIN;

        for(int i =  0; i< arr.size(); i++){
            if(arr[i] > max){
                secMax = max;
                max = arr[i];
            }
            else if(arr[i] > secMax && arr[i] != max){
                secMax = arr[i];
            }
        }
        return secMax;
    }
};
int main(){
    Coding solver;
    vector<int>arr = {-2000,-3000, -4000,1};
    long long secMax = solver.secMax(arr);
    cout<<"Second Maximum number:- "<<secMax;
}
