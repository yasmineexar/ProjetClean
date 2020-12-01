#pragma once
namespace Composant {
	ref class Commande
	{
		private:
			int id_commande, id_client, id_adresse_livraison, id_adresse_facturation;
			System::DateTime^ date_emission, ^ date_livraison, ^ date_reglement_solde;
			System::String^ ref;
		public:
			Commande();
			void set_id_commande(int);
			void set_id_client(int);
			void set_id_adresse_livraison(int);
			void set_id_adresse_facturation(int);
			void set_date_emmision(System::DateTime^);
			void set_date_livraison(System::DateTime^);
			void set_date_reglement_solde(System::DateTime^);
			void set_ref(System::String^);
			int get_id_commande();
			int get_id_client();
			int get_id_adresse_livraison();
			int get_adresse_facturation();
			System::DateTime^ get_date_emission();
			System::DateTime^ get_date_livraison();
			System::DateTime^ get_date_reglement_solde();
			System::String^ get_ref();
			System::String^ SELECT();
			System::String^ UPDATE();
			System::String^ DELETE();
			System::String^ INSERT();
		protected:
			~Commande() {
				delete date_emission, date_livraison, date_reglement_solde;
				delete ref;
				delete this;
			}
	};
}

