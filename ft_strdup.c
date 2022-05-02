#include "libft.h"

char *ft_strdup(const char *str)
{
 char *newStr;
 char *res;
 size_t leng;

 leng = ft_strlen(str)+1;
 newStr = (char *) ft_calloc(leng, sizeof(char));
 
 if (newStr == NULL)
  return (NULL);
 res = ft_memmove(newStr, str, leng);
 return (res);
 
}
