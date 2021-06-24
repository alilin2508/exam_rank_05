/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alilin <alilin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 15:33:08 by alilin            #+#    #+#             */
/*   Updated: 2021/06/23 15:39:48 by alilin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"

Fwoosh::Fwoosh():
	ASpell("Fwoosh", "fwooshed")
{
}

Fwoosh::Fwoosh(const Fwoosh &other)
{
	this->name = other.name;
	this->effects = other.effects;
}
Fwoosh &Fwoosh::operator=(const Fwoosh &other)
{
	this->name = other.name;
	this->effects = other.effects;
	return (*this);
}

Fwoosh::~Fwoosh()
{
}

Fwoosh *Fwoosh::clone() const
{
	return (new Fwoosh(*this));
}
