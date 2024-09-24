// Have to include Coordinate.hpp to be able
//    to use Coordinate class
#include "Coordinate.hpp"

#include <iostream>
using namespace std;

// STANDALONE FUNCTION EXAMPLE FOR PRINTING (x, y)
// This function prints a coordinate out as (x, y).
// It takes one Coordinate argument.
// It returns nothing.
// NOTICE: We do not need to scope this function
//    because it is not a class method.
// NOTICE: We need a Coordinate object because
//    there is no Coordinate calling object
//    like there is with one of the class methods.
void printCoordFunction(Coordinate p)
{
    cout << "(" << p.x << ", " << p.y << ")" << endl;
    return;
}

int main()
{
    // Declare and initialize two coordinate
    //    objects
    Coordinate c1 = Coordinate(3, 17);
    Coordinate c2 = Coordinate(25, 11);

    // Syntax differences in calling class
    //    methods and standalone functions
    //c1.printCoordMethod();
    //printCoordFunction(c1);

    // Testing operator+()
    Coordinate c3 = Coordinate();
    // The following two lines are equivalent!
    c3 = c1.operator+(c2);
    c3 = c1 + c2;

    // Can't yet cout a Coordinate without
    //    overloading operator<<
    //cout << c3;

    c3.printCoordMethod();

    return 0;
}