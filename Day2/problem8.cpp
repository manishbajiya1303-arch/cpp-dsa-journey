//print numbers from 1 to n using recursion
# include <iostream>
using namespace std;
int print_upto(int n){
    for(int i=1;i<=n;i++){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
int main (){
    cout << "enter value of n to print integers from 1 to n : ";
    int n;
    cin >> n;
    print_upto(n);
    return 0;
}