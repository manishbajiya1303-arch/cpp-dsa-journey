# include <iostream>
using namespace std;
int main (){
    int a,b;
    cout << "enter first number : ";
    cin >> a;
    cout << "enter second number : ";
    cin >> b;
    if(a == b){
        cout << "both the given numbers are equal.\n";
    }
    else{
        cout << "the larger among numbers " << a << " and " << b << " is : ";
        if(a>b) cout << a;
        else cout << b;
    }
    return 0;
}