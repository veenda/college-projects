#include <stdio.h>
#include <stdbool.h>


int main()
{
  // NAMA KALKULATOR //
  printf("WELCOME TO BODY MASS INDEX (BMI) CALCULATOR!\n");
  
  // FLOAT VARIABLES //
  float height, weight, BMI;
  
  printf("\n");
  
  // INPUT TINGGI BADAN //
  printf("Please input your height in meter (m).\n");
  printf("Height: ");
  scanf("%f", &height);    
  
  printf("\n");
  while (height >= 3)
  {   
    // KOREKSI INPUT DATA TINGGI BADAN DENGAN LOOP//
    printf("\e[1;31mWrong entry.\e[0m\n");
    printf("Please make sure you input your height in meter (m).\n");
    printf("Height: ");
    scanf("%f", &height);
    
    printf("\n");
  }

  // INPUT BERAT BADAN //
  printf("Please input your weight in kilogram (kg).\n");
  printf("Weight: ");
  scanf("%f", &weight);
  printf("\n");

  // RUMUS BMI //
  BMI = weight / (height * height);

  // BMI CALCULATION RESULT //
  printf("\nYour BMI is %f.\n", BMI);
  printf("\n");

  if (BMI == 0)
  {
    printf("\e[0;31Wrong entry.\e[0m\n");
  }
  else if (BMI < 16)
  {
    printf("BMI classification : \e[1;36mUNDERWEIGHT\e[0m (severe thinnes)\n");
  }
  else if (BMI >= 16 && BMI <= 17)
  {
    printf("BMI classification : \e[1;36mUNDERWEIGHT\e[0m (moderate thinnes)\n");
  }
  else if (BMI >= 17 && BMI <= 18.5)
  {
    printf("BMI classification : \e[1;36mUNDERWEIGHT\e[0m (mild thinnes)\n");
  }
  else if (BMI >= 18.5 && BMI <= 25)
  {
    printf("BMI classification : \e[1;32mNORMAL\e[0m\n");
  }
  else if (BMI > 25 && BMI <= 30) 
  {
    printf("BMI classification : \e[1;33mOVERWEIGHT\e[0m (pre-obese)\n");
  }
  else if (BMI > 30 && BMI <= 35) 
  {
    printf("BMI classification : \e[1;31mOVERWEIGHT\e[0m (obese class I)\n");
  }
  else if (BMI > 35 && BMI <= 40) 
  {
    printf("BMI classification : \e[1;31mOVERWEIGHT\e[0m (obese class II)\n");
  }
  else if (BMI > 40) 
  {
    printf("BMI classification : \e[1;31mOVERWEIGHT\e[0m (obese class III)\n");
  }
  else 
  {
    printf("BMI classification : \e[0;31mWrong entry.\e[0m\n");
  }
}
