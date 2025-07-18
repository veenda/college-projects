# Temperature Converter Project

This is an individual project created by Veenda Putri Divo to fullfill a basic programming assignment. The program is written in C and functions as console-based temperature converter. It allows users to input a temperature in one unit and converts it to the other three units: Reamur, Celcius, Farenheit, and Kelvin. The program emphasizes input validation, user interaction, and real-world logic through mathematical formulas and control structures.

<br>

## Features
- **Unit Selection**
  <p>This program offers 4 temperature units:</p>
  1. Reamur</p>
  2. Celcius</p>
  3. Farenheit</p>
  4. Kelvin</p>
  <pre>
  printf("\n\e[0;31m");
  printf("Pilihan Anda tidak benar.\n");
  printf("\e[0m\n");
  printf("[1] Reamur\n");                         // <-- case 1
  printf("[2] Celcius\n");                        // <-- case 2
  printf("[3] Farenheit\n");                      // <-- case 3
  printf("[4] Kelvin\n");                         // <-- case 4
  printf("Pilih unit yang ingin Anda konversikan: ");
  scanf("%d", &unit);
  </pre>
   
- **Conversion Logic**
  <p>A <code>switch</code> is being used to handle each unit. The input temperature will converts to the other 3 units using correct formulas:</p>
  <pre>
  C = (R*5/4);
  F = (R*9/4)+32;
  K = (R*5/4)+273;
  </pre>
   
<br>

## How to Use

