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
        cout << "Requete SELECT" << endl;
    }

    String^ Composant::Personne::INSERT(void)
    {
        cout << "Requete INSERT" << endl;
    }

    String^ Composant::Personne::UPDATE(void)
    {
        cout << "Requete UPDATE" << endl;
    }

    String^ Composant::Personne::DELETE(void)
    {
        cout << "Requete DELETE" << endl;
    }
}