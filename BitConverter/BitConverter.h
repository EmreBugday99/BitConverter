#ifndef BITCONVERTER

union
{
    int i;
    unsigned char c[sizeof(int)];
} intUnion;

union
{
    long int i;
    unsigned char c[sizeof(long int)];
} longIntUnion;

union
{
    long long int i;
    unsigned char c[sizeof(long long int)];
} longLongIntUnion;

union
{
    float f;
    unsigned char c[sizeof(float)];
} floatUnion;

union
{
    double d;
    unsigned char c[sizeof(double)];
} doubleUnion;

void GetBytesInt32(int data, unsigned char *buffer);
void GetBytesLongInt32(long int data, unsigned char *buffer);
void GetBytesLongLongInt32(long long int data, unsigned char *buffer);
void GetBytesFloat(float data, unsigned char *buffer);
void GetBytesDouble(double data, unsigned char *buffer);

#define BITCONVERTER
#endif