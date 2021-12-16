#include<bits/stdc++.h>
using namespace std;
int main(){
    // freopen("dishin.txt","r", stdin);
    // freopen("dishout.txt","w", stdout);
    int n;
    cin>>n;
    // int * arr = (int *)malloc(n * sizeof(int));
    int min = INT_MAX;
    int max = INT_MIN;
    int sum = 0;
    for(int i=0; i<n; i++){
        int k;
        cin>>k;
        if(k > max){
            max = k;
        }if(k < min){
            min = k;
        }
        sum += k;
    }
    // Display min, max and Avg
    cout<< min <<" "<<max<<" "<<(sum/n)<<endl;
    // free(arr);
    return 0;
}