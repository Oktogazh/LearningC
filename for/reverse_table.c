#include <stdio.h>

#define  SUCCESS  0
#define  LOWER    0
#define  UPPER    300
#define  STEP     -20

int main() {
  float fahr;

  printf("°F  |  °C\n");

  for (fahr = UPPER; fahr >= LOWER; fahr += STEP) {
    printf("%3.0f | %4.2f \n", fahr, (fahr-32)*5/9);
  }
  return SUCCESS;
}
