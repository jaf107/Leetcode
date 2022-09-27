#include<bits/stdc++.h>
using namespace std;



int minCostClimbingStairs(vector<int>& cost)
{


    int sizeN = cost.size() + 1;
    vector<int> totalCost(sizeN);
    totalCost[0] = 0;
    totalCost[1] = 0;
    for(int i = 2; i < sizeN; i++)
    {
        totalCost[i] = min(totalCost[i-1] + cost[i-1], totalCost[i-2] +cost[i-2]);
    }

    for(int i = 0; i < sizeN; i++)
        cout << totalCost[i] << " ";
    cout << endl;

    return totalCost[sizeN-1];
}

void printVarray(vector<int> v){
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
}


int robRunner(vector<int>& nums)
{
    int sizeN = nums.size();

    vector<int> rob(sizeN);
    rob[0] = nums[0];

    if(sizeN == 1)
        return rob[0];

    rob[1] = max(rob[0], nums[1]);
    if(sizeN == 2)
        return rob[1];


    for(int i = 2; i < sizeN; i++)
    {
        rob[i] = max(rob[i-1], rob[i-2] + nums[i] );
    }

    printVarray(rob);

    return rob[sizeN-1];
}

int main()
{
//    vector<int> arr = {10,15,20};
//    //    cout << minCostClimbingStairs(arr);


//    vector<int> arr = {2,7,9,3,1,11,12,1,12,5,1};
//    vector<int> arr = {2};
//    cout << rob(arr);

    vector<int> arr = {2,3,2};
    cout << rob(arr);

    return 0;
}


