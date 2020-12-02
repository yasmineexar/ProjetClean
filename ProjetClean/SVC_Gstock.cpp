#include "SVC_Gstock.h"

namespace Service
{
	SVC_Gstock::SVC_Gstock(void)
	{
		this->cad = gcnew Composant::CAD();
		this->article = gcnew Composant::Article();
	}
	DataTable^ SVC_Gstock::listestock()
	{
		this->dArticle = gcnew DataTable();
		this->dArticle = this->cad->getRows(this->article->SELECT());
		return this->dArticle;
	}
	void SVC_Gemploye::afficher(int i)
	{
		//ja
		this->personnel->set_id(i);
		DataTable^ aa = this->cad->getRows(personnel->SELECTbyid());
		this->personnel->set_id_adresse(Convert::ToInt32(aa->Rows[0]->ItemArray[5]));
		String^ date = Convert::ToString(aa->Rows[0]->ItemArray[3]);
		this->personnel->set_date_embauche(DateTime(Convert::ToInt32(date->Substring(0, 4)), Convert::ToInt32(date->Substring(4, 2)), Convert::ToInt32(date->Substring(6, 2))));
		this->personnel->set_nom(Convert::ToString(aa->Rows[0]->ItemArray[1]));
		this->personnel->set_prenom(Convert::ToString(aa->Rows[0]->ItemArray[2]));
		this->personnel->set_id_superieur(Convert::ToInt32(aa->Rows[0]->ItemArray[4]));
		adressesemploye();
	}
	void SVC_Gemploye::adressesemploye()
	{
		DataTable^ dd = gcnew DataTable();
		this->adresse->setIdAdresse(this->personnel->get_id_adresse());
		dd = this->cad->getRows(this->adresse->SELECT());
		this->adresse->setAdresse(Convert::ToString(dd->Rows[0]->ItemArray[1]));
		this->adresse->setIdVille(Convert::ToInt32(dd->Rows[0]->ItemArray[1]));
		this->ville->setIdVille(this->adresse->getIdVille());
		dd = this->cad->getRows(this->ville->SELECTbyid());
		this->ville->setNomVille(Convert::ToString(dd->Rows[0]->ItemArray[1]));
	}
	void SVC_Gemploye::ajouter(String^ nom, String^ prenom, System::DateTime^ date, int adresse, int ville, int superieur)
	{
		int id;
		this->personnel->set_nom(nom);
		this->personnel->set_prenom(prenom);
		this->personnel->set_date_embauche(date);
		this->personnel->set_id_superieur(superieur);
		this->personnel->set_id_adresse(adresse);
		id = this->cad->actionRowsID(this->personnel->INSERTwithsup());
	}
	void SVC_Gemploye::ajouter(String^ nom, String^ prenom, System::DateTime^ date, int adresse, int ville)
	{
		int id;
		this->personnel->set_nom(nom);
		this->personnel->set_prenom(prenom);
		this->personnel->set_date_embauche(date);
		this->personnel->set_id_adresse(adresse);
		id = this->cad->actionRowsID(this->personnel->INSERT());
	}
	void SVC_Gemploye::modifier(int id_personne, String^ nom, String^ prenom, System::DateTime^ date, int adresse, int ville, int superieur)
	{
		this->personnel->set_id(id_personne);
		this->personnel->set_nom(nom);
		this->personnel->set_prenom(prenom);
		this->personnel->set_date_embauche(date);
		this->personnel->set_id_adresse(adresse);
		this->personnel->set_id_superieur(superieur);
		this->cad->actionRows(this->personnel->UPDATEwithsup());
	}
	void SVC_Gemploye::modifier(int id_personne, String^ nom, String^ prenom, System::DateTime^ date, int adresse, int ville)
	{
		this->personnel->set_id(id_personne);
		this->personnel->set_nom(nom);
		this->personnel->set_prenom(prenom);
		this->personnel->set_date_embauche(date);
		this->personnel->set_id_adresse(adresse);
		this->cad->actionRows(this->personnel->UPDATE());
	}
	void SVC_Gemploye::supprimer(int idPersonne)
	{
		this->personnel->set_id(idPersonne);
		this->cad->actionRows(this->personnel->DELETE());
	}
}