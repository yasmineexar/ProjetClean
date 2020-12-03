#pragma once
using namespace System;
namespace Composant
{
	ref class Ligne_Commande
	{
	private:
		int Id_Article;
		int Id_Commande;
		int Quantité_Article;
		float Remise;

	public:
		Ligne_Commande(void);
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
	protected:
		~Ligne_Commande();
	};
}