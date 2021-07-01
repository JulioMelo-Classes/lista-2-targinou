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
 * @return Um iterator apontando para o primeiro elemento do range que satisfaz p.
 */

 /*
 blz!
 */
template<class InputIt, class UnaryPredicate>
InputIt find_if(InputIt first, InputIt last, UnaryPredicate p)
{
    
    for (InputIt i = first; i != last; i++)
    {
        if(p(*i) == true){
            return i;
        }
    }
    
    return last;
}

}
#endif
