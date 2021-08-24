char *my_strcpy(char *dest, const char *src) {
    int index = 0;

    for (;src[index] != '\0'; index++) {
        dest[index] = src[index];
    }
    dest[index] = '\0';
    
    return dest;
}
