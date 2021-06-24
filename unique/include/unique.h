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
template<class InputIt, class Equal>
InputIt unique( InputIt first, InputIt last, Equal eq )
{
    InputIt aux;
    for (InputIt i = first; i != last; i++)
    {
        aux = i++;
        if(eq(*i, *aux) == true){
            
        }
    }
    return last;
}

}
#endif
