#include <iostream>
using namespace std;

void primeseive(int *p,int n){
    p[0]=p[1]=0;
    p[2]=1;
    for(int i=3;i<=n;i+=2){
        p[i]=1;
    }

    for(int i=3;i<=n;i+=2){
        if(p[i]){
            for(int j=i*i;j<=n;j+=2*i){
                p[j]=0;
            }
        }
    }
    return;
}
int main() {
    int n=100;
    int N=1000000;
    int p[N]={0};
    primeseive(p,n);
    for(int i=0;i<=100;i++){
        if(p[i]==1){
            cout << i << " ";
        }
    }
}
