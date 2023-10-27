#pragma once

class Point {

public:

	virtual void SetX(float fValue) = 0;
	virtual void SetY(float fValue) = 0;
	virtual void Print() = 0;
	
	virtual float GetX() = 0;
	virtual float GetY() = 0;
};
