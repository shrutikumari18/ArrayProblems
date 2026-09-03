#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Coding{
    public:
    int findThirdMax(vector<int>&arr){
        long long max = INT_MIN;
        long long secMax = INT_MIN;
        long long thirdMax = INT_MIN;

        for(int i = 0; i<arr.size(); i++){
            if (arr[i] > max){
                thirdMax = secMax;
                secMax = max;
                max = arr[i];
            }
            else if(arr[i] > secMax && arr[i] != max){
                thirdMax = secMax;
                secMax = arr[i];
            }
            else {
                thirdMax = arr[i];
            }
        }
        return thirdMax;
    }
};
int main(){
    Coding solver;
    vector<int>arr = {-1, -500, 320 , 1, 200, 180};
    int thirdMax = solver.findThirdMax(arr);
    cout<<"THird Max. NUmber is :- "<<thirdMax;
}