#pragma once
#include "Personne.h"
namespace Composant {
	
	ref class Personnel : public Personne
	{
		private:
			DateTime^ date_dembauche;
			int id_superieur;
			int id_adresse;
		public:
			Personnel();
			String^ SELECT() override;
			String^ INSERT() override;
			String^ UPDATE() override;
			String^ DELETE() override;
			void set_date_embauche(DateTime^ date);
			DateTime^ get_date_embauche();
			int get_id_superieur();
			int get_id_adresse();
			void set_id_superieur(int id);
			void set_id_adresse(int id);
	};
}

