#pragma once



class Complexe
{
private:
	double Re;
	double Img;
public:
	Complexe(double re, double img);
	void Afficher();
	double module() const;
	Complexe conjuge() const;          
	Complexe operator+(const Complexe& C) const ;
	Complexe operator+(const double& D) const;
	
	Complexe operator-(const Complexe& C) const ;
	Complexe operator-(const double& D) const ;

	Complexe operator*(const Complexe& C) const;
	Complexe operator*(const double& d) const;
	Complexe operator/(const Complexe& C) const;
	bool operator==(const Complexe& C) const;


	friend Complexe operator+(const double& D,const Complexe& C ) ;
	friend Complexe operator-(const double& D, const Complexe& C);
	friend Complexe operator*(const double& D, const Complexe& C);
};    
