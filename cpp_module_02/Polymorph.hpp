/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alilin <alilin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 12:06:40 by alilin            #+#    #+#             */
/*   Updated: 2021/06/24 13:42:55 by alilin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POLYMORPH_HPP
# define POLYMORPH_HPP
#include "ASpell.hpp"

class Polymorph : public ASpell
{
public:

	Polymorph();
	Polymorph(const std::string &name, const std::string &effects);
	Polymorph(const Polymorph &other);
	Polymorph &operator=(const Polymorph &other);
	virtual ~Polymorph();

	Polymorph *clone() const;

private:

};

#endif
