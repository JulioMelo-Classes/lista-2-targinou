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
template<class InputIt1, class InputIt2, class Equal>
bool equal(InputIt1 first1, InputIt1 last1, InputIt2 first2, Equal eq)
{
    int dist = distance(first1, last1);
    int cont = 0;

    for (InputIt1 i = first1; i != last1; i++)
    {
        for (InputIt2 j = first2; j != (first2 + (last1 - first1)); j++)
        {
            if(eq(*i, *j)){
            cont++;
            }
        }  
    }

    if (cont == dist)
    {
        return true;
    }
    
    return false;
}

template<class InputIt1, class InputIt2, class Equal>
bool equal(InputIt1 first1, InputIt1 last1,
           InputIt2 first2, InputIt2 last2,
           Equal eq )
{
    int dist = distance(first1, last1);
    int cont = 0;
    for (InputIt1 i = first1; i != last1; i++)
    {
        for (InputIt2 j = first2; j != last2; j++)
        {
            if(eq(*i, *j)){
            cont++;
            }
        }  
    }

    if (cont == dist)
    {
        return true;
    }
    
    return false;
}

}
#endif
