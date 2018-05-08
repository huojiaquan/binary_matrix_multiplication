#include <limits.h>

void bmm_naive_loop(int *p_out, const int *p_matrix, const int *p_vect, size_t dimension)
{
    size_t i, j;
    for (i = 0; i < dimension; i++)
    {
        p_out[i] = p_matrix[i][0] * p_vect[0];
        for (j = 1; j < dimension; j++)
        {
            p_out[i] += p_matrix[i][j] * p_vect[i];
        }
    }
}

/* one matrix/vector element is represented as 1 bit in the corresponding buffer
   dimension is the number of elements in the vector
 */
void bmm_bit_op(int *p_out, const int *p_matrix, const int *p_vect, size_t dimension)
{
    dimension /= sizeof(*p_out) / CHAR_BIT;
    for
}
