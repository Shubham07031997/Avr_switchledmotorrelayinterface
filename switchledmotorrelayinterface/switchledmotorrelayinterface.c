#include<avr/io.h>
#define F_CPU 8000000
#include<util/delay.h>
void main()
{
  DDRA=0X00;
  DDRD=0XFF;
  PORTC=0XFF;
  DDRB=0XFF;
  PORTA=(1<<PA6);
  PORTA=(1<<PA7);
  PORTA=(1<<PA5);

  while(1)
    {   
	      if((PINA & 0b11100000)==0b01100000)
		  {
		      PORTD=0b10101010;
			  _delay_ms(100);
			  PORTD=0b01010101;
			  _delay_ms(100);
			  }
			  else 
			    PORTD=0X00;


            if((PINA & 0b11100000)==0b10100000)
          		{	    PORTC=(1<<PC7);
                       }
                          else
						  PORTC=0X00;

              if((PINA & 0b11100000)==0b11000000)
			       {      
				           PORTB=0b10100000;
						   }

                            else
							PORTB=0X00;




     }
}
