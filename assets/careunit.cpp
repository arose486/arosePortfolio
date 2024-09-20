/*==========================================================
Author:April Scales
Date:03/01/2022
Description: C++ Care Unit
  
  
 ==========================================================
*/
#include <iostream>
using namespace std;

double conversionMeters(double height_in_feet){
    return height_in_feet/3.281;
}
double BMIcalculator(double weight){
    return weight/(1.8*1,8);
}
double BMIcalculator(double weight, double height){
    return weight/(height*height);
}
void swapWeight(double & w1, double & w2){
    double temp;
    temp=w1;
    w1=w2;
    w2=temp;
}
int main() {
    double w1, w2, h;
    cin >> w1 >> w2 >> h;
    float index1 = BMIcalculator(w1);
    float index2 = BMIcalculator(w2, conversionMeters(h));
    cout << index1 << " " << index2 << endl;
    swap(w1, w2);
    index1 = BMIcalculator(w1);
    index2 = BMIcalculator(w2, conversionMeters(h));
    cout << index1 << " " << index2 << endl;
}