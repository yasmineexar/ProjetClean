#pragma once
#include "Adresse.h"
#include "CAD.h"
#include "Client.h"
#include"Article.h"
namespace Service {
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Xml;
	using namespace System;
	ref class SVC_Gcommande {
	private:
		Composant::CAD^ cad;
		Composant::Client^ client;
		Composant::Article^ article;
		DataTable^ dCommande;

	public:
		SVC_Gcommande();
		DataTable^ Commande();
		void afficher(int);
		void ajouter(DateTime^,int,String^, DateTime ^, String^, DateTime^, DateTime^, int, int,int);
		void modifier(int, DateTime^, int, String^, DateTime^, String^, DateTime^, DateTime^, int, int, int);
		void supprimer(int);
	};
}

