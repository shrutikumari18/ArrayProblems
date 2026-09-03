#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Coding{
    public:
    int maxProfit(vector<int>&prices){
        int ans = 0;
        int min = prices[0];

        for(int i =0; i<n; i++){
            
            min = min(min, prices[i]);
            int profit = prices[i] - min;

            ans = max(ans, profit);

        }
        return ans;

    }
};