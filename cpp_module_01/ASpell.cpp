/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alilin <alilin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 14:33:04 by alilin            #+#    #+#             */
/*   Updated: 2021/06/23 16:13:41 by alilin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

ASpell::ASpell():
	name(), effects()
{
}

ASpell::ASpell(const std::string &name, const std::string &effects):
	name(name), effects(effects)
{
}

ASpell::ASpell(const ASpell &other)
{
	this->name = other.name;
	this->effects = other.effects;
}
ASpell &ASpell::operator=(const ASpell &other)
{
	this->name = other.name;
	this->effects = other.effects;
	return (*this);
}

ASpell::~ASpell()
{
}

std::string ASpell::getName() const
{
	return (this->name);
}

std::string ASpell::getEffects() const
{
	return (this->effects);
}

void ASpell::launch(const ATarget &target) const
{
	target.getHitBySpell(*this);
}
