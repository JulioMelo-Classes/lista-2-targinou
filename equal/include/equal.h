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
 * @tparam InputIt1 iterator para o primeiro range.
 * @tparam InputIt2 iterator para o segundo range.
 * @tparam Equal o tipo de um função bool.
 * 
 * @param first1 Ponteiro para o primeiro elemento do primeiro range.
 * @param first2 Ponteiro para o primeiro elemento do segundo range.
 * @param last1 Ponteiro para a posição logo após o último elemento do primeiro range.
 * @param last2 Ponteiro para a posição logo após o último elemento do segundo range.
 * @param eq Uma função que retorna true se o elemento é igual ao segundo, ou falso caso contrário.
 * 
 * @return Verdadeiro se os ranges são iguais, falso caso contrário.
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
