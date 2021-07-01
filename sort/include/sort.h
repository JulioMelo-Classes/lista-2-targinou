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
 * @tparam ForwardIt iterator para o range.
 * @tparam Comparison o tipo de uma função bool(const T &a, const T &b).
 * 
 * @param first Ponteiro para o primeiro elemento do range.
 * @param last Ponteiro para a posição logo após o último elemento do range.
 * @param cmp A função de comparação que retorna true quando o primeiro parâmetro é menor do que o segundo.
 */
 /*
 ok
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
