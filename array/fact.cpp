#include<iostream>
#include<vector>
using namespace std;

class Mathematics{
    public:
    int findFactorial(vector<int>&num){

        int fact = 1;

        for(int i = 1; i <=num[0]; i++){
            fact = fact * i;
        }
        return fact;
    }
};

int main(){
    Mathematics solver;
    vector<int>num = {5};
    int fact = solver.findFactorial(num);
    cout<<"See Shruti the Fctorial is :- "<<fact;
    return fact;
}