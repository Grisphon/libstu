/*
 * E89 Pedagogical & Technical Lab
 * project:     nb_len.c
 * created on:  2023-10-24 - 09:54 +0200
 * 1st author:  quentin.mettier - quentin.mettier
 * description: count how many digits have a number (recursively)
 */

int nb_l(int nb)
{
    if (nb < 10 && nb > -10) {
        return 1;
    } else {
        return 1 + nb_l(nb / 10);
    }
}
