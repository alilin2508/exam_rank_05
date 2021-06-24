/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alilin <alilin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 12:09:27 by alilin            #+#    #+#             */
/*   Updated: 2021/06/24 12:09:54 by alilin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BrickWall.hpp"

BrickWall::BrickWall():
	ATarget("Inconspicuous Red-brick Wall")
{
}

BrickWall::BrickWall(const BrickWall &other)
{
	this->type = other.type;
}
BrickWall &BrickWall::operator=(const BrickWall &other)
{
	this->type = other.type;
	return (*this);
}

BrickWall::~BrickWall()
{
}

BrickWall *BrickWall::clone() const
{
	return (new BrickWall(*this));
}
