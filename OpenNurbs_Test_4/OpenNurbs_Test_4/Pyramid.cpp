#include "pch.h"
#include "opennurbs.h"

class Pyramid
{
private:
	ON_3dPoint Pt1, Pt2, Pt3, Pt4;
	ON_Line* Frame;
public:
	Pyramid(ON_3dPoint, ON_3dPoint, ON_3dPoint, ON_3dPoint);
	ON_Line* GetFrame() const;
};

Pyramid::Pyramid(ON_3dPoint Pt1, ON_3dPoint Pt2, ON_3dPoint Pt3, ON_3dPoint Pt4)
{
	this->Pt1 = Pt1;
	this->Pt2 = Pt2;
	this->Pt3 = Pt3;
	this->Pt4 = Pt4;
	Frame = new ON_Line[6];
	Frame[0] = ON_Line(Pt1, Pt2);
	Frame[1] = ON_Line(Pt2, Pt3);
	Frame[2] = ON_Line(Pt3, Pt1);
	Frame[3] = ON_Line(Pt1, Pt4);
	Frame[4] = ON_Line(Pt2, Pt4);
	Frame[5] = ON_Line(Pt3, Pt4);
}

ON_Line* Pyramid::GetFrame() const
{
	return Frame;
}