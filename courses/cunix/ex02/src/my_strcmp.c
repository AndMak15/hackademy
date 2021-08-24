int my_strcmp(char *str1, char *str2) {
    int index = 0;

    for (; str1[index] != '\0' && str1[index] == str2[index]; index++);
    if ( str1[index] == str2[index]) {
        return 0;
    } else if (str1[index] > str2[index]) {
        return 1;
    } else {
        return -1;
    }
}
