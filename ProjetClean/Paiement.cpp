#include "Paiement.h"
using namespace System;
Composant::Paiement::Paiement(void)
{
    this->ID_Paiement = -1;
    this->Date_Paiement = System::DateTime::Now;
    this->Date_ReglementSolde = System::DateTime::MaxValue;
    this->Moyen_Paiement = "RIEN";
    this->Montant_Total_HT = -1;
    this->ID_Client = -1;
    this->ID_Commande = -1;
}

String^ Composant::Paiement::SELECT(void)
{
    return "SELECT Id_Paiement, Date_Paiement, Date_ReglementSolde, Moyen_Paiement, Montant_Total_HT,Montant_Total_TVA,ID_Client,ID_Commande" +
        "FROM Paiement;";
}

String^ Composant::Paiement::INSERT(void)
{
    return "INSERT INTO Paiment " +
        "(Id_Paiement, Date_Paiement, Date_ReglementSolde, Moyen_Paiement,Montant_Total_HT,Montant_Total_TVA,ID_Client,ID_Commande)" +
        "VALUES('" + this->getIdPaiement() + "', '" + this->getDatePaiement() + "', '" + this->getDateReglementSolde() + "','" + this->getMoyenPaiement() + "','" + this->getMontantTotalHT() + "','" + this->getMontantTotalTVA() + "','" + this->getIdClient() + "','" + this->getIdCommande() + "');SELECT @@IDENTITY;";
}

String^ Composant::Paiement::UPDATE(void)
{
    return "UPDATE Client " +
        "SET Date_Paiement = '" + this->getDatePaiement() + "', Date_ReglementSolde = '" + this->getDateReglementSolde() + "', Moyen_Paiement = '" + this->getMoyenPaiement() + "', Montant_Total_HT = '" + this->getMontantTotalHT() + "' , Montant_Total_TVA = '" + this->getMontantTotalTVA() + "' , ID_Client = '" + this->getIdClient() + "' , ID_Commande = '" + this->getIdCommande() +
        "WHERE(ID_Paiement = " + this->getIdPaiement() + ");";
}

String^ Composant::Paiement::DELETE(void)
{
    return "DELETE FROM Paiement " +
        "WHERE(ID_Paiement = " + this->getIdPaiement() + ");";
}

void Composant::Paiement::setIdPaiement(int ID_Paiement)
{
    if (ID_Paiement > 0)this->ID_Paiement = ID_Paiement;
}

void Composant::Paiement::setDatePaiement(DateTime^ Date_Paiement)
{
    this->Date_Paiement = Date_Paiement;
}

void Composant::Paiement::setDate_ReglementSolde(DateTime^ Date_ReglementSolde)
{
    this->Date_ReglementSolde = Date_ReglementSolde;
}

void Composant::Paiement::setMoyenPaiement(String^ Moyen_Paiement)
{
    if (Moyen_Paiement != "")this->Moyen_Paiement = Moyen_Paiement;
}

void Composant::Paiement::setMontantTotalHT(float Montant_Total_HT)
{
    this->Montant_Total_HT = Montant_Total_HT;
}

void Composant::Paiement::setMontantTotalTVA(float Montant_Total_TVA)
{
    this->Montant_Total_TVA = Montant_Total_TVA;
}

void Composant::Paiement::setIdClient(int ID_Client)
{
    if (ID_Client > 0)this->ID_Client = ID_Client;
}

void Composant::Paiement::setIdCommande(int ID_Commande)
{
    if (ID_Commande > 0)this->ID_Commande = ID_Commande;
}

int Composant::Paiement::getIdPaiement(void)
{
    return this->ID_Paiement;
}

DateTime^ Composant::Paiement::getDatePaiement(void)
{
    return this->Date_Paiement;
}

DateTime^ Composant::Paiement::getDateReglementSolde(void)
{
    return this->Date_ReglementSolde;
}

String^ Composant::Paiement::getMoyenPaiement(void)
{
    return this->Moyen_Paiement;
}

float Composant::Paiement::getMontantTotalHT(void)
{
    return this->Montant_Total_HT;
}

float Composant::Paiement::getMontantTotalTVA(void)
{
    return this->Montant_Total_TVA;
}


int Composant::Paiement::getIdClient(void)
{
    return this->ID_Client;
}

int Composant::Paiement::getIdCommande(void)
{
    return this->ID_Commande;
}

Composant::Paiement::~Paiement()
{
    delete this->Date_Paiement;
    delete this->Date_ReglementSolde;
    delete this->Moyen_Paiement;
    delete this;
}
