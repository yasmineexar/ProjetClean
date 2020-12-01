#include "Adresse.h"
namespace Composant
{
	Adresse::Adresse(void) {
		this->ID_Adresse = -1;
		this->adresse = "RIEN";
		this->Id_Ville = -1;
	}
	String^ Adresse::SELECT(void)
	{
		return "SELECT id_adresse, adresse, Id_ville " +
			"FROM Adresse " + ");";
	}
	String^ Adresse::INSERT(void)
	{
		return "INSERT INTO Adresse(adresse, ville) " +
			"VALUES('" + this->adresse + "', '" + this->Id_Ville + ");select @@IDENTITY;";
	}
	String^ Adresse::UPDATE(void)
	{
		return "UPDATE Adresse " +
			"SET ID_Adresse ='" + this->ID_Adresse + "', ville ='" + this->Id_Ville + "',' " +
			"WHERE(ID_Adresse = " + this->ID_Adresse + "); ";
	}
	String^ Adresse::DELETE(void)
	{
		return "DELETE FROM Adresse " +
			"WHERE(ID_Adresse = " + this->ID_Adresse + ");";
	}
	void Adresse::setIdAdresse(int ID_Adresse)
	{
		if (ID_Adresse > 0)this->ID_Adresse = ID_Adresse;
	}
	void Adresse::setAdresse(String^ Adresse)
	{
		if (Adresse != "")this->adresse = Adresse;
	}

	void Adresse::setIdVille(int Id_Ville)
	{
		if (Id_Ville > 0)this->Id_Ville = Id_Ville;
	}

	int Adresse::getIdAdresse(void)
	{
		return this->ID_Adresse;
	}
	String^ Adresse::getAdresse(void)
	{
		return this->adresse;
	}
	int Adresse::getIdVille(void)
	{
		return this->Id_Ville;
	}
}
