/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alilin <alilin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 12:07:45 by alilin            #+#    #+#             */
/*   Updated: 2021/06/24 12:08:11 by alilin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorph.hpp"

Polymorph::Polymorph():
	ASpell("Polymorph", "turned into a critter")
{
}

Polymorph::Polymorph(const Polymorph &other)
{
	this->name = other.name;
	this->effects = other.effects;
}
Polymorph &Polymorph::operator=(const Polymorph &other)
{
	this->name = other.name;
	this->effects = other.effects;
	return (*this);
}

Polymorph::~Polymorph()
{
}

Polymorph *Polymorph::clone() const
{
	return (new Polymorph(*this));
}
