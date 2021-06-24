/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alilin <alilin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 14:00:12 by alilin            #+#    #+#             */
/*   Updated: 2021/06/24 12:21:34 by alilin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(const std::string &name, const std::string &title):
	name(name), title(title)
{
	std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
	std::cout << this->name << ": My job here is done!" << std::endl;
	std::list<ASpell *>::iterator _begin = this->spell.begin();
	std::list<ASpell *>::iterator _end = this->spell.end();

	while (_begin != _end)
	{
		delete (*_begin);
		this->spell.erase(_begin);
		_begin++;
	}
}

const std::string &Warlock::getName() const
{
	return (this->name);
}

const std::string &Warlock::getTitle() const
{
	return (this->title);
}

void Warlock::setTitle(const std::string &title)
{
	this->title = title;
}

void Warlock::introduce() const
{
	std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *aspell)
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

void Warlock::forgetSpell(std::string spellName)
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

void Warlock::launchSpell(std::string spellName, ATarget &target)
{
	std::list<ASpell *>::iterator _begin = this->spell.begin();
	std::list<ASpell *>::iterator _end = this->spell.end();

	while (_begin != _end)
	{
		if ((*_begin)->getName() == spellName)
		{
			(*_begin)->launch(target);
			return ;
		}
		_begin++;
	}
	return ;
}
