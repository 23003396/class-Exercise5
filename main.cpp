#include <iostream>
#include <cmath>
using namespace std;

double distance(double x1, double x2, double y1, double y2){

double power1 = pow((x1-x2),2);
double power2 = pow((y1-y2),2);
double cal_distance = sqrt(power1 + power2);

return cal_distance;
}

int main(){

double x1,x2,y1,y2;

cout<<"Calculate the euclidean distance between two points "<<endl;
cout<<"\n"<<endl;

cout<<"Enter the value of x1: ";
cin>> x1;
cout<<"Enter the value of x2: ";
cin>> x2;
cout<<"Enter the value of y1: ";
cin>> y1;
cout<<"Enter the value of y2: ";
cin>> y2;

int results = distance(x1,x2,y1,y2);
cout<<"The distance between point 1 and point 2 is "<< results <<endl;


}
