/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alilin <alilin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 12:05:56 by alilin            #+#    #+#             */
/*   Updated: 2021/06/24 12:06:22 by alilin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fireball.hpp"

Fireball::Fireball():
	ASpell("Fireball", "burnt to a crisp")
{
}

Fireball::Fireball(const Fireball &other)
{
	this->name = other.name;
	this->effects = other.effects;
}
Fireball &Fireball::operator=(const Fireball &other)
{
	this->name = other.name;
	this->effects = other.effects;
	return (*this);
}

Fireball::~Fireball()
{
}

Fireball *Fireball::clone() const
{
	return (new Fireball(*this));
}
