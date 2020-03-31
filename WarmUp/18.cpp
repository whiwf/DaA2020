#include<iostream>
#include<climits>

using namespace std;

int n, S;
int a[37];
int Fopt=INT_MAX;
void Try(int i, int Si, int d){
    if(Si>S || d>Fopt) return;
    if(i>=n){
        if(Si==S) Fopt=min(Fopt, d);
        return;
    }
    Try(i, Si+a[i], d+1);
    Try(i+1, Si, d);
}

main(){
    cin>>n>>S;
    for(int i=0; i<n; ++i) cin>>a[i];
    Try(0,0,0);
    cout<<Fopt;
}
