// Find a digit at a specific place in a number
#include<iostream>
using namespace std;
int main(){
    int number=123456;
    unsigned specific_place=3;
    string num=to_string(number);
    cout<<num[specific_place-1];
    return 0;
}