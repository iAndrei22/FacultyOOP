#pragma once
#include "Point2D.h"
class Point3D :public Point2D
{
public:

	explicit Point3D(float XValue, float YValue, float ZValue);
	Point3D();

	/**@brief Getter for Z axis coordinate of the point
	* @return real part (float)
	*/
	float GetZ();

	/**@brief Setter for Z axis coordinate*/
	void SetZ(float fSetZValue);

	/**@brief Offseting a point on both coordinates
	  * @param fOffsetXValue - the value of which the X corrdinate is being offsetted on this instance
	  * @param fOffsetYValue - the value of which the Y corrdinate is being offsetted on this instance
	  * @param fOffsetZValue - the value of which the Z corrdinate is being offsetted on this instance
	  */
	void Offset(float fOffsetXValue, float fOffsetYValue, float fOffsetZValue);

	/**@brief A function that returns the distance between this point and another one (given as parameter)
	  *@param AnotherPoint - the other point (besides this) to calculate distance for
	  * @return distance in value(float)
	  */
	float Distance(Point3D AnotherPoint); //it doesn't work with overriding/virtual because it doesn't make sense to have a Point2D parameter(the same as in Point2D.h definition). If I want to have a Point3D parameter it isn't called overriding (not the sama params)

	void Print();
protected:
	float m_fZ;
};
