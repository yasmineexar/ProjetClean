#include "Ligne_Commande.h"
namespace Composant
{
	Ligne_Commande::Ligne_Commande(void) {
		this->Id_Article = -1;
		this->Id_Commande = -1;
		this->Quantité_Article = -1;
		this->Remise = -1;
	}
	String^ Ligne_Commande::SELECT(void)
	{
		return "SELECT ID_Article, ID_Commande,Quantite_Article,Remise " +
			"FROM Ligne_Commande " + ");";
	}
	String^ Ligne_Commande::INSERT(void)
	{
		return "INSERT INTO Ligne_Commande (ID_Article,ID_Commande,Quantite_Article,Remise) " +
			"VALUES('" + this->Id_Article + "','" + this->Id_Commande + "','" + this->Quantité_Article + "','" + this->Remise + "',);SELECT @@IDENTITY;";
	}
	String^ Ligne_Commande::UPDATE(void)
	{
		return "UPDATE Ligne_Commande " +
			"SET ID_Article ='" + this->Id_Article + "',  ='" + this->Id_Commande + "',  ='" + this->Quantité_Article + "',  ='" + this->Remise + "'";
	}
	String^ Ligne_Commande::DELETE(void)
	{
		return "DELETE FROM Ligne_Commande " +
			"WHERE(ID_Article = " + this->Id_Article + "and ID_Commande = " + this->Id_Commande +")";
	}
	void Ligne_Commande::setIdArticle(int Id_Article)
	{
		if (Id_Article > 0)this->Id_Article = Id_Article;
	}
	void Ligne_Commande::setIdCommande(int Id_Commande)
	{
		if (Id_Commande > 0)this->Id_Commande = Id_Commande;
	}
	void Ligne_Commande::setQuantiteAricle(int Quantite_Article)
	{
		if (Quantite_Article > 0)this->Quantité_Article = Quantite_Article;
	}
	void Ligne_Commande::setRemise(float Remise)
	{
		if (Remise > 0)this->Remise= Remise;
	}
	int Ligne_Commande::getIdArticle(void)
	{
		return this->Id_Article;
	}
	int Ligne_Commande::getIdCommande(void)
	{
		return this->Id_Commande;
	}
	int Ligne_Commande::getQuantiteArticle(void)
	{
		return this->Quantité_Article;
	}
	int Ligne_Commande::getRemise(void)
	{
		return this->Remise;
	}
	Ligne_Commande::~Ligne_Commande()
	{
		delete this;
	}
}