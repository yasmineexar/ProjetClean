#include "SVC_Gclient.h"
namespace Service {
	using namespace System;
	SVC_Gclient::SVC_Gclient()
	{
		this->cad = gcnew Composant::CAD();
		this->client = gcnew Composant::Client();
	}
	//une méthode qui retourne un DataTable contenant la liste des clients
	DataTable^ SVC_Gclient::listeclients()
	{
		DataSet^ s = gcnew DataSet();
		this->dt = gcnew DataTable();
		this->dt = this->cad->getRows(this->client->SELECT());
		return this->dt; 
	}

	DataTable^ SVC_Gclient::adressesClient(int)
	{
		this->dt = gcnew DataTable();
		return dt;
	}

	void SVC_Gclient::afficher(int id)
	{
		this->client->set_id(id);
		DataTable^ c = this->cad->getRows(this->client->SELECTbyid());
		String^ date_naiss = Convert::ToString(c->Rows[0]->ItemArray[3]);
		String^ date_prachat = Convert::ToString(c->Rows[0]->ItemArray[4]);
		this->client->set_id(id);
		this->client->set_nom(Convert::ToString(c->Rows[0]->ItemArray[1]));
		this->client->set_prenom(Convert::ToString(c->Rows[0]->ItemArray[2]));
		this->client->SetDate_naiss(DateTime(Convert::ToInt32(date_naiss->Substring(6, 4)), Convert::ToInt32(date_naiss->Substring(3, 2)),Convert::ToInt32(date_naiss->Substring(0, 2))));
		this->client->SetDate_pr_achat(DateTime(Convert::ToInt32(date_prachat->Substring(6, 4)), Convert::ToInt32(date_naiss->Substring(3, 2)), Convert::ToInt32(date_naiss->Substring(0, 2))));
	}
	void SVC_Gclient::ajouter(String^ nom, String^ prenom, DateTime^ date_naiss, DateTime^ date_pr_achat)
	{
		int id;
		this->client->set_nom(nom);
		this->client->set_prenom(prenom);
		this->client->SetDate_naiss(date_naiss);
		this->client->SetDate_pr_achat(date_pr_achat);
		id = this->cad->actionRowsID(this->client->INSERT());
	}
	void SVC_Gclient::modifier(int id_client, String^ nom, String^ prenom, System::DateTime^ date_naiss, System::DateTime^ date_pr_achat)
	{
		this->client->set_id(id_client);
		this->client->set_nom(nom);
		this->client->set_prenom(prenom);
		this->client->SetDate_naiss(date_naiss);
		this->client->SetDate_pr_achat(date_pr_achat);
		this->cad->actionRows(this->client->UPDATE());
	}
	void SVC_Gclient::supprimer(int id_client)
	{
		this->client->set_id(id_client);
		this->cad->actionRows(this->client->DELETE());
	}
}