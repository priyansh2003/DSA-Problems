#include<bits/stdc++.h>
using namespace std;

void func(int ind , vector<int> &ds , int arr[] , int n)
{
    if(ind == n) 
    {
        for(auto itr: ds)
        {
            cout<<itr<<" ";
        }
        cout<<endl;
        return;
    }
    ds.push_back(arr[ind]);
    func(ind+1 , ds , arr , n);
    //not selecting 
    ds.pop_back();

    func(ind+1 , ds , arr ,n);
}

int main()
{
    int arr[] = {3,1,2};
    int n = 3;
    vector<int> ds;
    func(0 , ds , arr , n);
    return 0;
}