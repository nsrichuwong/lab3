#include<iostream>
using namespace std;

int main()
{
    double x = 6, sum = 0;
    while (x < 19){
        sum += 1/x;
        x = x+1;
    }
    cout << "sum is " << sum;

    return 0;
}