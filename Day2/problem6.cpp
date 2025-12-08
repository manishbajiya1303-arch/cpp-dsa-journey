// count digits of a number using recursion
# include <iostream>
using namespace std;
int count_digits(int n){
    if(n/10 == 0) return 1;
    else return 1 + count_digits(n/10);
}
int main (){
    cout << "enter a natural number : ";
    int n;
    cin >> n;
    cout << "number of digits in " << n << " is " << count_digits(n) << endl;
    return 0;
}