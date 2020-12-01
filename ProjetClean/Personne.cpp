#include "Personne.h"
#include<iostream>
using namespace std;
namespace Composant {
    

    Composant::Personne::Personne()
    {
        
    }

    void Composant::Personne::set_nom(String^ nom)
    {
        this->nom = nom;
    }

    void Composant::Personne::set_prenom(String^ prenom)
    {
        this->prenom = prenom;
    }

    String^ Composant::Personne::get_nom()
    {
        return this->nom;
    }

    String^ Composant::Personne::get_prenom()
    {
        return this->prenom;
    }

    void Composant::Personne::set_id(int id)
    {
        this->id = id;
    }

    int Composant::Personne::get_id()
    {
        return this->id;
    }

    String^ Composant::Personne::SELECT(void)
    {
    }

    String^ Composant::Personne::INSERT(void)
    {
    }

    String^ Composant::Personne::UPDATE(void)
    {
    }
    String^ Composant::Personne::DELETE(void)
    {
    }
}