#include "Client.h"
using namespace System;
namespace Composant {


    Composant::Client::Client()
    {
        this->id = 0;
        this->nom = "";
        this->prenom = "";
        //initialiser les dates à la date actuelle
        this->date_naiss = System::DateTime::Now;
        this->date_pr_achat = System::DateTime::Now;
    }

    void Composant::Client::SetDate_naiss(System::DateTime^ date_naiss)
    {
        this->date_naiss = date_naiss;
    }

    System::DateTime^ Composant::Client::GetDate_naiss(void)
    {
        return this->date_naiss;
    }

    void Composant::Client::SetDate_pr_achat(System::DateTime^ date_pr_achat)
    {
        this->date_pr_achat = date_pr_achat;
    }

    System::DateTime^ Composant::Client::GetDate_pr_achat()
    {
        return this->date_pr_achat;
    }

    String^ Composant::Client::SELECT(void)
    {
        return "SELECT ID_Client, Nom_C, Prenom_C, Date_de_naissance, Date_du_premier_achat" +
            "FROM Client;";
    }

    String^ Composant::Client::INSERT(void)
    {
        return "INSERT INTO Client " +
            "(Nom_C, Prenom_C, Date_de_naissance, Date_du_premier_achat)" +
            "VALUES('" + this->get_nom() + "', '" + this->get_prenom() + "', '" + this->GetDate_naiss() + "','" + this->GetDate_pr_achat() + "');SELECT @@IDENTITY;";
    }

    String^ Composant::Client::UPDATE(void)
    {
        return "UPDATE Client " +
            "SET Nom_C = '" + this->get_nom() + "', Prenom_C = '" + this->get_prenom() + "', Date_de_naissance = '" + this->GetDate_naiss() + "', Date_du_premier_achat = '" + this->GetDate_pr_achat() + "' " +
            "WHERE(ID_Client = " + this->get_id() + ");";
    }

    String^ Composant::Client::DELETE(void)
    {
        return "DELETE FROM Client " +
            "WHERE(ID_Client = " + this->get_id() + ");";
    }
}