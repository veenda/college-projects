# Temperature Converter Project

This is an individual project created by Veenda Putri Divo to fullfill a basic programming assignment. The program is written in C and functions as console-based temperature converter. It allows users to input a temperature in one unit and converts it to the other three units: Reamur, Celcius, Farenheit, and Kelvin. The program emphasizes input validation, user interaction, and real-world logic through mathematical formulas and control structures.

<br>

## Features
- **Unit Selection**
  <p>This program offers 4 temperature units to convert from: (1) Reamur, (2) Celcius, (3) Farenheit, and (4) Kelvin </p>

  <pre>
  printf("[1] Reamur\n");                         // <-- case 1
  printf("[2] Celcius\n");                        // <-- case 2
  printf("[3] Farenheit\n");                      // <-- case 3
  printf("[4] Kelvin\n");                         // <-- case 4
  printf("Pilih unit yang ingin Anda konversikan: ");
  scanf("%d", &unit);
  </pre>

- **Unit Calculation**
  <p>Similar to how BMI calculation use real-world measurements, this temperature converter program applies accurate physical formulas to transform input values across 4 temperature units: Reamur, Celcius, Farenheit, and Kelvin</p>
  <pre>
  C = (R*5/4);
  F = (R*9/4)+32;
  K = (R*5/4)+273;
  </pre>
  
- **Conversion Logic**
  <p>A <code>switch</code> is being used to handle each unit. After the user chooses a temperature unit, the program stores that choice in the variable <code>unit</code>. The <code>switch</code> statement then matches that value with one of its defined <code>case</code> labels.</p>
   
<br>

## How to Use
1. Run this <code>temperature-converter.c</code> file using compiler.
2. You will be asked:
   <pre>
    Apakah Anda ingin melakukan konversi suhu? : [1] Ya / [0] Tidak
   </pre>
   
   Enter <code>1</code> to continue or <code>0</code> to exit the program.
3. Select the unit you want to convert from.
4. Enter the temperature value.
   <p>The program will display the converted values in other units.</p>
6. You will be asked if you want to convert again.
