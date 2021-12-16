#include<bits/stdc++.h>
using namespace std;
int main(){
    // freopen("tripin.txt","r", stdin);
    // freopen("tripout.txt","w", stdout);
    // take n as a Input from the USER
    int n;
    cin>> n;
    int *arr = (int *)(malloc(n*sizeof(int)));
    int count = 0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i] % 3 == 0)
         count++;
    }
    // Display the Count First
    if(count != 0){ 
    cout<< count<<endl;
    // Now Display the Locations
    for(int i=0; i<n; i++){
        if(arr[i] % 3 == 0)
          cout<< (i+1) <<" ";  
    }
    }
    else {
        cout <<"Nothing here!"<<endl;
    }
    return 0;
}