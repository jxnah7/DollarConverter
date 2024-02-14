# DollarConverter
Mexican Peso and Euro to U.S. Dollar converter

Suppose you have amounts in Mexican pesos and Euros that you would like to convert to 
U.S. Dollars to find out how much money they are worth in total. Write the algorithm 
(steps in pseudocode) and the corresponding program to convert Mexican Pesos and Euros to 
U.S. Dollars and display their equivalent and the total on the screen.
The program must prompt the user to enter the amount in Mexican Pesos and Euros (double
precision real numbers) to be converted and then display the result in the format shown 
below. The amounts in U.S. Dollars (double precision real numbers) must be rounded off to 
the cents (second decimal digit).

Assume that the amounts in Mexican Pesos and Euros will be entered with no more than two 
decimal digits (cents).

For the conversion assume that:
1 U.S. Dollar = 17.47 Mexican Pesos
1 U.S. Dollar = 0.94 Euros

1) Declare named constants DOL2MEX (17.47) and DOL2EURO (0.94) for working with these
values in your program. Declare variables pesos and euros to store the amounts in 
Mexican pesos and Euros entered by the user. Be sure of choosing the appropriate 
data types for them.

After rounding the values in U.S. Dollars to the cents you must add them to get the 
total and then convert each of them to two separate whole numbers, one corresponding to 
the whole part (bills) and the other corresponding to the decimal digits (coins). The 
numbers MUST be converted to whole numbers, not just displayed as whole numbers. Since 
you work with real numbers you should round them to get the correct amount in cents. Use 
the following identifiers for the variables that will hold the separated amounts:

• wholedollarsp: stores the whole dollars of the amount obtained from converting the 
pesos
• centdollarsp: stores the cents of the amount obtained from converting the pesos
• wholedollarse stores the whole dollars of the amount obtained from converting the 
euros
• centdollarse: stores the cents of the amount obtained from converting the euros
• wholetotal: stores the whole dollars of the total amount
• centtotal: stores the cents of the total amount

Test code by using the numbers below:

Pesos = 78.24
Euros = 108.20

78.24 pesos:     4 US DOLLARS WITH 48 CENTS

108.20 euros:     115 US DOLLARS WITH 11 CENTS

Total:       119 US DOLLARS WITH 59 CENTS



Pesos = 254.19
Euros = 48.36

78.24 pesos:     14 US DOLLARS WITH 55 CENTS

108.20 euros:     51 US DOLLARS WITH 45 CENTS

Total:       66 US DOLLARS WITH 0 CENTS



Pesos = 188.25
Euros = 130.00

78.24 pesos:     10 US DOLLARS WITH 78 CENTS

108.20 euros:     138 US DOLLARS WITH 30 CENTS

Total:       149 US DOLLARS WITH 8 CENTS


Pesos = 200.00
Euros = 200.00

78.24 pesos:     11 US DOLLARS WITH 45 CENTS

108.20 euros:     212 US DOLLARS WITH 77 CENTS

Total:       224 US DOLLARS WITH 22 CENTS


Pesos = 856.70
Euros = 93.07

78.24 pesos:     49 US DOLLARS WITH 4 CENTS

108.20 euros:     99 US DOLLARS WITH 1 CENTS

Total:       148 US DOLLARS WITH 5 CENTS




