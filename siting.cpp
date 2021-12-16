#include<bits/stdc++.h>
using namespace std;
int main(){

    freopen("sitin.txt", "r", stdin);
    freopen("sitout.txt", "w", stdout);

    int r,s;
    cin>>r>>s;
    int noOfTickets;
    cin>>noOfTickets;
    int seats = r*s;
    if(seats >= noOfTickets){
        cout<<noOfTickets<<" "<<0<<endl;
    } else{
        cout<<seats<<" "<<(noOfTickets - seats)<<endl;
    }
    return 0;
}