#include "Personnel.h"
namespace Composant {
    Composant::Personnel::Personnel()
    {
        this->set_id(-1);
        this->set_nom("RIEN");
        this->set_prenom("RIEN");
        this->set_id_adresse(-1);
        this->set_id_superieur(-1);
        this->date_dembauche = System::DateTime::Now;
    }

    String^ Composant::Personnel::SELECT()
    {
        return "SELECT ID_Personnel, Nom_P, Prenom_P, Date_dembauche, id_personnel_supervise,id_adresse" +
            "FROM Personnel;";
    }

    String^ Composant::Personnel::INSERT()
    {
        return "INSERT INTO Personnel(Nom_P, Prenom_P, Date_dembauche,id_personnel_supervise,id_adresse)" +
            "VALUES('" + this->get_nom() + "','" + this->get_prenom() + "'," + date_to_string(this->get_date_embauche()) + "," + this->get_id_superieur() + "," + this->get_id_adresse()+");Select @@IDENTITY;";
    }

    String^ Composant::Personnel::UPDATE()
    {
        return "UPDATE Personnel " + "SET Nom_P = '" + this->get_nom() + "', Prenom_P = '" + this->get_prenom() + "', Date_dembauche = " + date_to_string(this->get_date_embauche())  +",id_personnel_Supervise = "+this->get_id_superieur()+
            ",id_adresse = "+this->get_id_adresse()+"WHERE(ID_Client = " + this->get_id() + ");";
    }

    String^ Composant::Personnel::DELETE()
    {
        return "DELETE FROM Personnel " +
            "WHERE(ID_Personnel = " + this->get_id() + ");";
    }

    void Composant::Personnel::set_date_embauche(DateTime^ date)
    {
        this->date_dembauche = date;
    }

    DateTime^ Composant::Personnel::get_date_embauche()
    {
        return this->date_dembauche;
    }

    int Composant::Personnel::get_id_superieur()
    {
        return this->id_superieur;
    }

    int Composant::Personnel::get_id_adresse()
    {
        return this->id_adresse;
    }

    void Composant::Personnel::set_id_superieur(int id)
    {
        this->id_superieur = id;
    }

    void Composant::Personnel::set_id_adresse(int id)
    {
        this->id_adresse = id;
    }
    Personnel::~Personnel()
    {
        delete this->date_dembauche;
        delete this;
    }
    String^ date_to_string(DateTime^ date) {
        return date->Year + "" + date->Month + "" + date->Day;
    }
}