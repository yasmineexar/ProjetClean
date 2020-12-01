#include "Cmp_Adresse.h"
namespace Composant
{
	Cmp_Adresse::Cmp_Adresse(void) {
		this->ID_Adresse = -1;
		this->adresse = "RIEN";
		this->Id_Ville = "RIEN";
	}
	String^ Cmp_Adresse::SELECT(void)
	{
		return "SELECT id_adresse, adresse, Id_ville " +
			"FROM TB_ADRESSE " + ");";
	}
	String^ Cmp_Adresse::INSERT(void)
	{
		return "INSERT INTO TB_ADRESSE(adresse, ville) " +
			"VALUES('" + this->adresse + "', '" + this->Id_Ville + ");";
	}
	String^ Cmp_Adresse::UPDATE(void)
	{
		return "UPDATE TB_ADRESSE " +
			"SET ID_Adresse ='" + this->ID_Adresse + "', ville ='" + this->Id_Ville + "',' " +
			"WHERE(ID_Adresse = " + this->ID_Adresse + "); ";
	}
	String^ Cmp_Adresse::DELETE(void)
	{
		return "DELETE FROM TB_ADRESSE " +
			"WHERE(ID_Adresse = " + this->ID_Adresse + ");";
	}
	void Cmp_Adresse::setIdAdresse(int ID_Adresse)
	{
		if (ID_Adresse > 0)this->ID_Adresse = ID_Adresse;
	}
	void Cmp_Adresse::setAdresse(String^ Adresse)
	{
		if (Adresse != "")this->adresse = Adresse;
	}

	void Cmp_Adresse::setIdVille(String^ Id_Ville)
	{
		if (Id_Ville != "")this->Id_Ville = Id_Ville;
	}

	int Cmp_Adresse::getIdAdresse(void)
	{
		return this->ID_Adresse;
	}
	String^ Cmp_Adresse::getAdresse(void)
	{
		return this->adresse;
	}
	String^ Cmp_Adresse::getIdVille(void)
	{
		return this->Id_Ville;
	}

