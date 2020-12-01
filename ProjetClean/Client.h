#pragma once
#include"Personne.h"
namespace Composant {
	ref class Client :public Personne //client h�rite de Personne
	{
	private:
		System::DateTime^ date_naiss;
		System::DateTime^ date_pr_achat;
	public:
		Client();//constructeur par d�faut
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
		//destructeur 
		~Client();
	};
}

