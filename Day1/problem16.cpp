//fibonacci using loop + recursion.
# include <iostream>
using namespace std;

int main (){
    cout << "enter no. of terms of fibonacci to print : ";
    int n;
    cin >> n;
    int a = 0,b = 1;
    for(int i=0;i<n;i++){
        int next = a+b;
        cout << a << " ";
        a = b;
        b = next;
    }
    cout << endl;
    return 0;
}