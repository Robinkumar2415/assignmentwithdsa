#include<iostream>
using namespace std;
int main (){
    char char1,char2;
    int ascii1, ascii2, difference;
    cout<<"enter the first character: ";
    cin >> char1;
    cout << "enter the second character: ";
    cin >> char2;
    ascii1 = int(char1);
    ascii2 = int(char2);
    difference = abs(ascii1 - ascii2);
    cout << "the difference between the ascii value of "<<char1<<"and"<<"char2"<<" is: "<< difference <<endl;
}