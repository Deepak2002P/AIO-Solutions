#include<bits/stdc++.h>
using namespace std;
int main(){
    // freopen("dictin.txt", "r",stdin);
    // freopen("dictout.txt", "w",stdout);
    // take d and w
    int d, w;
    cin>>d >>w;
    int *word = (int *)malloc(d* sizeof(int));
    int *translation = (int *)malloc(d* sizeof(int));
    for(int i=0; i<d; i++){
        cin >> word[i] >> translation[i];
    }
    // Translate the correspond words
    for(int i=0; i<w; i++){
        int k;
        cin >> k;
        int index = -1;
        for(int i=0; i<d; i++){
            if(word[i] == k)
              index = i;
        } 
        if(index == -1){
            cout<<"C?";
            continue;
        }
        else{
            cout<< translation[index] <<endl;
        }
    }
    free(word);
    free(translation);
    return 0;
}