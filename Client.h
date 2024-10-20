#pragma once
using namespace std;
#include <iostream>
#include<string>


class Compte;

class Client
{
private:
	string nom;
	
    string prenom;

	Compte* comptes[100];
};

