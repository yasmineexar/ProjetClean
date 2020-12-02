#pragma once
#include"CAD.h"
#include"Article.h"
namespace Service {
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;
ref class SVC_Gstock
{
private:
	Composant::CAD^ cad;
	Composant:: Article^ article;
	DataTable^ dArticle;
public:
	SVC_Gstock();
	DataTable^ listestock();
	void afficher(int);
	void ajouter(String^, String^, DateTime^, DateTime);
	void modifier(int, String^, String^, DateTime^, DateTime);
	void supprimer(int);
}​​;
}​​

