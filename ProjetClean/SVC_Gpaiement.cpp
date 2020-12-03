#include "SVC_Gpaiement.h"
namespace Service {
	SVC_Gpaiement::SVC_Gpaiement()
	{
		this->cad = gcnew Composant::CAD();
		this->paiement = gcnew Composant::Paiement();
	}
	DataTable^ SVC_Gpaiement::Paiement()
	{
		this->dt = gcnew DataTable();
		this->dt = this->cad->getRows(this->paiement->SELECT());
		return this->dt;
	}
	void SVC_Gpaiement::afficher(int)
	{
		throw gcnew System::NotImplementedException();
	}
	void SVC_Gpaiement::ajouter(int ID_Paiement, DateTime^ Date_Paiement, DateTime^ Date_ReglementSolde, String^ Moyen_Paiement, float Montant_Total_HT, float Montant_Total_TVA, int ID_Client, int ID_Commande)
	{
		throw gcnew System::NotImplementedException();
	}
	void SVC_Gpaiement::modifier(int ID_Paiement, DateTime^ Date_Paiement, DateTime^ Date_ReglementSolde, String^ Moyen_Paiement, float Montant_Total_HT, float Montant_Total_TVA, int ID_Client, int ID_Commande)
	{
		throw gcnew System::NotImplementedException();
	}
	void SVC_Gpaiement::supprimer(int)
	{
		throw gcnew System::NotImplementedException();
	}
}