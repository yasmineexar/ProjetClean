#pragma once
using namespace System;
namespace Composant
{
	ref class Adresse
	{
	private:
		int ID_Adresse;
		String^ adresse;
		int Id_Ville;

	public:
		Adresse(void);
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		void setIdAdresse(int);
		void setAdresse(String^);
		void setIdVille(int);
		int getIdAdresse(void);
		String^ getAdresse(void);
		int getIdVille(void);
	protected:
		~Adresse() {
			delete adresse;
			delete this;
		}

	};
}
