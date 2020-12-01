#include "Personnel.h"
namespace Composant {
    Composant::Personnel::Personnel()
    {
    }

    String^ Composant::Personnel::SELECT()
    {
        
    }

    String^ Composant::Personnel::INSERT()
    {
        throw gcnew System::NotImplementedException();
        // TODO: insérer une instruction return ici
    }

    String^ Composant::Personnel::UPDATE()
    {
        throw gcnew System::NotImplementedException();
        // TODO: insérer une instruction return ici
    }

    String^ Composant::Personnel::DELETE()
    {
        throw gcnew System::NotImplementedException();
        // TODO: insérer une instruction return ici
    }

    void Composant::Personnel::set_date_embauche(DateTime^ date)
    {
        throw gcnew System::NotImplementedException();
    }

    DateTime^ Composant::Personnel::get_date_embauche()
    {
        throw gcnew System::NotImplementedException();
        // TODO: insérer une instruction return ici
    }

    int Composant::Personnel::get_id_superieur()
    {
        return 0;
    }

    int Composant::Personnel::id_adresse()
    {
        return 0;
    }

    void Composant::Personnel::set_id_superieur(int id)
    {
        throw gcnew System::NotImplementedException();
    }

    void Composant::Personnel::set_id_adresse(int id)
    {
        throw gcnew System::NotImplementedException();
    }
}