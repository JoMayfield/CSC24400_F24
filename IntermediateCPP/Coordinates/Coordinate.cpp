// Have to include Coordinate.hpp to be able
//    to use Coordinate class
#include "Coordinate.hpp"

#include <iostream>
using namespace std;

// CLASS METHOD EXAMPLE FOR PRINTING (x, y)
// This method prints a coordinate out as (x, y).
// It takes no arguments.
// It returns nothing.
// NOTICE: We must scope this method to the
//    Coordinate class!
void Coordinate::printCoordMethod()
{
    // NOTICE: We can access x and y (instance attrs)
    //    directly since this is a class method.
    cout << "(" << x << ", " << y << ")" << endl;
    return;
}

// This method overloads the + operator.
// It takes one Coordinate argument.
// It returns a Coordinate representing the sum
//    of the calling Coordinate and the Coordinate
//    argument.
Coordinate Coordinate::operator+(Coordinate p2)
{
    Coordinate sum = Coordinate();
    sum.x = x + p2.x;
    sum.y = y + p2.y;

    return sum;
}