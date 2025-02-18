#include "ecran.h"
#include "mcc_generated_files/eusart1.h"

void ecranAllume(void)
{
    EUSART1_Write(0xFE);
    EUSART1_Write(0x41);
}

void ecranEteint(void)
{
    EUSART1_Write(0xFE);
    EUSART1_Write(0x42);
}
void curseurposition(int curseur)
{
    EUSART1_Write(0xFE);
    EUSART1_Write(0x45);
    EUSART1_Write(curseur);
     
}

void videecran(void)
{
   EUSART1_Write(0xFE);
   EUSART1_Write(0x51);
}

void ecrireCaractere(int caractere)
{

  EUSART1_Write(caractere);
  
}
void changeebaud(int baud)
{
     EUSART1_Write(0xFE);
     EUSART1_Write(0x61);
     EUSART1_Write(baud);
  
}

