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
template<class ForwardIt, class UnaryPredicate>
ForwardIt partition(ForwardIt first, ForwardIt last, UnaryPredicate p)
{
    ForwardIt retorno;
    int aux;
    for (ForwardIt i = first; i != last; i++)
    {
        if(p(*i) == true){
            retorno = i;
            
            aux = *first;
            *first = *i;
            *i = aux;
            first++;
        }
    }

    return retorno;
}

}
#endif
