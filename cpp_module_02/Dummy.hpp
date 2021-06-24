/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alilin <alilin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 15:39:57 by alilin            #+#    #+#             */
/*   Updated: 2021/06/23 16:17:15 by alilin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DUMMY_HPP
# define DUMMY_HPP
#include "ATarget.hpp"

class Dummy : public ATarget
{
public:

	Dummy();
	Dummy(const std::string &type);
	Dummy(const Dummy &other);
	Dummy &operator=(const Dummy &other);
	virtual ~Dummy();

	Dummy *clone() const;

private:

};

#endif
