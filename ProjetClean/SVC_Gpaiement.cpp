#include "SVC_Gpaiement.h"
namespace Service {
	SVC_Gpaiement::SVC_Gpaiement()
	{
		this->cad = gcnew Composant::CAD();
		this->paiement = gcnew Composant::Paiement();
	}
	DataTable^ SVC_Gpaiement::Paiement()
	{
		this->dPaiement = gcnew DataTable();
		this->dPaiement = this->cad->getRows(this->paiement->SELECT());
		return this->dPaiement;
	}
	void SVC_Gpaiement::afficher(int id)
	{
		this->paiement->setIdPaiement(id);
		this->paiement->setIdPaiement(Convert::ToInt32(dPaiement->Rows[0]->ItemArray[1]));
		DataTable^ dp = this->cad->getRows(paiement->SELECTbyID());
		String^ Date_Paiement = Convert::ToString(dp->Rows[0]->ItemArray[2]);
		String^ Date_RegSolde = Convert::ToString(dp->Rows[0]->ItemArray[3]);
		this->paiement->setDatePaiement(DateTime(Convert::ToInt32(Date_Paiement->Substring(6, 4)), Convert::ToInt32(Date_Paiement->Substring(3, 2)), Convert::ToInt32(Date_Paiement->Substring(0, 2))));
		this->paiement->setDate_ReglementSolde(DateTime(Convert::ToInt32(Date_RegSolde->Substring(6, 4)), Convert::ToInt32(Date_RegSolde->Substring(3, 2)), Convert::ToInt32(Date_RegSolde->Substring(0, 2))));
		this->paiement->setMoyenPaiement(Convert::ToString(dp->Rows[0]->ItemArray[4]));
		this->paiement->setMontantTotalHT(Convert::ToInt32(dp->Rows[0]->ItemArray[5]));
		this->paiement->setMontantTotalTVA(Convert::ToInt32(dp->Rows[0]->ItemArray[6]));
		this->paiement->setIdClient(Convert::ToInt32(dp->Rows[0]->ItemArray[7]));
		this->paiement->setIdCommande(Convert::ToInt32(dp->Rows[0]->ItemArray[8]));

	}
	void SVC_Gpaiement::ajouter(DateTime^ Date_Paiement, DateTime^ Date_ReglementSolde, String^ Moyen_Paiement, float Montant_Total_HT, float Montant_Total_TVA, int ID_Client, int ID_Commande)
	{
		int id;
		this->paiement->setDatePaiement(Date_Paiement);
		this->paiement->setDate_ReglementSolde(Date_ReglementSolde);
		this->paiement->setMoyenPaiement(Moyen_Paiement);
		this->paiement->setMontantTotalHT(Montant_Total_HT);
		this->paiement->setMontantTotalTVA(Montant_Total_TVA);
		this->paiement->setIdClient(ID_Client);
		this->paiement->setIdCommande(ID_Commande);
		id = this->cad->actionRowsID(this->paiement->INSERT());
	}
	void SVC_Gpaiement::modifier(int ID_Paiement, DateTime^ Date_Paiement, DateTime^ Date_ReglementSolde, String^ Moyen_Paiement, float Montant_Total_HT, float Montant_Total_TVA, int ID_Client, int ID_Commande)
	{
		this->paiement->setIdPaiement(ID_Paiement);
		this->paiement->setDatePaiement(Date_Paiement);
		this->paiement->setDate_ReglementSolde(Date_ReglementSolde);
		this->paiement->setMoyenPaiement(Moyen_Paiement);
		this->paiement->setMontantTotalHT(Montant_Total_HT);
		this->paiement->setMontantTotalTVA(Montant_Total_TVA);
		this->paiement->setIdClient(ID_Client);
		this->paiement->setIdCommande(ID_Commande);
		this->cad->actionRows(this->paiement->UPDATE());
	}
	void SVC_Gpaiement::supprimer(int ID_Paiement)
	{
		this->paiement->setIdPaiement(ID_Paiement);
		this->cad->actionRows(this->paiement->DELETE());
	}
}