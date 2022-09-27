#include<bits/stdc++.h>

using namespace std;

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


int rob(vector<int> houses){
    int n = houses.size() -1 ;
    vector<int> withoutFirst(n);
    for(int i = 0; i < n;i++){
        withoutFirst[i] = houses[i+1];
    }

//    printVarray(withoutFirst);

    vector<int> withoutLast = houses;
    withoutLast.pop_back();
//    printVarray(withoutLast);

    return max(robRunner(withoutFirst) , robRunner(withoutLast));
}

int main()
{
    vector<int> arr = {2,7,9,3,1,11,12,1,12,5,1};
    vector<int> arr = {2};
    cout << rob(arr);
}

