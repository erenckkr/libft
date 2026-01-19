#include <stddef.h>

void *memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *x = (unsigned char *)dst;
    unsigned char *y = (unsigned char *)src;

    if (!dst && !src)
    return (NULL);

    while (n--)
        {
            *x = *y;
            x++;
            y++;
        }
    return (dst);
}