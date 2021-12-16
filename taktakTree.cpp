#include<bits/stdc++.h>
using namespace std;

int main(){
    // Take Number of Fruits from the USER 
    // freopen("taktakin.txt","r", stdin);
    // freopen("taktakout.txt","w", stdout);
    int n;
    cin>>n;
    int fullMoon = 0;
    while(n % 11 != 1){
        fullMoon++;
        n = 2*n;
    }
    cout<<fullMoon<<" "<<n<<endl;
    return 0;
}