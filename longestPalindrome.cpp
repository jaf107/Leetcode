#include<bits/stdc++.h>
using namespace std;
void printVarray(vector<int> v)
{
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
}

bool isPalindrome(string s){
    int first = 0, last = s.size() - 1;

    bool ans = true;
    while(first < last){
        if(s[first] != s[last])
            ans = false;
        first++;
        last--;
    }

    return ans;
}

string longestPalindrome(string s)
{
    string ans="";

    for(int i = 0; i < s.size(); i++){
        for(int j = s.size(); j >= 0; j--)
        {
            cout << s.substr(i,j) << endl;

        }
    }

    int n = s.size();




    return ans;
}


int main()
{

    string s = "abcda";
    cout << longestPalindrome(s);
    return 0;
}


