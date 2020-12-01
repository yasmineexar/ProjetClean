#include "Ville.h"
namespace Composant
{
	Ville::Ville(void) {
		this->Id_Ville = -1;
		this->Nom_Ville = "RIEN";
	}
	String^ Ville::SELECT(void)
	{
		return "SELECT Id_Ville, Nom_ville " +
			"FROM TB_VILLE " + ");";
	}
	String^ Ville::INSERT(void)
	{
		return "INSERT INTO TB_VILLE(Nom_Ville) " +
			"VALUES('" + this->Nom_Ville + "');";
	}
	String^ Ville::UPDATE(void)
	{
		return "UPDATE TB_VILLE " +
			"SET Id_Ville ='" + this->Id_Ville + "', Nom_Ville ='" + this->Nom_Ville + "'";
	}
	String^ Ville::DELETE(void)
	{
		return "DELETE FROM TB_VILLE " +
			"WHERE(Id_Ville = " + this->Id_Ville + ");";
	}
	void Ville::setIdVille(int Id_Ville)
	{
		if (Id_Ville > 0)this->Id_Ville = Id_Ville;
	}
	void Ville::setNomVille(String^ Nom_Ville)
	{
		if (Nom_Ville != "")this->Nom_Ville = Nom_Ville;
	}
	int Ville::getIdVille(void)
	{
		return this->Id_Ville;
	}
	String^ Ville::getNomVille(void)
	{
		return this->Nom_Ville;
	}
}