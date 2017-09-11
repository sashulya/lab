#include <stdio.h>
int main() {
	float t,c,k,f;
	char s;
	printf ("Scale designations - C-Celsius, F-Fahrenheit, K-Kelvin\n");
	printf ("Write temperature with/without scale(e.g. 36C,-15K,23,590): ");
	scanf ("%f%c", &t, &s);
	switch (s) {
	case 'C' :
		f=t*9/5+32;
		k=t+273.15;
		printf ("\n%.2f F\n", f);
		printf ("%.2f K", k);
		break;
	case 'F' :
		c=(t-32)*5/9;
		k=(t-32)*5/9+273.15;
		printf ("\n%.2f C\n", c);
		printf ("%.2f K", k);
		break;
	case 'K':
		c=t-273.15;
		f=(t-273.15)*9/5+32;
		printf ("\n%.2f C\n", c);
		printf ("%.2f F", f);
		break; 
	default:
		f=t*9/5+32;
		k=t+273.15;
		printf ("\n%.2f C:\n", t);
		printf ("%.2f F\n", f);
		printf ("%.2f K\n\n", k);
		c=(t-32)*5/9;
		k=(t-32)*5/9+273.15;
		printf ("%.2f F:\n", t);
		printf ("%.2f C\n", c);
		printf ("%.2f K\n\n", k);
		c=t-273.15;
		f=(t-273.15)*9/5+32;
		printf ("%.2f K:\n", t);
		printf ("%.2f C\n", c);
		printf ("%.2f F\n\n", f);
		break;
	} 
	return 0;
}

