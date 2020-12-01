#pragma once
using namespace System::Data::Sql;
using namespace System;
namespace Composant
{
	ref class Article
	{
	private:
		int ID_article;
		String^ Reference_Article;
		String^ Designation;
		float Prix_HT;
		float Taux_TVA;
		int Quantite_en_Stock;
		int Seuil_de_reapprovisionnement;
		String^ Couleur;
	public:
		Article();
		void SetID_article(int);
		int getID_article(void);
		void SetReference_article(String^);
		String^ getReference_article(void);
		void SetDesignation(String^);
		String^ getDesignation(void);
		void setPrix_HT(float);
		float getPrix_HT(void);
		void setTaux_TVA(float);
		float getTaux_TVA(void);
		void setQuantite_en_Stock(int);
		int getQuantite_en_Stock(void);
		void setSeuil_de_reapprovisionnement(int);
		int setQuantite_en_Stock(void);
	};
}