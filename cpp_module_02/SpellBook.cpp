/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alilin <alilin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 12:17:16 by alilin            #+#    #+#             */
/*   Updated: 2021/06/24 13:45:59 by alilin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

SpellBook::SpellBook()
{
}

SpellBook::~SpellBook()
{
	std::list<ASpell *>::iterator _begin = this->spell.begin();
	std::list<ASpell *>::iterator _end = this->spell.end();

	while (_begin != _end)
	{
		delete (*_begin);
		this->spell.erase(_begin);
		_begin++;
	}
}

void SpellBook::learnSpell(ASpell *aspell)
{
	std::list<ASpell *>::iterator _begin = this->spell.begin();
	std::list<ASpell *>::iterator _end = this->spell.end();

	if (aspell)
	{
		while (_begin != _end)
		{
			if ((*_begin)->getName() == aspell->getName())
				return ;
			_begin++;
		}
		this->spell.push_back(aspell->clone());
	}
	return ;
}

void SpellBook::forgetSpell(std::string const &spellName)
{
	std::list<ASpell *>::iterator _begin = this->spell.begin();
	std::list<ASpell *>::iterator _end = this->spell.end();

	while (_begin != _end)
	{
		if ((*_begin)->getName() == spellName)
		{
			delete (*_begin);
			this->spell.erase(_begin);
			return ;
		}
		_begin++;
	}
	return ;
}

ASpell *SpellBook::createSpell(std::string const &spellName)
{
	std::list<ASpell *>::iterator _begin = this->spell.begin();
	std::list<ASpell *>::iterator _end = this->spell.end();

	while (_begin != _end)
	{
		if ((*_begin)->getName() == spellName)
		{
			return ((*_begin)->clone());
		}
		_begin++;
	}
	return (NULL);
}
