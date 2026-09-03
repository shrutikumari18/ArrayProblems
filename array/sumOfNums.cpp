#include<iostream>
#include<vector>
using namespace std;

class Programming{
    public:
    int sum(vector<int>&arr){
        
        int sum = 0;
        for(int i = 0; i<=arr.size(); i++){
            sum = sum + i;
        }
        return sum;
    }
};
int main(){
    Programming Solver;
    vector<int>arr = {1,2,3,4,5,6,7,8,9,10};
    int sum = Solver.sum(arr);
    cout<<"See Shruti - Sum of all elemnts of the array is:- "<<sum;
}