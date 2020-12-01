#include "Article.h"

Composant::Article::Article()
{
	this->ID_article = 0;
	this->Reference_Article = "";
	this->Designation = "";
	this->Prix_HT = 0.00;
	this->Quantite_en_Stock = 0.00;
	this->Seuil_de_reapprovisionnement = 0;
	this->Couleur = "";
}

void Composant::Article::SetID_article(int ID_article)
{
	this->ID_article = ID_article;
}

int Composant::Article::getID_article(void)
{
	return this->ID_article;
}

void Composant::Article::SetReference_article(String^ Reference_article)
{
	this->Reference_Article = Reference_article;
}

String^ Composant::Article::getReference_article(void)
{
	return this->Reference_Article;
}

void Composant::Article::SetDesignation(String^ Designation)
{
	this->Designation = Designation;
}

String^ Composant::Article::getDesignation(void)
{
	return this->Designation;
}

void Composant::Article::setPrix_HT(float Prix_HT)
{
		this->Prix_HT =Prix_HT;
}

float Composant::Article::getPrix_HT(void)
{
	return this->Prix_HT;
}

void Composant::Article::setTaux_TVA(float Taux_TVA)
{
	this->Taux_TVA = Taux_TVA;
}

float Composant::Article::getTaux_TVA(void)
{
	return this->Taux_TVA;
}

void Composant::Article::setQuantite_en_Stock(int Quantite_en_Stock)
{
	this->Quantite_en_Stock = Quantite_en_Stock;
}

int Composant::Article::getQuantite_en_Stock(void)
{
	return this->Quantite_en_Stock;
}

void Composant::Article::setSeuil_de_reapprovisionnement(int Seuil_de_reapprovisionnement)
{
	this->Seuil_de_reapprovisionnement = Seuil_de_reapprovisionnement;
}

int Composant::Article::setQuantite_en_Stock(void)
{
	return this->Seuil_de_reapprovisionnement;
}

void Composant::Article::SetCouleur(String^ Couleur)
{
	this->Couleur = Couleur;
}

String^ Composant::Article::getCouleur(void)
{
	return this->Couleur;
}

String^ Composant::Article::SELECT(void)
{
	
}

String^ Composant::Article::INSERT(void)
{
	throw gcnew System::NotImplementedException();
	// TODO: insérer une instruction return ici
}

String^ Composant::Article::UPDATE(void)
{
	throw gcnew System::NotImplementedException();
	// TODO: insérer une instruction return ici
}

String^ Composant::Article::DELETE(void)
{
	throw gcnew System::NotImplementedException();
	// TODO: insérer une instruction return ici
}
