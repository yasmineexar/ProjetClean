#pragma once
#include"CAD.h"
#include"Commande.h"
#include"Article.h"
#include"Choisir.h"
/*
Calculer le panier moyen (après remise)
Calculer le chiffre d’affaire sur un mois en particulier
Identifier les produits sous le seuil de réapprovisionnement 
Calculer le montant total des achats pour un client
Identifier les 10 articles les plus vendus
Identifierles10articleslesmoinsvendus
Calculer la valeur commerciale du stock
Calculer la valeur d’achat du stock
Simuler des variations de valeurs commerciales pour en déduire la valeur du stock
*/
namespace Service {
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Xml;
	using namespace System;
	ref class SVC_Gstatistique
	{
	private:
		Composant::CAD^ cad; //objet pour la connexion a notre base de données 
		Composant::Commande^ cmd;
		Composant::Article^ produit;
		Composant::Choisir^ artcmd;
	public:
		SVC_Gstatistique();
		float calcul_paniermoyen();
		float calcul_chiffreaffaire();
		DataTable^ produits_sous_seuilreap();
		float calcul_montantTotalAchat();
		DataTable^ articlesPlusVendus();
		DataTable^ articlesMoinsVendus();
		float calculValuerCommStock();
		float calculValeurAchatStock();
	};

}