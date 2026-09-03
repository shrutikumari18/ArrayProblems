#include<iostream>
#include<vector>
using namespace std;

class Coding{
    public:
    int findMax(vector<int>&arr){

        int max = 0;

        for(int i =0; i< arr.size(); i++){
            if(arr[i] > max){
                max = arr[i];
            }
        }
        return max;
    }
};
int main(){
    Coding solver;
    vector<int>arr = {1,2,4,7,5,90,3};
    int max = solver.findMax(arr);
    cout<<"maximum number is:- "<<max;
}