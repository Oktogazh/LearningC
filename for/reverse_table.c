#include <stdio.h>

int main() {
  float fahr;
    printf("°F  |  °C\n");
  for (fahr = 300; fahr >= 0; fahr -= 20) {
    printf("%3.0f | %4.2f \n", fahr, (fahr-32)*5/9);
  }
  return 0;
}
