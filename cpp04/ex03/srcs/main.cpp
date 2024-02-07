/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:13:48 by mfeldman          #+#    #+#             */
/*   Updated: 2024/02/07 13:33:04 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main()
{
    /* Create a MateriaSource and learn Ice and Cure */
    IMateriaSource *src = new MateriaSource();
    src->learn_materia(new Ice());
    src->learn_materia(new Cure());

    /* Create a character named Goku */
    ICharacter *goku = new Character("Goku");

    /* Create Ice and Cure Materias, and equip them to the character */
    AMateria *tmp = src->create_materia("ice");
    goku->equip(tmp);
    goku->equip(src->create_materia("ice"));
    goku->equip(src->create_materia("cure"));
    goku->equip(src->create_materia("cure"));

    /* A fifth materia cannot be equipped */
    AMateria *ice = src->create_materia("ice");
    goku->equip(ice);
    delete (ice);

    /* Use the 4 spells of "Goku" on "Frieza" */
    ICharacter* frieza = new Character("Frieza");
    goku->use(0, *frieza);
    goku->use(1, *frieza);
    goku->use(2, *frieza);
    goku->use(3, *frieza);

    /* Try to use a spell not present in the character's inventory */
    goku->use(5, *frieza);

    /* Drop a spell on the ground */
    goku->unequip(0);

    /* Attempt to use a non-existent spell */
    goku->use(0, *frieza);

    /* Equip a spell and use it */
    goku->equip(src->create_materia("cure"));
    goku->use(0, *frieza);

    delete (tmp);
    delete (frieza);
    delete (goku);
    delete (src);

    return (0);
}
