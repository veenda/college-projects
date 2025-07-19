# BMI Calculator Project

This is an individual project created by Veenda Putri Divo to fullfill a basic programming assignment. The program is written in C and functions as console-based BMI calculator. This program calculates a user's Body Mass Index (BMI) based on their height and weight, then classifies the result according to [WHO standards](https://www.who.int/data/gho/data/themes/topics/topic-details/GHO/body-mass-index). The classification will follows:
<table>
   <tr>
      <td><strong>BMI Range</strong></td>
      <td><strong>Classification</strong></td>
   </tr>
   <tr>
      <td>&lt; 16</td>
      <td>Severe Thinness</td>
   </tr>
   <tr>
      <td>16-16.99</td>
      <td>Moderate Thinness</td>
   </tr>
   <tr>
      <td>17-18.45</td>
      <td>Mild Thinness</td>
   </tr>
   <tr>
      <td>18.5-24.99</td>
      <td>Normal</td>
   </tr>
   <tr>
      <td>25-29.99</td>
      <td>Pre-obese</td>
   </tr>
   <tr>
      <td>30-34.99</td>
      <td>Obese Class I</td>
   </tr>
   <tr>
      <td>35-39.99</td>
      <td>Obese Class II</td>
   </tr>
   <tr>
      <td>≥ 40</td>
      <td>Obese Class III</td>
   </tr>
</table>

<br>

## Features

-  **User Input**
   <p>The user will be asked to enter their height in meters. The programs uses the <code>printf</code> function to display instruction on the screen, <code>scanf</code> to read the input from the user. The height is stored in a variable of type <code>float</code> to allow decimal values.</p>
   <pre>
   printf("Please input your height in meter (m).\n");
   printf("Height: ");
   scanf("%f", &height);
   </pre>
   
   <p>Again, the user will be asked to enter their weight in meters. The programs uses the <code>printf</code> function to display instruction on the screen, <code>scanf</code> to read the input from the user. The weight is stored in a variable of type <code>float</code> to allow decimal values.</p>
   <pre>
   printf("Please input your weight in kilogram (kg).\n");
   printf("Weight: ");
   scanf("%f", &weight);
   </pre>

   <p>The <code>scanf</code> function in C is used to read formatted input from the standard input (keyboard). The format specifier <code>%f</code> indicated that the input should be a floating-point number. The ampersand (<code>&</code>) before the variable name (e.g., <code>&height</code>) tells the programs to store the input directly into the memory address of that variable. If the user enters a value that doesn't match the expected format, the program may produce incorrect result or encounter errors. Therefore, clear instructions and input validation are inportant to ensure reliable operation.</p>

-  **BMI Calculation**
   <p>The Body Mass Index (BMI) is claculated using the formula given below, where weight is measured in kilograms and height is measured in meters.
   <pre>
   BMI = weight / (height * height);
   </pre>
   
-  **Classification Logic**
   <p>   This program applies real-world logic by using conditional statements to classify the user's BMI based on standards set by the WHO. After calculating BMI using the formula given above, the program evaluates the result aganist defined ranges to determine the user's health category. These category include three levels of obesity (underweight, normal, overweight).</p>

<br>

## How to Use
1. Run this <code>BMI-calculator.c</code> file using compiler.
2. Enter your height in meters.
3. Enter your weight in kilograms.
<p>The result will be displayed instantly after entering the weight.</p>
