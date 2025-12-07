# include <iostream>
using namespace std;
int main (){
    cout << "enter a natural number : ";
    int n;
    cin >> n;
    int rev = 0,rem;
    int cpy = n;
    while (cpy > 0){
        rem = cpy%10;
        rev = rev*10 + rem;
        cpy /= 10;
    }
    if(rev == n){
        cout << n << " is a palindrome.\n";
    }
    else {
        cout << n << " is not a palindrome.\n";
    }
    return 0;
}