//
// Created by Romain Neil on 28/03/2021.
//

#ifndef HTTP_COUNTER_COMPTEUR_H
#define HTTP_COUNTER_COMPTEUR_H

#include <string>

class Compteur {

	public:
		explicit Compteur(std::string  nom, int initialValue = 0, bool isSpecial = false);
		~Compteur() = default;

		[[nodiscard]] const std::string &getNom() const {
			return m_nom;
		}

		/**
		 * Get counter value
		 * @return the counter value
		 */
		[[nodiscard]] int getVal() const {
			return m_val;
		}

		void inc(int val = 1);
		void setVal(int newVal);

	private:

		std::string m_nom;
		bool m_isSpecial;
		int m_val = 0;

};


#endif //HTTP_COUNTER_COMPTEUR_H
