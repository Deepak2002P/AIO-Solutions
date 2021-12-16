#include<bits/stdc++.h>
using namespace std;
int main(){
    // freopen("listin.txt", "r",stdin);
    // freopen("listout.txt", "w",stdout);
    // take number of FriendLists
    int size;
    cin >> size;
    int n = 1001;
    int *arr = (int *)malloc(n*sizeof(int));
    for(int i=0; i<n; i++){
        arr[i] = 0;
    }

    for(int i=0; i<size; i++){
        int p1, p2;
        cin>> p1 >> p2;
        arr[p1]++;
        arr[p2]++;
    }
    int max = 0;
    for(int i=0; i<n; i++){
        if(max < arr[i])
          max = arr[i];
    }

    for(int i=0; i<n; i++){
        if(arr[i] == max)
          cout<< i <<endl;
    }
    return 0;
}