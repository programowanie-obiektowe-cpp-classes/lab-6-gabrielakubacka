#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > retval(people.size());

    std::for_each(people.begin(), people.end(), [](Human& h){ h.birthday(); });

    std::transform(people.begin(), people.end(), retval.rbegin(), [](Human& h){
        return h.isMonster() ? 'n' : 'y';
    });
    return retval;
}
