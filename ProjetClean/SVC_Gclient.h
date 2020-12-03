#pragma once
#include"CAD.h"
#include"Client.h"
#include"Adresse.h"
#include"Ville.h"

namespace Service {
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Xml;
	using namespace System;
	ref class SVC_Gclient
	{
	private:
		Composants::CAD^ cad;
		Composant::Client^ client;
		array<Composant::Adresse^>^ adrclient;
		array<Composant::Ville^>^ ville;
		DataTable^ dt;
		
	public:
		SVC_Gclient();
		DataTable^ listeclients();
		DataTable^ adressesClient(int);
		void afficher(int);
		void ajouter(String^, String^, DateTime^, DateTime^);
		void modifier(int, String^, String^, DateTime^, DateTime^);
		void supprimer(int);
	};
}
