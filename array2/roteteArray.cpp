#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Coding{
    public:
    int rotateArray(vector<int>&arr, int d){

        int n = arr.size();

        d = d%n;

        int i = 0;
        int j = d-1;

        while(i<j){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }

        i = d; 
        j = n-1;

        while(i<j){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }

        i = 0;
        j = n-1;

        while(i < j){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
};
int main(){
    Coding solver;
    vector<int>arr = {1,2,3,4,5};
    int d = 3;
    solver.rotateArray(arr,d);
    for(int num : arr){
        cout<<num<<" ";
    }
}