/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alilin <alilin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 12:11:09 by alilin            #+#    #+#             */
/*   Updated: 2021/06/24 13:42:44 by alilin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP
#include "ASpell.hpp"
#include <string>
#include <iostream>
#include <list>

class ASpell;

class SpellBook
{
public:

	SpellBook();
	SpellBook(const std::string &name, const std::string &effects);
	virtual ~SpellBook();

	void learnSpell(ASpell *aspell);
	void forgetSpell(std::string const &spellName);
	ASpell *createSpell(std::string const &spellName);

protected:

	SpellBook(const SpellBook &other);
	SpellBook &operator=(const SpellBook &other);
	std::list<ASpell *> spell;
};

#endif
