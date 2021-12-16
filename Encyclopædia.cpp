#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("encyin.txt","r", stdin);
    freopen("encyout.txt","w", stdout);
    // Take n and q as Input 
    int n, q;
    cin>> n >>q;
    int *arr = (int *)malloc(n * (sizeof(int)));
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    // Now Answer the Questions
    for(int i=0; i< q; i++){
        int k;
        cin>>k;
        // Generate ans for the Question
        cout<< arr[k-1]<<endl;
    }
    free(arr);
    return 0;
}