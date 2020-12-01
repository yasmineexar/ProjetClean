#include "Article.h"

Composant::Article::Article()
{
	this->ID_article = -1;
	this->Reference_Article = "RIEN";
	this->Designation = "RIEN";
	this->Prix_HT = -1.00;
	this->Taux_TVA = -1.00;
	this->Quantite_en_Stock = -1;
	this->Seuil_de_reapprovisionnement = -1;
	this->Couleur = "RIEN";
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
	if (Reference_Article != "") 
	{
		this->Reference_Article = Reference_article;
	}
}

String^ Composant::Article::getReference_article(void)
{
	return this->Reference_Article;
}

void Composant::Article::SetDesignation(String^ Designation)
{
	if (Designation!="") 
	{ 
		this->Designation = Designation; 
	}
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

int Composant::Article::getSeuil_de_reapprovisionnement(void)
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
	return "SELECT ID_article, Reference_Article, Designation, Prix_HT, Taux_TVA, Quantite_en_Stock, Seuil_de_reapprovisionnement, Couleur" +
		"FROM Article;";
}

String^ Composant::Article::INSERT(void)
{
	return "INSERT INTO Article " +
		"(Reference_Article, Designation, Prix_HT, Taux_TVA, Quantite_en_Stock, Seuil_de_reapprovisionnement, Couleur)" +
		"VALUES('" + this->getReference_article() + "', '" + this->getDesignation() + "', '" + this->getTaux_TVA() + "','" + this->getQuantite_en_Stock() + "','" + this->getSeuil_de_reapprovisionnement() + "','" + this->getCouleur() + "');SELECT @@IDENTITY;";
}

String^ Composant::Article::UPDATE(void)
{
	return "UPDATE Article " +
		"SET Reference_Article = '" + this->getReference_article() + "', Designation = '" + this->getDesignation() + "', Prix_HT = '" + this->getPrix_HT() + "', Taux_TVA = '" + this->getTaux_TVA() + "', Quantite_en_Stock = '" + this->getQuantite_en_Stock() + "', Seuil_de_reapprovisionnement = '" + this->getSeuil_de_reapprovisionnement() + "', Couleur = '" + this->getCouleur() +"' " +
		"WHERE(ID_article = " + this->getID_article() + ");";
}

String^ Composant::Article::DELETE(void)
{
	return "DELETE FROM Article " +
		"WHERE(ID_article = " + this->getID_article() + ");";
}

Composant::Article::~Article()
{
	delete this->Reference_Article;
	delete this->Designation;
	delete this->Couleur;
}
