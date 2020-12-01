#pragma once
namespace Composant {
	using namespace System;
	ref class Personne  //classe mère
	{
		protected:
			String^ nom,^prenom;
			int id;
		public:
			Personne();
			void set_nom(String^ nom);
			void set_prenom(String^ prenom);
			String^ get_nom();
			String^ get_prenom();
			void set_id(int id);
			int get_id();
			virtual String^ SELECT(void);
			virtual String^ INSERT(void);
			virtual String^ UPDATE(void);
			virtual String^ DELETE(void);
		protected:
			~Personne() {
				delete nom, prenom;
				delete this;
			}

	};
}

