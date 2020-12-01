#pragma once
#include "CAD.h"
#include "Personne.h"
#include "Adresse.h"
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;
namespace Composant
{
	ref class SVC_Gemploye
	{
	private:
		Composant::CAD^ cad;
		Composant::Personne^ personne;
	    Composant::Adresse^ adresse;
		DataSet^ ds;
	public:
		SVC_Gemploye(void);
		DataSet^ listePersonne(String^);
		DataSet^ adressesPersonne(int, String^);
		void ajouter(String^, String^, array<String^>^);
		void modifier(int, String^, String^, array<String^>^);
		void supprimer(int);
	};
}
