#include<iostream>
#include<vector>
using namespace std;

class Coding{
    public:
    int reverseArray(vector<int>&arr){

        // vector<int>reversed_arr;
        int n = arr.size();

        int i = 0;
        int j = n-1;

        while( i <= j){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
};
int main(){
    Coding solver;
    vector<int>arr = {1,2,3,4,5};
    int new_arr = solver.reverseArray(arr);
    cout<< "reverse of the array is:- ";
    for (int num : arr){
        cout<<num;
    }
}