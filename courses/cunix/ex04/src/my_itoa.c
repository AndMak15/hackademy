int get_number(const char symbol) {
    switch (symbol) {
        case '0': return 0;
        case '1': return 1;
        case '2': return 2;
        case '3': return 3;
        case '4': return 4;
        case '5': return 5;
        case '6': return 6;
        case '7': return 7;
        case '8': return 8;
        case '9': return 9;
	default:  return -1;
    }
}

int my_atoi(const char *nptr) {
    int index = 0;
    int result = 0;
    int is_negative = 0;
    int n = 1;
    int len = 0;

    if (nptr[index] == '-') {
        is_negative = 1;
	index += 1;
	len += 1;
    }
    for (int i = index; get_number(nptr[i]) != -1; i++, len++);

    for (int i = len - 1; i >= 0; i--) {
        int number = get_number(nptr[i]);
	
	if (number < 0) {
            break;
	}
        result += number * n;
	n *= 10;
    }

    if (is_negative == 1) {
        result *= -1;
    }
    return result;
}

char* my_itoa(int nmb) {
    return "";
}
