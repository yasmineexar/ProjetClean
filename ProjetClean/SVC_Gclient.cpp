#include "SVC_Gclient.h"
namespace Service {
	SVC_Gclient::SVC_Gclient()
	{
		this->cad = gcnew Composant::CAD();
		this->client = gcnew Composant::Client();
	}
	DataTable^ SVC_Gclient::listeclients()
	{
		throw gcnew System::NotImplementedException();
		// TODO: insérer une instruction return ici
	}
	//une méthode qui retourne un DataTable contenant la liste des clients
	DataTable^ SVC_Gclient::listeclients()
	{
		this->dt = gcnew DataTable();
		this->dt = this->cad->getRows(this->client->SELECT());
		return this->dt; 
	}
	void SVC_Gclient::afficher(int)
	{
		throw gcnew System::NotImplementedException();
	}
	void SVC_Gclient::ajouter(String^, String^, DateTime^, DateTime^)
	{
		throw gcnew System::NotImplementedException();
	}
	void SVC_Gclient::modifier(int, String^, String^, DateTime^, DateTime^)
	{
		throw gcnew System::NotImplementedException();
	}
	void SVC_Gclient::supprimer(int)
	{
		throw gcnew System::NotImplementedException();
	}
}