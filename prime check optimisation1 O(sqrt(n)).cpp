#include<iostream>
using namespace std;

bool isprime(int no){
    if(no==1){
        return false;
    }
    for(int i=2;i*i<=no;i++){
        if(no%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int no;
    cin>>no;
    if(isprime(no)){
        cout << no << " is prime" << endl;
    }
    else{
        cout << no << " is not prime" << endl;
    }
}