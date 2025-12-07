# include <iostream>
using namespace std;
int main (){
    float n;
    cout << "enter a real number : ";
    cin >> n;
    if(n == 0){
        cout << "The given number is zero.\n";
    }
    else if(n > 0){
        cout << "The given number is positive.\n";
    }
    else {
        cout << "The given number is negative.\n";
    }
    return 0;
}