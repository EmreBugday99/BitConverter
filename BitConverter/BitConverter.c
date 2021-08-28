#include "BitConverter.h"

void GetBytesInt32(int data, unsigned char *buffer)
{
    intUnion.i = data;

    for (int i = 0; i < sizeof(int); i++)
    {
        buffer[i] = intUnion.c[i];
    }
}

void GetBytesLongInt32(long int data, unsigned char *buffer)
{
    longIntUnion.i = data;

    for (int i = 0; i < sizeof(long int); i++)
    {
        buffer[i] = longIntUnion.c[i];
    }
}

void GetBytesLongLongInt32(long long int data, unsigned char *buffer)
{
    longLongIntUnion.i = data;

    for (int i = 0; i < sizeof(long long int); i++)
    {
        buffer[i] = longLongIntUnion.c[i];
    }
}

void GetBytesFloat(float data, unsigned char *buffer)
{
    floatUnion.f = data;

    for (int i = 0; i < sizeof(float); i++)
    {
        buffer[i] = floatUnion.c[i];
    }
}

void GetBytesDouble(double data, unsigned char *buffer)
{
    doubleUnion.d = data;

    for (int i = 0; i < sizeof(double); i++)
    {
        buffer[i] = doubleUnion.c[i];
    }
}