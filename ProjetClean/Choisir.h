#pragma once
using namespace System;
namespace Composant
{
	ref class Choisir
	{
	private:
		int Id_Article;
		int Id_Commande;
		int Quantité_Article;
		float Remise;

	public:
		Choisir(void);
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		void setIdArticle(int);
		void setIdCommande(int);
		void setQuantiteAricle(int);
		void setRemise(float);
		int getIdArticle(void);
		int getIdCommande(void);
		int getQuantiteArticle(void);
		int getRemise(void);
	};
}