/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alilin <alilin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 14:35:39 by alilin            #+#    #+#             */
/*   Updated: 2021/06/23 14:41:49 by alilin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_HPP
# define ATARGET_HPP
#include "ASpell.hpp"

class ASpell;

class ATarget
{
public:

	ATarget();
	ATarget(const std::string &type);
	ATarget(const ATarget &other);
	ATarget &operator=(const ATarget &other);
	virtual ~ATarget();

	std::string getType() const;
	virtual ATarget *clone() const = 0;
	void getHitBySpell(const ASpell &spell);

private:

	std::string type;
};

#endif
