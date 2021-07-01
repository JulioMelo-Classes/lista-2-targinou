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
template<class BidirIt>
void reverse(BidirIt first, BidirIt last)
{
    BidirIt j = last;
    j--;
    for (BidirIt i = first; i != last; i++)
    {
        *first = *j; //blz, o problema é que vc perdeu quem era o primeiro elemento...
        first++;
        j--;
        
    }
}

}
#endif
