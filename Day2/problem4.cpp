// fibonacci of n using recursion
# include <iostream>
using namespace std;
int fibonacci(int n){
    if(n==1)return 0;
    else if(n==2) return 1;
    else return fibonacci(n-1) + fibonacci(n-2);
}
int main (){
    cout << "enter value of n to find nth term of fibonacci sequence : ";
    int n;
    cin >> n;
    cout << "nth term of fibonacci sequence is : " << fibonacci(n) << endl;
    return 0;
}