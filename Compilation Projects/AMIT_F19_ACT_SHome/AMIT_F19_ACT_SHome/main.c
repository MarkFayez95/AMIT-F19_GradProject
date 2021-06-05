/*
 * AMIT_F19_ACT_SHome.c
 *
 * Created: 31/05/2021 02:51:22 PM
 * Author : Mark Fayez
 */ 


#include "Smart_Home.h"

int main(void)
{
    
   Smart_Home_Init();
   while (1)
   {
	   Smart_Home_Run();
   }
   
}

