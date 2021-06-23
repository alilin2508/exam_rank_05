/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alilin <alilin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 14:33:04 by alilin            #+#    #+#             */
/*   Updated: 2021/06/23 14:42:53 by alilin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

ASpell::ASpell():
	name(NULL), effects(NULL)
{
}

ASprll::ASpell(const std::string &name, const std::string &effects):
	name(name), effects(effects)
{
}

ASpell::ASpell(const ASpell &other)
{
	this->name = other.name;
	this->effects = other.effects;
}
Aspell &ASpell::operator=(const ASpell &other)
{
	this->name = other.name;
	this->effects = other.effects;
	return (*this);
}

ASpell::~ASpell()
{
}

std::string getName() const
{
	return (this->name);
}

std::string getEffects() const
{
	return (this->effects);
}
