#include "Cmp_Client.h"
using namespace System;
Composant::Cmp_Client::Cmp_Client()
{
    this->id = 0;
    this->nom = "";
    this->prenom = "";
    this->date_naiss = System::DateTime::MaxValue;
    this->date_pr_achat = System::DateTime::MaxValue;
}

void Composant::Cmp_Client::SetDate_naiss(System::DateTime^ date_naiss)
{
    this->date_naiss = date_naiss;
}

System::DateTime^ Composant::Cmp_Client::GetDate_naiss(void)
{
    return this->date_naiss;
}

void Composant::Cmp_Client::SetDate_pr_achat(System::DateTime^ date_pr_achat)
{
    this->date_pr_achat = date_pr_achat;
}

System::DateTime^ Composant::Cmp_Client::GetDate_pr_achat()
{
    return this->date_pr_achat;
}

String^ Composant::Cmp_Client::SELECT(void)
{
    return "SELECT ID_Client, Nom_C, Prenom_C, Date_de_naissance, Date_du_premier_achat" +
        "FROM Client;";
}

String^ Composant::Cmp_Client::INSERT(void)
{
    return "INSERT INTO Client " +
        "(Nom_C, Prenom_C, Date_de_naissance, Date_du_premier_achat)" +
        "VALUES('" + this->get_nom() + "', '" + this->get_prenom() + "', '" + this->GetDate_naiss() + "','" + this->GetDate_pr_achat() + "');SELECT @@IDENTITY;";
}

String^ Composant::Cmp_Client::UPDATE(void)
{
    return "UPDATE Client " +
        "SET Nom_C = '" + this->get_nom() + "', Prenom_C = '" + this->get_prenom() + "', Date_de_naissance = '" + this->GetDate_naiss() + "', Date_du_premier_achat = '" + this->GetDate_pr_achat() + "' " +
        "WHERE(ID_Client = " + this->get_id() + ");";
}

String^ Composant::Cmp_Client::DELETE(void)
{
    return "DELETE FROM Client " +
        "WHERE(ID_Client = " + this->get_id() + ");";
}
