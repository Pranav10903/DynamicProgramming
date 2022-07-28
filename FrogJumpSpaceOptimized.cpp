#include<bits/stdc++.h>
int frogJump(int n, vector<int> &height)
{
    int prev,prev2;
    prev = prev2 = 0;
    for(int i=1;i<n;i++){
        int fs = prev+abs(height[i] - height[i-1]);
        int ss = INT_MAX;
        if(i>1){
            ss = prev2+abs(height[i]-height[i-2]);
        }
        int curi=min(ss,fs);
        prev2 = prev;
        prev = curi;
    }
    return prev;
}
