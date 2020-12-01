#pragma once
#include"Personne.h"
namespace Composant {
	ref class Cmp_Client :public Personne //client hérite de Personne
	{
	private:
		System::DateTime^ date_naiss;
		System::DateTime^ date_pr_achat;
	public:
		Cmp_Client();//constructeur par défaut
		//accesseurs
		void SetDate_naiss(System::DateTime^);
		System::DateTime^ GetDate_naiss(void);
		void SetDate_pr_achat(System::DateTime^);
		System::DateTime^ GetDate_pr_achat();
		//methodes mappage table client
		String^ SELECT(void) override;
		String^ INSERT(void) override;
		String^ UPDATE(void) override;
		String^ DELETE(void) override;
	};
}

