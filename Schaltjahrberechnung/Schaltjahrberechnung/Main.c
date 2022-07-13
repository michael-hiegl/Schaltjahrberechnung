//**************************************************************************
//**************************************************************************
//**
//**	Projekt: Schaltjahrberechnung	
//**    ***************************************
//**
//**	Filename: Main.c
//**
//**    Name: micha  
//**	Date: 30.11.2021 20:10:33
//**	
//**	Description:
//**    
//**
//**
//**
//**************************************************************************
//**************************************************************************

//Includes
//**************************************************************************
#include <stdio.h>
#include <math.h>

//Defines & Pragmas
//**************************************************************************
#pragma warning(disable:4996) //Disable warning scanf unsafe
#pragma warning(disable:6031) //Disable warning return getchar()


//Functions
//**************************************************************************


int main(void)

	//Variables
	int i_Jahr, i_Monat, i_Tag;

	printf("Bitte Monat eingeben\n");
	scanf("%i", &i_Monat);
	printf("Bitte Jahr eingeben\n");
	scanf("%i", &i_Jahr);

	switch (i_Monat)
	{
	case 1: i_Tag = 31; break;
	case 2: i_Tag = x; break;
	case 3: i_Tag = 31; break;
	case 4: i_Tag = 30; break;
	case 5: i_Tag = 31; break;
	case 6: i_Tag = 30; break:
	case 7: i_Tag = 31; break;
	case 8: i_Tag = 31; break;
	case 9: i_Tag = 30; break;
	case 10: i_Tag = 31; break;
	case 11: i_Tag = 30; break;
	case 12: i_Tag = 31; break;
	}

	printf("%i hatte der Monat %i %i Tage", i_Jahr, i_Monat, i_Tag);



	//Code



	getchar();
	fflush(stdin);
	getchar();
	return 0;
}