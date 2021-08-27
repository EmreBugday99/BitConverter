#include "BitConverter.h"

void GetBytesInt32(int data, unsigned char* buffer)
{
    for (unsigned int i = 0; i < sizeof(int); i++)
    {
        buffer[i] = data >> i * 8;
    }
}