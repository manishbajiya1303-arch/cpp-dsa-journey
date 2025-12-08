// factorial using recursion
# include <iostream>
using namespace std;
int factorial(int n){
    if(n == 0)return 1;
    else return n*factorial(n-1);
}
int main (){
    cout << "enter a positive number : ";
    int n;
    cin >> n;
    if(n<0)cout << "invalid input." << endl;
    else {
        cout << "factorial of " << n << " is : " << factorial(n) << endl;
    }
    return 0;
}