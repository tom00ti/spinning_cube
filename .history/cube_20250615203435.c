/*** spinning cube ***/

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

float A, B, C;
float cubeWidth = 10.0f;
float width = 100.0f;
float zBuffer[160 * 44];
char buffer[160 * 44];
int backgrounfASCIICode = ' ';

float incrementSpeed = 0.6f;

float x,y,z;

float calculateX(int i, int j, int k) {
  return j * sin(A) * sin(B) * cos(C) - k * cos(A) * sin(B) * cos(C) +
         j * cos(A) * sin(C) + k * sin(A) * sin(C) + i * cos(B) * sin(C);
}

float calculateY(int i, int j, int k) {
  return j * cos(A) * cos(C) + k * sin(A) * cos(C) -
         j * sin(A) * sin(B) * sin(C) + k * cos(A) * sin(B) * sin(C) -
         i * cos(B) * sin(C);
}

float calculateZ(int i, int j, int k) {
  return k * cos(A) * cos(B) - j * sin(A) * cos(B) + i * sin(B);
}

void calculateForFace(float cubeX, float cubeY, float cubeZ, int ch){

}

int main() {
  printf("\x1b[2J");
  while (1) {
    /* code */
    memset(buffer, backgrounfASCIICode, width * height);
    memset(zBuffer, 0, width * height * 4);
    for (float cubeX = -cubeWidth; cubeX < cubeWidth; cubeX += incrementSpeed) {
      for (float cubeY = -cubeWidth; cubeY < cubeWidth;
           cubeY += incrementSpeed) {
            calculateForFace(cubeX, cubeY, -cubeWidth, '#');
      }
    }

    return 0;
  }
