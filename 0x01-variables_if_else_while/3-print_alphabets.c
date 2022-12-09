#include <stdio.h>                                                                                                                                     
                                                                                                                                                       
/**                                                                                                                                                    
 * main - prints alphabet in lower and uppercase                                                                                                       
 *                                                                                                                                                     
 * Return: Always 0                                                                                                                                    
 */                                                                                                                                                    
int main(void)                                                                                                                                         
{                                                                                                                                                      
        char lc;                                                                                                                                       
                                                                                                                                                       
        for (lc = 'a'; lc <= 'z'; lc++)                                                                                                                
                putchar(lc);                                                                                                                           
                                                                                                                                                       
        for (lc = 'A'; lc <= 'Z'; lc++)                                                                                                                
                putchar(lc);                                                                                                                           
                                                                                                                                                       
        putchar('\n');                                                                                                                                 
                                                                                                                                                       
        return (0);
