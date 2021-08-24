unsigned int my_strlen(char *str) {
    unsigned int counter = 0;

    for (; str[counter] != '\0';) {
        counter += 1;
    }
    return counter;
}
