#include<bits/stdc++.h>
using namespace std;
int main(){
    // freopen("rainin.txt","r", stdin);
    // freopen("rainout.txt","w", stdout);
    // take n and c from the USER 
    // here n -> the number of days the weather predictions last
    // c -> Capacity of the tank
    int n, c;
    cin>>n>>c;
    int count = 0;
    int sum = 0;
    for(int i=1; i<= n; i++){
        int k;
        cin >> k;
        if(sum >= c){
            break;
        }
        sum += k;
        count++;
    }
    cout<< count<<endl;
    return 0;
}