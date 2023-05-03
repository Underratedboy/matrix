#include <bits/stdc++.h>
using namespace std;

int main()
{
    int mat[3][2];


    mat[0][0] = 10;
    mat[0][1] = 20;
    mat[1][0] = 30;
    mat[1][1] = 40;
    mat[2][0] = 50;
    mat[2][1] = 60;

    int i, j;
    for(i = 0; i < 3; ++i)
    {
        for(j = 0; j < 2; ++j){
            cout<<mat[i][j]<<" ";  
        }
        cout<<"\n";
    }
    cout<<endl;

     int mat2[3][2];


    mat2[0][0] = 5;
    mat2[0][1] = 13;
    mat2[1][0] = 27;
    mat2[1][1] = 36;
    mat2[2][0] = 44;
    mat2[2][1] = 58;

    
    for(i = 0; i < 3; ++i)
    {
        for(j = 0; j < 2; ++j){
            cout<<mat2[i][j]<<" ";  
        }
        cout<<"\n";
    }
    int res[3][2];
    for(i = 0; i < 3; ++i){
        for(j = 0; j < 2; ++j){
            res[i][j] = mat[i][j] - mat2[i][j];}
            cout<<endl;
    }
    for(i = 0; i < 3; ++i)
        for(j = 0; j < 2; ++j)
        {
            cout << res[i][j] << "  ";
            if(j == 1)
            cout<<endl;
            
                
        }
        

    

    return 0;
}