#include "SVC_Gstock.h"
#include"Article.h"

namespace Service
{
	SVC_Gstock::SVC_Gstock(void)
	{
		this->cad = gcnew Composant::CAD();
		this->article = gcnew Composant::Article();
	}
	DataTable^ SVC_Gstock::listestock()
	{
		this->dt = this->cad->getRows(this->article->SELECT());
		return dt;
	}
	void SVC_Gstock::afficher(int i)
	{
		this->article->SetID_article(i);
		DataTable^ dArticle = this->cad->getRows(article->SELECTbyID());
		//this->article->SetID_article(Convert::ToInt32(dArticle->Rows[0]->ItemArray[1]));
		this->article->SetReference_article(Convert::ToString(dArticle->Rows[0]->ItemArray[1]));
		this->article->SetDesignation(Convert::ToString(dArticle->Rows[0]->ItemArray[2]));
		this->article->setPrix_HT(Convert::ToInt32(dArticle->Rows[0]->ItemArray[3]));
		this->article->setTaux_TVA(Convert::ToInt32(dArticle->Rows[0]->ItemArray[4]));
		this->article->setQuantite_en_Stock(Convert::ToInt32(dArticle->Rows[0]->ItemArray[5]));
		this->article->setSeuil_de_reapprovisionnement(Convert::ToInt32(dArticle->Rows[0]->ItemArray[6]));
		this->article->SetCouleur(Convert::ToString(dArticle->Rows[0]->ItemArray[7]));
	}
	
	void SVC_Gstock::ajouter(String^ Reference_Article, String^ Designation, float Prix_HT, float Taux_TVA, int Quantite_en_Stock,int Seuil, String^ Couleur)
	{
		this->article->SetReference_article(Reference_Article);
		this->article->SetDesignation(Designation);
		this->article->setPrix_HT(Prix_HT);
		this->article->setTaux_TVA(Taux_TVA);
		this->article->setQuantite_en_Stock(Quantite_en_Stock);
		this->article->setSeuil_de_reapprovisionnement(Seuil);
		this->article->SetCouleur(Couleur);
		this->article->SetID_article(this->cad->actionRowsID(this->article->INSERT()));
	}
	
	void SVC_Gstock::modifier(int ID_Article, String^ Reference_Article, String^ Designation, float Prix_HT, float Taux_TVA, int Quantite_en_Stock, int Seuil, String^ Couleur)
	{
		this->article->SetID_article(ID_Article);
		this->article->SetReference_article(Reference_Article);
		this->article->SetDesignation(Designation);
		this->article->setPrix_HT(Prix_HT);
		this->article->setTaux_TVA(Taux_TVA);
		this->article->setQuantite_en_Stock(Quantite_en_Stock);
		this->article->setSeuil_de_reapprovisionnement(Seuil);
		this->article->SetCouleur(Couleur);
		this->cad->actionRows(this->article->UPDATE());
	}
	void SVC_Gstock::supprimer(int ID_Article)
	{
		this->article->SetID_article(ID_Article);
		this->cad->actionRows(this->article->DELETE());
	}
}