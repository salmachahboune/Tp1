#include "Complexe.h"
#include <iostream>



//constructeur par parametre
Complexe::Complexe(double re,double img):Re(re),Img(img)
{}

//fonction afficher
void Complexe::Afficher()
{
	std::cout << this->Re << " +i" << this->Img << std::endl;
}

//fonction module
double Complexe::module() const
{
	return sqrt(((this->Re)*(this->Re))+((this->Img)*(this->Img)));
}

//fonction conjuge
Complexe Complexe::conjuge() const
{  

	return Complexe(this->Re, -(this->Img));
	
}

Complexe Complexe::operator+(const Complexe& C) const
{
  return Complexe(this->Re + C.Re, this->Img + C.Img);
}

Complexe Complexe::operator+(const double& D) const
{
return Complexe(this->Re+D,this->Img );
}

Complexe Complexe::operator-(const Complexe& C) const
{
	return Complexe(this->Re - C.Re, this->Img - C.Img);
}

Complexe Complexe::operator-(const double& D) const
{
	return Complexe(this->Re - D, this->Img);
}

Complexe Complexe::operator*(const Complexe& C) const
{
		return Complexe(
			this->Re * C.Re - this->Img * C.Img,   
			this->Re * C.Img + this->Img * C.Re    
		);
}

Complexe Complexe::operator*(const double& d) const
{
	return Complexe(
		this->Re * d,
		this->Img *d
	);
}

Complexe Complexe::operator/(const Complexe& C) const
{
		double denominateur = C.Re * C.Re + C.Img * C.Img;
		if (denominateur == 0) exit;
		return Complexe(
			(this->Re * C.Re + this->Img * C.Img) / denominateur,
			(this->Img * C.Re - this->Re * C.Img) / denominateur
		);
		
}

bool Complexe::operator==(const Complexe& C) const
{
	return this->Re==C.Re && this->Img==C.Img;
}



Complexe operator+(const double& D, const Complexe& C)
{
	return Complexe(C.Re + D, C.Img);
}

Complexe operator-(const double& D, const Complexe& C)
{
	return Complexe(C.Re - D, C.Img);
}

Complexe operator*(const double& D, const Complexe& C)
{
	return Complexe(
		C.Re * D,
		C.Img * D
	);
}
