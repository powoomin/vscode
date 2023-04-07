#include <stdio.h>

int checkDate(int year, int month, int day) ; 

// month  1  2  3  4  5  6  7  8  9  10  11  12
// day    31 28 31 30 31 30 31 31 30 31  30  31

int main(int argc, char *argv[])
{
	int date, year, month, day ; 

	printf(" Input the date (20140704) : ") ; 
	scanf(" %d", &date) ; 
	
	year= date / 10000 ; 
	month = (date - (year * 10000)) / 100; 
	day = date % 100 ; 

	int result =checkDate(year, month, day) ; 

	printf(" %d \n", result) ; 
	
	return 0;
}
int checkDate(int year, int month, int day){

	if ( (month%2 == 1) ) //odd month 
	{
		if( month <= 7)
			if ( day <= 0 || day > 31) return -1; 
		else // month > 7 
			if ( day <= 0 || day > 30) return -1; 
	}
	else //even month
	{
		if( month <= 6){
			if ( month == 2)
			{
				if ( ((year%4 == 0) && (year%100 != 0)) || (year%400==0)) // leap year
					{ if ( day<=0 || day>30) return -1; }
				else if ( day<=0 || day>28) return -1; 
	 
			}
			if ( day<=0 || day>30) return -1; 
		}
		else { // month > 6
			
			if ( day<=0 || day>31) return -1; 
		}
	}	

}



