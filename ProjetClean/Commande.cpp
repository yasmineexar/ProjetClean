#include "Commande.h"
namespace Composant {
	Commande::Commande() {

	}
	void Commande::set_id_commande(int a) {
		this->id_commande = a;
	}
	void Commande::set_id_client(int a) {
		this->id_client = a;
	}
	void Commande::set_id_adresse_livraison(int a) {
		this->id_adresse_livraison = a;
	}
	void Commande::set_id_adresse_facturation(int a) {
		this->id_adresse_facturation = a;
	}
	void Commande::set_date_emmision(System::DateTime^ a) {
		this->date_emission = a;
	}
	void Commande::set_date_livraison(System::DateTime^ a) {
		this->date_livraison = a;
	}
	void Commande::set_date_reglement_solde(System::DateTime^ a) {
		this->date_reglement_solde = a;
	}
	void Commande::set_ref(System::String^ a) {
		this->ref = a;
	}
	int Commande::get_id_commande() {
		return this->id_commande;
	}
	int Commande::get_id_client() {
		return this->id_client;
	}
	int Commande::get_id_adresse_livraison() {
		return id_adresse_livraison;
	}
	int Commande::get_adresse_facturation() {
		return id_adresse_facturation;
	}
	System::DateTime^ Commande::get_date_emission() {
		return date_emission;
	}
	System::DateTime^ Commande::get_date_livraison() {
		return date_livraison;
	}
	System::DateTime^ Commande::get_date_reglement_solde() {
		return date_reglement_solde;
	}
	System::String^ Commande::get_ref() {
		return ref;
	}
	System::String^ Commande::SELECT() {
		return "select id_commane,date_emission,reference,date_livraison,date_reglementsolde,id_client,id_adresse,id_adresse_facturation"+
			"from commande where id_comande = " + this->id_commande;
	}
	System::String^ Commande::UPDATE() {
		return "UPDATE commande " + "SET id_commande= '" + this->get_id_commande() + "', date_emission = '" + date_to_string(this->get_date_emission())
			+ "', reference = " + this->get_ref() + ", date_livraison = " + date_to_string(this->get_date_livraison()) + ", date_reglementsolde = " +
			date_to_string(this->get_date_reglement_solde()) +
			",id_client = " + this->get_id_client() + ",id_adresse = " + this->get_id_adresse_livraison() + ",id_adresse_facturation = " + this->get_adresse_facturation() + "WHERE(ID_commande = " + this->get_id_commande() + ");";
	}
	System::String^ Commande::DELETE() {
		return "DELETE FROM commande " +
			"WHERE(ID_commande = " + this->get_id_commande() + ");";
	}
	System::String^ Commande::INSERT() {
		return "insert into commande(id_commane,date_emission,reference,date_livraison,date_reglementsolde,id_client,id_adresse,id_adresse_facturation)" +
			"values(" + this->get_id_commande() + "," + date_to_string(this->get_date_emission()) + ",'" + this->get_ref() + "'," + date_to_string(this->get_date_livraison()) + "," +
			date_to_string(this->get_date_reglement_solde()) + "," + this->get_id_client() + "," + this->get_id_adresse_livraison() + "," + this->get_adresse_facturation() + ")";
	}
	System::String^ date_to_string(System::DateTime^ date) {
		return date->Year + "" + date->Month + "" + date->Day;
	}
}