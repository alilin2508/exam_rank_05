/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alilin <alilin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 14:00:12 by alilin            #+#    #+#             */
/*   Updated: 2021/06/24 13:53:17 by alilin           ###   ########.fr       */
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
	book.learnSpell(aspell);
}

void Warlock::forgetSpell(std::string spellName)
{
	book.forgetSpell(spellName);
}

void Warlock::launchSpell(std::string spellName, ATarget &target)
{
	ASpell *spell;

	spell = book.createSpell(spellName);
	if (spell != NULL)
	{
		spell->launch(target);
		return ;
	}
	return ;
}
