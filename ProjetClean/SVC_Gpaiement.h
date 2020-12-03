#pragma once
#include"CAD.h"
#include"Paiement.h"
#include"Client.h"
#include"Commande.h"
namespace Service {
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Xml;
	using namespace System;
	ref class SVC_Gpaiement {
	private:
		Composant::CAD^ cad;
		Composant::Paiement^ paiement;
		DataTable^ dPaiement;

	public:
		SVC_Gpaiement();
		DataTable^ Paiement();
		void afficher(int);
		void ajouter(DateTime^, DateTime^, String^, float, float, int, int);
		void modifier(int, DateTime^, DateTime^, String^, float, float, int, int);
		void supprimer(int);
	};
}
