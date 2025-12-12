# include <iostream>
# include <cmath>
using namespace std;
int main (){
    cout << "enter a natural number : ";
    int n;
    cin >> n;
    int digits = 0,cpy = n;
    while (cpy>0)
    {
        digits++;
        cpy /= 10;
    }
    int sum =0,rem;
    cpy = n;
    while(cpy>0){
        rem = cpy % 10;
        sum += pow(rem,digits);
        cpy /= 10;
    }
    if(sum == n){
        cout << n << " is an armstrong number.\n";
    }
    else {
        cout << n << " is not an armstrong number.\n";
    }
    
    return 0;
}