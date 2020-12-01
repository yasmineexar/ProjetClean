#pragma once
using namespace System;
namespace Composant
{
	ref class Paiement
	{
	private:
		int ID_Paiement;
		DateTime^ Date_Paiement;
		DateTime^ Date_ReglementSolde;
		String^ Moyen_Paiement;
		float Montant_Total_HT;
		float Montant_Total_TVA;
		int ID_Client;
		int ID_Commande;

	public:
		Paiement(void);
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		void setIdPaiement(int);
		void setDatePaiement(DateTime^);
		void setDate_ReglementSolde(DateTime^);
		void setMoyenPaiement(String^);
		void setMontantTotalHT(float);
		void setMontantTotalTVA(float);
		void setIdClient(int);
		void setIdCommande(int);
		int getIdPaiement(void);
		DateTime^ getDatePaiement(void);
		DateTime^ getDateReglementSolde(void);
		String^ getMoyenPaiement(void);
		float getMontantTotalHT(void);
		float getMontantTotalTVA(void);
		int getIdClient(void);
		int getIdCommande(void);
		~Paiement();
	};
}
