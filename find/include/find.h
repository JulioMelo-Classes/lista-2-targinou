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
 * @tparam Equal o tipo de uma função bool(const T &a, const T &b)
 * 
 * @param first Ponteiro para o primeiro elemento do range.
 * @param last Ponteiro para a posição logo após o último elemento do range.
 * @param eq Uma função que retorna true se o elemento é igual ao segundo, ou falso caso contrário.
 * 
 * @return Um iterator(ou ponteiro) para o primeiro elemento que satisfaz a função eq().
 */
template<class InputIt, class T, class Equal>
InputIt find(InputIt first, InputIt last, const T& value, Equal eq)
{
    for (InputIt i = first; i != last; i++)
    {
        if(eq(*i, value) == true){
            return i;
        }
    }
    return last;
}

}
#endif
