// 12S24005 - Mia Nathania Sibuea
// 12S24040 - Rony Reynaldy Pangaribuan

#include <stdio.h>
#include <string.h>
  
#define MIN_LENGTH 3
#define MAX_LENGTH 60
  
int string_to_int(const char *str) {
  int result = 0;
    for (int i = 0; i < 3; i++) {
      result = result * 10 + (str[i] - '0'); 
  }
  return result;
  }
  
  int main() {
  char input[MAX_LENGTH + 1]; 
  
     
 
  fgets(input, sizeof(input), stdin);
  
    
  input[strcspn(input, "\n")] = 0;
  
  int length = strlen(input);
    if (length < MIN_LENGTH || length > MAX_LENGTH || length % 3 != 0) {
      printf("Input tidak valid. Panjang harus antara %d dan %d dan harus kelipatan 3.\n", MIN_LENGTH, MAX_LENGTH);
      return 1;
      }
  
    for (int i = 0; i < length; i += 3) {
          
    char ascii_str[4]; 
    strncpy(ascii_str, input + i, 3);
    ascii_str[3] = '\0'; 
  
    int ascii_value = string_to_int(ascii_str);
    printf("%c", (char)ascii_value);
      }
  
    printf("\n"); 
  
return 0;
  }