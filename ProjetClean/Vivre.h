#pragma once
using namespace System;
namespace Composant
{
	ref class Vivre
	{
		private:
			int Id_Adresse;
			int Id_Client;
	

		public:
			Vivre(void);
			String^ SELECT(void);
			String^ INSERT(void);
			String^ UPDATE(void);
			String^ DELETE(void);
			void setIdAdresse(int);
			void setIdClient(int);
			int getIdAdresse(void);
			int getIdClient(void);
		protected:
			~Vivre() {
				delete this;
			}
	};
}
