#pragma once
using namespace System;
namespace Composant
{
	ref class Ville
	{
	private:
		int Id_Ville;
		String^ Nom_Ville;

	public:
		Ville(void);
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		void setIdVille(int);
		void setNomVille(String^);
		int getIdVille(void);
		String^ getNomVille(void);
	};
}