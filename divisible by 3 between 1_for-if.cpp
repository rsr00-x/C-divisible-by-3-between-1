#include<iostream>
using namespace std;
int main()
{
    int number, sum=0;
    cout << "Enter a number: ";
    cin >> number;

    for(int i=1;i<=number;i++){
    if(i%3==0){
      sum=sum+i;
    }
    }
    cout << "The sum of numbers divisible by 3 between 1 and " << number << " is: " << sum <<endl;
    return 0;
}
