//**************************************************************************************
// Programmer's name: Rory Saulsberry
// Course number: CIS 142
// Date: 10/26/2024
// Description: read the options for the user to select from 
//              save users input, calculate the area of a shape, have 
//              user input different measurements,if a selection is made 
//              that isn't on the list program will ask for user to input 
//              from selection list.
//**************************************************************************************

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    //declare variables
    char selection;
    double lenGth, wiDth, baSe, heiGht, bAse1, baSe2, radiUs;
    double area_Rectangle, area_Triangle, area_Trapezoid, area_Cirlce;
  
    do {
    //display on screen
    cout<< "A. Area of a rectangle"<<endl;
    cout<< "B. Area of a triangle"<<endl;
    cout<< "C. Area of a trapezoid"<<endl;
    cout<< "D. Area of a circle"<<endl;
    cout<< "Q. Quit"<<endl;
     cout<<"\n\n";
    cout<< "Please enter a selection: ";
    cin>> selection;
     cout<<"\n\n";
     
     switch(selection)
{
case 'A':
case 'a':

cout<<"Please enter the length of a rectangle: ";
cin>>lenGth;
cout<<"Please enter the width of a rectangle: ";
cin>>wiDth;
cout<<"\n\n";
area_Rectangle= lenGth * wiDth;
cout<<"Area of a rectangle is "<<area_Rectangle<<endl;
break;

case 'B':
case 'b':

cout<<"Please enter the base fo a triangle: ";
cin>>baSe;
cout<<"Please enter the height of a triangle: ";
cin>>heiGht;
cout<<"\n\n";
area_Triangle= (baSe * heiGht) * 0.5;
cout<<"Area of a triangle is "<<area_Triangle;
break;

case 'C':
case 'c':

cout<<"Please enter the lenth of the top of parellel sides of a trapezoid: ";
cin>>bAse1;
cout<<"Please enter the lenth of the bottom of parellel side of a trapezoid: ";
cin>>baSe2;
cout<<"Pleae enter the height of a trapezoid: ";
cin>> heiGht;
cout<<"\n\n";
area_Trapezoid= (bAse1 + baSe2)/ 2 * heiGht;
cout<<"Area of a trapezoid is "<<area_Trapezoid<<endl;
break;

case 'D':
case 'd':

cout<<"Please enter radius of a circle: ";
cin>>radiUs;
cout<<"\n\n";
area_Cirlce= M_PI * pow(radiUs,2);
cout<<"Area of a circle is "<< area_Cirlce<<endl;
break;

case 'Q':
case 'q':

cout<<"Quit"<<endl;
return 0;

//will default if a selection is made that isn't on the list
default:
cout<<"You have made an incorrect selection. Please try again!"<<endl;
break;
}
cout<<endl;
 } while (selection != 'Q' && selection != 'q');

    return 0;
}
