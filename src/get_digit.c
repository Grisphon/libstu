int stu_pow(int nb, int power)
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

int get_dig(int nb, int index)
{
    int result;

    result = nb % stu_pow(10, index + 1);
    result = result / stu_pow(10, index);
    if (result < 0) {
        return 0 - result;
    }
    return result;
}
