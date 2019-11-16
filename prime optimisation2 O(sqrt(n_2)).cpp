#include <iostream>
using namespace std;

bool isprime(int no){
    if(no==1){
        return false;
    }
    if(no==2){
        return false;
    }
    for(int i=3;i*i<=no;i+=2){
        if(no%2==0){
            return false;
        }
    }
    return true;
}
int main() {
    int no;
    cin>>no;
    if(isprime(no)){
        cout << no << " is prime" << endl;
    }
    else{
        cout << no << " is not prime" << endl;
    }
}
