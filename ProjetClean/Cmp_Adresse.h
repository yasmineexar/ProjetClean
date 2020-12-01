//CL_mapp_TBADRESSE.h
#pragma once
using namespace System;
namespace Composants
{
	ref class Cmp_Adresse
	{
	private:
		int ID_Adresse;
		String^ adresse;
		String^ Id_Ville;

	public:
		Cmp_Adresse(void);
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		void setIdAdresse(int);
		void setAdresse(String^);
		void setIdVille(String^);
		int getIdAdresse(void);
		String^ getAdresse(void);
		String^ getIdVille(void);

	};
}
