/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alilin <alilin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 12:08:37 by alilin            #+#    #+#             */
/*   Updated: 2021/06/24 12:09:14 by alilin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP
#include "ATarget.hpp"

class BrickWall : public ATarget
{
public:

	BrickWall();
	BrickWall(const std::string &type);
	BrickWall(const BrickWall &other);
	BrickWall &operator=(const BrickWall &other);
	virtual ~BrickWall();

	BrickWall *clone() const;

private:

};

#endif
