#pragma once
#include "pch.h"
#include "opennurbs.h"
#include <list>

using namespace std;

#define PRINCIPLECURVATURE_EXPORTS
#ifdef PRINCIPLECURVATURE_EXPORTS
#define PRIN_API __declspec(dllexport)
#else
#define PRIN_API __declspec(dllimport)
#endif



class PRIN_API Pyramid
{
private:
	ON_3dPoint Pt1;
	ON_3dPoint Pt2;
	ON_3dPoint Pt3;
	ON_3dPoint Pt4;
public:
	Pyramid(ON_3dPoint, ON_3dPoint, ON_3dPoint, ON_3dPoint);
	~Pyramid();
	list<ON_Line> GetPyramid();
};

//class PRINCURVATURE_Item;
//
//class PRIN_API PRINCURVATURE
//{
//private:
//	ON_Point Pt;
//	double UV[2];
//	ON_BrepFace Srf;
//public:
//	PRINCURVATURE(ON_Brep&, double)
//	{
//		ON_Point Pt = ON_Point();
//
//	}
//	~PRINCURVATURE();
//	PRINCURVATURE_Item Compute();
//};
//
//class PRIN_API PRINCURVATURE_Item
//{
//private:
//	friend class PRINCURVATURE;
//	list<ON_Point> PointList;
//	
//public:
//	PRINCURVATURE_Item() = default;
//	~PRINCURVATURE_Item();
//
//};