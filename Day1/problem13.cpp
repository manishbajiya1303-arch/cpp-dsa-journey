//sum of digits untill a single digit remains(digital root).
# include <iostream>
using namespace std;
int main (){
    cout << "enter a natural number : ";
    int n,cpy;
    cin >> n;
    cpy = n;
    int sum = 0,rem;
    for(int i=0;i<3;i++){
        while(n>0){
            rem = n%10;
            sum +=rem;
            n /= 10;
        }
        n = sum;
        sum = 0;
    }
    cout << "digital root of " << cpy << " is : " << n << endl;
    return 0;
}