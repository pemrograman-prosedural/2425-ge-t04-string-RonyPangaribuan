// 12S24005 - Mia Nathania Sibuea
// 12S24040 - Rony Reynaldy Pangaribuan

#include <stdio.h>
#include <string.h>

#define MIN_LENGTH 1
#define MAX_LENGTH 20

int main() {
    char input[MAX_LENGTH + 1]; 

  
    fgets(input, sizeof(input), stdin);

    input[strcspn(input, "\n")] = 0;
    
    int length = strlen(input);
    if (length < MIN_LENGTH || length > MAX_LENGTH) {
        printf("Input tidak valid. Panjang harus antara %d dan %d.\n", MIN_LENGTH, MAX_LENGTH);
        return 1;
    }

    for (int i = 0; i < length; i++) {
        
        printf("%03d", (int)input[i]);
    }

    printf("013"); 

    return 0;
}