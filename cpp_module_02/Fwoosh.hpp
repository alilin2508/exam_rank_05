/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alilin <alilin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 15:30:40 by alilin            #+#    #+#             */
/*   Updated: 2021/06/23 16:17:17 by alilin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FWOOSH_HPP
# define FWOOSH_HPP
#include "ASpell.hpp"

class Fwoosh : public ASpell
{
public:

	Fwoosh();
	Fwoosh(const std::string &name, const std::string &effects);
	Fwoosh(const Fwoosh &other);
	Fwoosh &operator=(const Fwoosh &other);
	virtual ~Fwoosh();

	Fwoosh *clone() const;

private:

};

#endif
