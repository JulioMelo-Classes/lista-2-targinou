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
template<class ForwardIt, class Comparison>
void sort(ForwardIt first, ForwardIt last, Comparison cmp)
{
    int aux;
    for (ForwardIt i = first; i != last; i++)
    {
        for (ForwardIt j = first; j != last; j++){

            if(cmp(*i, *j) == true){
                aux = *i;
                *i = *j;
                *j = aux;
            }
        }
    }
}

}
#endif
