#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double M[12][12],somador=0.0;
    int coluna,i,j;
    char operacao;
    cin>>operacao;

    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            cin>>M[i][j];
        }
    }
    j=1;
    coluna=11;
    while(coluna>=7){
        for(i=j;i<=(11-j);i++){
            somador=somador+M[i][coluna];
        }
        coluna--;
        j++;
    }
    if(operacao=='S'){
        cout<<fixed<<setprecision(1)<<somador<<endl;
    }
    if(operacao=='M'){
        cout<<fixed<<setprecision(1)<<somador/30.0<<endl;
    }

    return 0;
}

