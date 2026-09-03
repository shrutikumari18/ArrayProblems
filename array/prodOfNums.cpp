#include<iostream>
#include<vector>
using namespace std;

class Coding{
    public:

    int prod(vector<int>&arr){

        int prod = 1;

        for(int i = 1; i<=arr.size(); i++){
            prod = prod * i;
        }
        return prod;
    }
};
int main(){
    Coding solver;
    vector<int>arr = {1,2,3,4,5};
    int prod = solver.prod(arr);
    cout<<"product is:- "<<prod;
    
}