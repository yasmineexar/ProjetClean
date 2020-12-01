#pragma once
namespace Composant {
	ref class Commande
	{
		private:
			int id_commande, quantite_article, id_client, id_adresse_livraison, id_adresse_facturation;
			System::DateTime^ date_emission, ^ date_livraison, ^ date_reglement_solde;
			System::String^ ref;
		public:
	};
}

