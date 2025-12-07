# include <iostream>
using namespace std;

// function to check prime number.
int isprime(int n){
    if (n==1) return 0;
    else if (n==2) return 1;
    else {
        for(int i=2;i<n;i++){
            if(n%i==0)return 0;
        }
    }
    return 1;
}

// function to find no of divisors of a positive number.
int div_of(int n){
    int count=0;
    if(isprime(n)==1)return 2;
    else {
        for(int i=1;i<n+1;i++){
            if(n%i == 0) count++;
        }
    }
    return count;
}

int main (){
    cout << "enter an integer number : ";
    int n;
    cin >> n;
    if(n==0){
        cout << "0 is a composite number and has infinitely many divisors.\n";
    }
    else if(n>0){
        if(isprime(n) == 1){
            cout << n << " is a prime number.\n";
        }
        else if (n==1){
            cout << "1 is neither prime nor composite.";
        }
        else {
            cout << n << " is a composite number and has " << div_of(n) << "no. of divisors.";
        }
    }
    else {
        cout << n << " is neither prime nor composite.\n";
        cout << "no. of divisors of " << n << " are : " << 2*div_of(n) << endl;
    }
    return 0;
}