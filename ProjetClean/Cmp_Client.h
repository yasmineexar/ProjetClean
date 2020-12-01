#pragma once
#include"Personne.h"
namespace Composant {
	using namespace System;
	ref class Cmp_Client :public Personne //client hérite de Personne
	{
	private:
		System::DateTime date_naiss;
		System::DateTime date_pr_achat;
	public:
		Cmp_Client();//constructeur par défaut
		//accesseurs
		void SetDate_naiss(System::DateTime);
		System::DateTime GetDate_naiss(void);
		void SetDate_pr_achat(System::DateTime);
		System::DateTime GetDate_pr_achat(System::DateTime);
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
	};
}

