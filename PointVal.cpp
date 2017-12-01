/*CSS 487 Computer Visioin - Final Project
This class creates a PointVal struct which holds the data for 
an OpenCV struct and a double value associated with it.
Additionally a subset of the comparison operators have been overloaded
to increase the usabiliity of this class in the client code.

@author Daniel Grimm
@author Kevin Ulrich*/

//Imports
#include <opencv2/imgproc/imgproc.hpp>

//namespace
using namespace cv;

/*This creates a data structure consisting of an OpenCV Point
and a double value.*/
struct PointVal
{

	/*Preconditions:
	Postconditions:
	*/
	PointVal(Point p, double d)
	{
		point = p;
		doubleVal = d;
	}

	/*Preconditions:
	Postconditions:
	*/
	bool operator<(PointVal& p)
	{
		if (doubleVal < p.doubleVal)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	/*Preconditions:
	Postconditions:
	*/
	bool operator>(PointVal& p)
	{
		if (doubleVal > p.doubleVal)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	//Global variables
	Point point;	//point in space
	double doubleVal;	//integer value

};