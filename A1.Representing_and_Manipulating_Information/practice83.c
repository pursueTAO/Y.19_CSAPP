/**
 * Practice 83
 *
 * A.
 *
 *  n = 0.yyyyy.....
 *  Y = B2U(y)
 *
 *  n << k = y.yyyyyy.... = Y + n
 *  Y = n << k - n = n * 2^k - n * 2^0 = n * (2^k - 1)
 *  n = Y / (2^k - 1)
 *
 *
 * B.
 *
 *  101
 *  y = 101, Y = 5, k = 3, n = 5/7
 *
 *  0110
 *  y = 0110, Y = 6, k = 4, n = 6/15 = 2/5
 *
 *  010011
 *  y = 010011, Y = 19, k = 6, n = 19/63
 *
 */
