#include "Cercle.h"
#include <iostream>
double pi = 3.14;
Cercle::Cercle(double rayon, Point* P) :rayon(rayon), centre(P)
{}

void Cercle::Afficher()
{   
	this->centre->afficher();
	std::cout << "rayon ="<<this->rayon<<std::endl;
}


void Cercle::UpdateRayon(const double Nrayon)
{
	this->rayon = Nrayon;
}

void Cercle::TranslaterCentre(const double x, const double y)
{
	this->centre->TranslatePoint(x, y);

}

double Cercle::Surface() const
{  

	return pi*(this->rayon* this->rayon);
}

double Cercle::Perimetre() const
{
	return 2 * pi * rayon;
}

bool Cercle::operator==(const Cercle& C) const
{
	return this->rayon == C.rayon && this->centre == C.centre;
	
}

bool Cercle::Apart(const Point& P) const {
	double dist = this->centre->distance(P); 
	return dist == this->rayon; 
}
