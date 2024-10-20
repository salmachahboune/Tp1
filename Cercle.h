#pragma once
#include"Point.h"
class Cercle
{
 private:
	 double rayon;
	 Point* centre;
 public:
	 Cercle(double rayon,Point* P);
	 void Afficher();
	 void UpdateRayon(const double Nrayon);
	 void TranslaterCentre(const double x,const double y);
	 double Surface() const;
	 double Perimetre() const;
	 bool operator==(const Cercle& C) const;
	 bool Apart(const Point& P) const;

};

