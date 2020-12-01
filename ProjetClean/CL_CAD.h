#pragma once
#pragma once
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;
//Classe d'accèes aux données
namespace Composants
{
	ref class CAD
	{
	private:
		String^ cnx; //chaine de caractère pour la connexion avec la base de données
		String^ rq_sql; //string qui va contenir la requete SQL 
		SqlConnection^ CNX;
		SqlCommand^ CMD;
		SqlDataAdapter^ DA; //remplir le DataSet et mettre à jour la base de données 
		DataSet^ DS; //prend en charge la création et la gestion des données 
		void setSQL(String^); //modifier la valeur de la requete SQL
	public:
		CL_CAD(void); //contructeur par défaut
		int actionRowsID(String^);
		void actionRows(String^);
		DataSet^ getRows(String^, String^);
	};
}



