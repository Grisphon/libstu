#include <unistd.h>

static void tc_putchar(char c)
{
    write(1, &c, 1);
}

int nb_len(int nb)
{
    if (nb < 10 && nb > -10) {
        return 1;
    } else {
        return 1 + nb_len(nb / 10);
    }
}

static int stu_pow(int nb, int power)
{
    int sum;
    int reach;

    sum = 1;
    reach = 0;
    while (reach < power) {
        sum = sum * nb;
        reach = reach + 1;
    }
    return sum;
}


static int get_digit(int nb, int index)
{
    int result;

    result = nb % stu_pow(10, index + 1);
    result = result / stu_pow(10, index);
    if (result < 0) {
        return 0 - result;
    }
    return result;
}

int print_base10(int nb)
{
    int count;

    count = nb_len(nb) - 1;
    if (nb < 0) {
        tc_putchar('-');
    }
    while (count >= 0) {
        tc_putchar(48 + get_digit(nb, count));
        count = count - 1;
    }
    tc_putchar('\n');
    if (nb < 0) {
        return 1 + nb_len(nb);
    }
    return nb_len(nb);
}
