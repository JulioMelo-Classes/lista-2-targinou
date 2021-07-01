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
 * @tparam InputIt iterator para o range.
 * @tparam UnaryPredicate o tipo de um função bool.
 * 
 * @param first Ponteiro para o primeiro elemento do range.
 * @param last Ponteiro para a posição logo após o último elemento do range.
 * @param p Uma função que retorna true quando uma determinada condição é satisfeita ou falso caso contrário.
 * 
 * @return Retorna verdadeiro se todos os elementos do range satisfazem p, falso caso contrário.
 */

 /*
 blz!
 */
template<class InputIt, class UnaryPredicate>
bool all_of(InputIt first, InputIt last, UnaryPredicate p)
{
    int teste = 0;
    for (InputIt i = first; i != last; i++)
    {
        teste = 1;
        if(p(*i) == false){ //aqui vc poderia testar if(!p(*i))
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
 * @tparam InputIt iterator para o range.
 * @tparam UnaryPredicate o tipo de um função bool.
 * 
 * @param first Ponteiro para o primeiro elemento do range.
 * @param last Ponteiro para a posição logo após o último elemento do range.
 * @param p Uma função que retorna true quando uma determinada condição é satisfeita ou falso caso contrário.
 * 
 * @return Retorna verdadeiro se ao menos um elemento do range satisfaz p, falso caso contrário.
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
 * @tparam InputIt iterator para o range.
 * @tparam UnaryPredicate o tipo de um função bool.
 * 
 * @param first Ponteiro para o primeiro elemento do range.
 * @param last Ponteiro para a posição logo após o último elemento do range.
 * @param p Uma função que retorna true quando uma determinada condição é satisfeita ou falso caso contrário.
 * 
 * @return retorna verdadeiro se todos os elementos do range não satisfazem p, falso caso contrário.
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
