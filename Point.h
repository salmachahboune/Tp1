#pragma once
class Point
{
 private:
	 double x;
	 double y;
public:
	Point(double x, double y);
	void afficher();
	void TranslatePoint(double x,double y);
	bool operator==(const Point& P) const;
	double distance(const Point& P) const;
};

