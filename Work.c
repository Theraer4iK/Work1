#include <stdio.h>

int main() {
    char str[100];

    printf("Write your text: ");
    scanf("%s", str);
    
    int j = 0; // Счётчик для новой строки
    for (int i = 0; str[i] != '\0'; i++) {
        if (i % 2 != 0) {
            str[j++] = str[i];  // Копируем только нечетные символы
        }
    }
    str[j] = '\0'; // Завершаем строку нуль-символом

    printf("Modified text: %s\n", str);

    return 0;
}

