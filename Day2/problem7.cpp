// sum of digits using recursion
# include <iostream>
using namespace std;
int digit_sum(int n){
    if(n/10 == 0)return n;
    else return n%10 + digit_sum(n/10);
}
int main (){
    cout << "enter an natural number to find sum of its digits : ";
    int n;
    cin >> n;
    cout << "sum of digits of " << n << " is " << digit_sum(n) << endl;
    return 0;
}