#ifndef GRAAL_H
#define GRAAL_H

#include <utility>
using std::pair;
#include <iterator>
using std::distance;
#include <algorithm>
using std::sort;

namespace graal {

/*! 
 * TODO: documentação no estilo doxygen
 */
template<class InputIt, class UnaryPredicate>
bool all_of(InputIt first, InputIt last, UnaryPredicate p)
{
    int teste = 0;
    for (InputIt i = first; i != last; i++)
    {
        teste = 1;
        if(p(*i) == false){
            return false;
        }

    }
    if(teste == 0)
    {
        return false;
    }
    return true;
}

/*! 
 * TODO: documentação no estilo doxygen
 */
template<class InputIt, class UnaryPredicate>
bool any_of(InputIt first, InputIt last, UnaryPredicate p)
{
    for (InputIt i = first; i != last; i++)
    {
        if(p(*i) == true){
            return true;
        }

    }
    
    return false;
}

/*! 
 * TODO: documentação no estilo doxygen
 */
template<class InputIt, class UnaryPredicate>
bool none_of(InputIt first, InputIt last, UnaryPredicate p)
{
    for (InputIt i = first; i != last; i++)
    {
        if(p(*i) == true){
            return false;
        }

    }
    return true;
}

}
#endif
