#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
  unsigned char *ucdest;
  unsigned char *ucsrc;
  size_t i;

  ucdest = (unsigned char*)dest;
  ucsrc = (unsigned char*) src;
  i = 0;
  
  while(i < n)
  {
   ucdest[i] = ucsrc[i];
   i++;
  }
 return (dest);
}
