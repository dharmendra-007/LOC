/*
5. Write a C++ program to enter the radius of a circle and find its diameter, circumference and area.
*/
#include <iostream>
using namespace std;
int main (){
    float radius;
    cout << "Enter radius of the circle : " ;
    cin >> radius;
    cout << "diameter : " << (radius * 2) << endl;
    cout << "circumference : " << (2 * radius * 3.14) << endl;
    cout << "area : " << (3.14 * radius * radius  ) << endl;
    return 0;
}