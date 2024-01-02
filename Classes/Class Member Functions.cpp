//  class member functions, also known as methods - attached to objects of a particular type


#include <iostream>
using namespace std;


//*** Class definition ***


class RectumTangle
{
public:


    void setDimensions(double l, double w)
    
    {
        length = l;
        width = w;
    }

    double perimeter(); // function declaration (or function prototype) 

    void printArea()  // function declaration that accesses private area function and prints
    {
        cout <<"Area: " << area() << endl;
    }


private:
    double length;
    double width;

    //  private member function (can't be accessed from outside the class)
    double area()
    {
        return length * width;
    }

};



//*** Defining a member function outside the class definition ***



double RectumTangle::perimeter()
{
    return 2 * (length + width);
}




//*** Main ***


int main()
{
    RectumTangle rectangle1;

    rectangle1.setDimensions(10, 20);

    cout << "Perimeter: " << rectangle1.perimeter() << endl;

    rectangle1.printArea();


   

    return 0;

}


