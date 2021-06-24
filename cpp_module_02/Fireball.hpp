/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alilin <alilin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 12:04:52 by alilin            #+#    #+#             */
/*   Updated: 2021/06/24 12:05:45 by alilin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIREBALL_HPP
# define FIREBALL_HPP
#include "ASpell.hpp"

class Fireball : public ASpell
{
public:

	Fireball();
	Fireball(const std::string &name, const std::string &effects);
	Fireball(const Fireball &other);
	Fireball &operator=(const Fireball &other);
	virtual ~Fireball();

	Fireball *clone() const;

private:

};

#endif
