#include "Adresse.h"
namespace Composant
{
	Adresse::Adresse(void) {
		this->ID_Adresse = -1;
		this->adresse = "RIEN";
		this->Id_Ville = "RIEN";
	}
	String^ Adresse::SELECT(void)
	{
		return "SELECT id_adresse, adresse, Id_ville " +
			"FROM TB_ADRESSE " + ");";
	}
	String^ Adresse::INSERT(void)
	{
		return "INSERT INTO TB_ADRESSE(adresse, ville) " +
			"VALUES('" + this->adresse + "', '" + this->Id_Ville + ");";
	}
	String^ Adresse::UPDATE(void)
	{
		return "UPDATE TB_ADRESSE " +
			"SET ID_Adresse ='" + this->ID_Adresse + "', ville ='" + this->Id_Ville + "',' " +
			"WHERE(ID_Adresse = " + this->ID_Adresse + "); ";
	}
	String^ Adresse::DELETE(void)
	{
		return "DELETE FROM TB_ADRESSE " +
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

	void Adresse::setIdVille(String^ Id_Ville)
	{
		if (Id_Ville != "")this->Id_Ville = Id_Ville;
	}

	int Adresse::getIdAdresse(void)
	{
		return this->ID_Adresse;
	}
	String^ Adresse::getAdresse(void)
	{
		return this->adresse;
	}
	String^ Adresse::getIdVille(void)
	{
		return this->Id_Ville;
	}
