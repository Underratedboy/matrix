#include<bits\stdc++.h>
using namespace std;

int main(){
    int a[10][10],b[10][10],res[10][10],r1,c1,r2.c2,i,j,k;
    cout<<"row & column for m1 :";
    cin>>r1>>c1;
    cout<<"row & column for m2 :";
    cin>>r2>>c2;

    while(c1!=r2){
        cout<<"error";
        cout<<"row & column for m1 :";
        cin>>r1>>c1;
        cout<<"row & column for m2 :";
        cin>>r2>>c2;

    }

    cout<<endl<<"enter the elements of m1 : "<<endl;
    
    for(i=0; i<r1; ++i)
        for(j=0; j<c1; ++j){
        cout<<"enter element a"<<i+1<<j+1<<":";
        cin>>a[i][j];}

     cout<<endl<<"enter the elements of m2 : "<<endl;
    
    for(i=0; i<r2; ++i)
        for(j=0; j<c2; ++j){
        cout<<"enter element a"<<i+1<<j+1<<":";
        cin>>b[i][j];}

    for(i=0; i<r1; ++i)
        for(j=0; j<c2; ++j){
            res[i][j]=0;}

    for(i=0; i<r1; ++i)
        for(j=0; j<c2; ++j)
            for(k=0; k<c1; ++k){
                res[i][j]+=a[i][k]*b[j][k];

        }
    cout<<endl<<"output matrix : "<<endl;
    for(i=0; i<r1; ++i)
        for(j=0; j<c2; ++j)
        {
            cout<<" "<<res[i][j];
            if(j==c2-1)
                cout<<endl;
        }
    

    return 0;




}