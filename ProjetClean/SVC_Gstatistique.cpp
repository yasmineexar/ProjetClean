#include "SVC_Gstatistique.h"
namespace Service {
    SVC_Gstatistique::SVC_Gstatistique()
    {
        this->cad = gcnew Composant::CAD;
        this->cmd = gcnew Composant::Commande();
        this->produit = gcnew Composant::Article();
        this->artcmd = gcnew Composant::Choisir();
    }
    float SVC_Gstatistique::calcul_chiffreaffaire() //mensuel
    {
        return 0.0f;
    }
    float SVC_Gstatistique::calcul_paniermoyen()
    {
        return 0.0f;
    }
    DataTable^ SVC_Gstatistique::produits_sous_seuilreap()
    {
        throw gcnew System::NotImplementedException();
        // TODO: insérer une instruction return ici
    }
    float SVC_Gstatistique::calcul_montantTotalAchat()
    {
        return 0.0f;
    }
    DataTable^ SVC_Gstatistique::articlesPlusVendus()
    {
        throw gcnew System::NotImplementedException();
        // TODO: insérer une instruction return ici
    }
    DataTable^ SVC_Gstatistique::articlesMoinsVendus()
    {
        throw gcnew System::NotImplementedException();
        // TODO: insérer une instruction return ici
    }
    float SVC_Gstatistique::calculValuerCommStock()
    {
        return 0.0f;
    }
    float SVC_Gstatistique::calculValeurAchatStock()
    {
        return 0.0f;
    }
}