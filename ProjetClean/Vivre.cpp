#include "Vivre.h"
namespace Composant
{
	Vivre::Vivre(void) {
		this->Id_Adresse = -1;
		this->Id_Client = -1;
	}
	String^ Vivre::SELECT(void)
	{
		return "SELECT ID_Adresse, ID_Client " +
			"FROM Vivre " + ");";
	}
	String^ Vivre::INSERT(void)
	{
		return "INSERT INTO Vivre (ID_Adresse,ID_Client) " +
			"VALUES('" + this->Id_Adresse + "','" + this->Id_Client + "',);SELECT @@IDENTITY;";
	}
	String^ Vivre::UPDATE(void)
	{
		return "UPDATE Vivre " +
			"SET Id_Adresse ='" + this->Id_Adresse + "',  ='" + this->Id_Client +"'";
	}
	String^ Vivre::DELETE(void)
	{
		return "DELETE FROM Vivre " +
			"WHERE(Id_Adresse = " + this->Id_Adresse + "and Id_Client= " + this->Id_Client + ")";
	}
	void Vivre::setIdAdresse(int Id_Adresse)
	{
		if (Id_Adresse > 0)this->Id_Adresse = Id_Adresse;
	}
	void Vivre::setIdClient(int Id_Client)
	{
		if (Id_Client > 0)this->Id_Client = Id_Client;
	}
	int Vivre::getIdAdresse(void)
	{
		return this->Id_Adresse;
	}
	int Vivre::getIdClient(void)
	{
		return this->Id_Client;
	}
}