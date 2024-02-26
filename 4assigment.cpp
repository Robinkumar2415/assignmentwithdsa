#include<iostream>
using namespace std;
int main(){
    double radius, height, volume;
    cout<<"enter the radius of the cylinder: ";
    cin>> radius;
    cout<<"enter the height of the cylinder: ";
    cin>>height;
    volume = 3.1415 * height * radius * radius;
    cout<<"the volume of the cylinder is: " << volume <<endl;
}