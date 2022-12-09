#include <stdio.h>                                                                                                                                     
                                                                                                                                                       
/**                                                                                                                                                    
 * main - prints alphabets in lowercase followed by new line , except q and e                                                                          
 *                                                                                                                                                     
 * Return: Always 0                                                                                                                                    
 */                                                                                                                                                    
int main(void)                                                                                                                                         
{                                                                                                                                                      
        char ta;                                                                                                                                       
                                                                                                                                                       
        for (ta = 'a'; ta <= 'z'; ta++)                                                                                                                
        {                                                                                                                                              
                if (ta != 'e' && ta != 'q')                                                                                                            
                        putchar(ta);                                                                                                                   
        }                                                                                                                                              
                                                                                                                                                       
        putchar('\n');                                                                                                                                 
                                                                                                                                                       
        return (0);                                                                                                                                    
}
