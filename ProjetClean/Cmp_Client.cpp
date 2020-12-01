#include "Cmp_Client.h"

Composant::Cmp_Client::Cmp_Client()
{
    this->id = 0;
    this->nom = "";
    this->prenom = "";
    this->date_naiss = System::DateTime::MaxValue;
    this->date_pr_achat = System::DateTime::MaxValue;
}

void Composant::Cmp_Client::SetDate_naiss(System::DateTime date_naiss)
{
    this->date_naiss = date_naiss;
}

System::DateTime Composant::Cmp_Client::GetDate_naiss(void)
{
    return this->date_naiss;
}

void Composant::Cmp_Client::SetDate_pr_achat(System::DateTime date_pr_achat)
{
    this->date_pr_achat = date_pr_achat;
}

System::DateTime Composant::Cmp_Client::GetDate_pr_achat(System::DateTime)
{
    return System::DateTime();
}

String^ Composant::Cmp_Client::SELECT(void)
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici
}
