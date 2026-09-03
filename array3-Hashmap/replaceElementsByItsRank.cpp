#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

class Coding{
    public:
    int replaceElementsByItsRank(vector<int>&arr){

        vector<int>temp;

        temp = arr;

        sort(temp.begin(), temp.end());
        map<int,int>mp;

        int rank =1;

        for(int i =0; i<temp.size(); i++){
            if(mp[temp[i]]== 0){
                mp[temp[i]] = rank;
                rank++;
            }
        }
        for(int i =0; i<arr.size(); i++){
            arr[i] = mp[arr[i]];
        }
    }  
};
int main(){
    Coding solver;
    vector<int>arr = {2,3,4,4,5};
    solver.replaceElementsByItsRank(arr);
    for(int num: arr){
        cout<<num<<" ";
    }
}