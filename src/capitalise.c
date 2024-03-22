/*
 * E89 Pedagogical & Technical Lab
 * project:     capitalise(student)
 * created on:  2023-10-20 - 14:50 +0200
 * 1st author:  quentin.mettier - quentin.mettier
 * description: put a char uppercase or resent it if it's not lowercase
 */

char stu_capitalise(char letter)
{
    if (letter >= 97) {
        if (letter <= 122) {
            letter = letter - 32 ;
            return letter;
        } else {
            return letter;
        }
    } else {
        return letter;
    }
}
