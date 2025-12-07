# include <iostream>
using namespace std;
int isprime(int n){
    if(n==1 || n==0){
        return 0;
    }
    else if (n==2)return 1;
    else{
        for(int i=2;i<n;i++){
            if(n%i == 0)return 0;
        }
    }
    return 1;
}

int main (){
    cout << "enter value of L and R to print prime numbers in range L to R : ";
    int l,r;
    cin >> l >> r;
    for(int i=l;i<r+1;i++){
        if(isprime(i)) cout << i << " ";
    }
    cout << endl;
    return 0;
}