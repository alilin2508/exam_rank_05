/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alilin <alilin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 14:25:53 by alilin            #+#    #+#             */
/*   Updated: 2021/06/23 16:15:03 by alilin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget():
	type()
{
}

ATarget::ATarget(const std::string &type):
	type(type)
{
}

ATarget::ATarget(const ATarget &other)
{
	this->type = other.type;
}
ATarget &ATarget::operator=(const ATarget &other)
{
	this->type = other.type;
	return (*this);
}

ATarget::~ATarget()
{
}

std::string ATarget::getType() const
{
	return (this->type);
}

void ATarget::getHitBySpell(const ASpell &spell) const
{
	std::cout << this->type <<  " has been " << spell.getEffects() << "!" << std::endl;
}
