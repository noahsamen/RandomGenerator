//RandomNumber.c
//G. Li
//5/23/23
//this programe is to generate random value

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//this will generate the total maximum values of randome value
#define MAXIMUMCOLUMNS 4
#define MAXIMUMROWS 4

//calling random value set 1
double generateRandomValue(int v1, float d1, int v3){
  double rValue;

  //generate the values
  for(int i = 0; i < 5; i++ ){
    rValue = rand() + (v1 * v3) / d1;
  }
  
  return rValue;
}

//calling random value set 2
double generateRandomValue2(int v1, float d1, float d2){
  double rValue2;

  //generate the values
  for(int i = 0; i < 5; i++ ){
    rValue2 = rand() * (d1 / d2) / v1;
  }

  return rValue2;
}

//calling random value set 3
double generateRandomValue3(int v2, float d3, int vv2){
  double rValue3;

  //generate the values
  for(int i = 0; i < 5; i++ ){
    rValue3 = rand() + (v2 % vv2 * d3);
  }

  return rValue3;
}

int main(void) {

  //basic value to create the number generator
  int value1 = 1;
  int value2 = 2;
  int value3 = 3;
  float decimalValue1 = 3.41;
  float decimalValue2 = 4.98;
  float decimalValue3 = 7.103;

  //these will be total the value of the randome generated values
  double  randomValue;
  double  randomValue2; 
  double  randomValue3; 

  //call the function
  randomValue = generateRandomValue(value1, decimalValue1, value3);
  randomValue2 = generateRandomValue2(value1, decimalValue1, decimalValue2);
  randomValue3 = generateRandomValue3(value2, decimalValue3, value2);

  //array to design box
  int createValues[MAXIMUMCOLUMNS][MAXIMUMROWS] = {
    {randomValue, randomValue2, randomValue, randomValue3},
    {randomValue2, randomValue2, randomValue3, randomValue},
    {randomValue2, randomValue3, randomValue, randomValue3},
    {randomValue3, randomValue, randomValue2, randomValue}
  };

  //display the arrays values
  for(int y = 0; y<2; y++){
    printf(createValues);
  }
  
  return 0;
}