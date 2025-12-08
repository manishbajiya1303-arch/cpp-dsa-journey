// check if a number is prime using function
# include <iostream>
using namespace std;
int isPrime(int n){
    if(n==2) return 1;
    else {
        for(int i=2;i<n;i++){
            if(n%i==0)return 0;
        }
    }
    return 1;
}
int main (){
    cout << "enter a number to check prime : ";
    int n;
    cin >> n;
    if(n<2)cout << n << " is neither prime nor composite." << endl;
    else if(isPrime(n)) cout << n << " is prime." << endl;
    else cout << n << " is a composite number." << endl;
}