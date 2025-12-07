# include <iostream>
using namespace std;
int main (){
    cout << "Enter a number : ";
    int n;
    cin >> n;
    int rev = 0;
    int rem;
    while (n>0){
        rem = n%10;
        rev = rev*10 + rem;
        n /= 10;
    }
    cout << "reverse of the given number is : " << rev << endl;
    return 0;
}