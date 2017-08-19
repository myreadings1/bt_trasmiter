#include <stdio.h>
//#include <stdint.h>
#include <inttypes.h>

int main ()
{
  FILE * pFile;
//0000000001101110100011100000111011111101100011010001111111110010
//0000000001101110100011100000111011111101100011010001111111110010
//0000000001101110100011100000111011111101100011010001111111110010
//010100000000011011101000111000001110111111011000110100011111111100101010
uint64_t syncword =  0x006e8e0efd8d1ff2, mask = 0x8000000000000000;
int i, len = 625;
uint8_t  buffer[len];// = { 'x' , 'y' , 'z' };

// preamble
//buffer[0] = 0;
//buffer[1] = 1;
//buffer[2] = 0;
//buffer[3] = 1;


//printf (" %0x"PRIx64" \n ", syncword);

printf("val = %"PRIx64", %"PRIx64"\n", syncword, mask << 1 );

//for (i = 0 ; i < 64; i ++)
//	if ( 0 == (syncword & (mask >> i) ) )
//		buffer [i+4] = 0x00;
//	else 
//		buffer [i+4] = 0x01;

//buffer[68] = 1;
//buffer[69] = 0;
//buffer[70] = 1;
//buffer[71] = 0;

//buffer[72] = 1;
//buffer[73] = 1;
//buffer[74] = 1;
//buffer[75] = 1;

// 0x006e8e0efd8d1ff2
//buffer [0] = 0x05;
//buffer [1] = 0x00;
//buffer [2] = 0x6e;
//buffer [3] = 0x8e;
//buffer [4] = 0x0e;
//buffer [5] = 0xfd;
//buffer [6] = 0x8d;
//buffer [7] = 0x1f;
//buffer [8] = 0xf2;
//buffer [9] = 0x0a;
//buffer [9] = 0x00;


for (i = 0 ; i < 72; i ++)
	buffer [i] = 0x55;

for (i = 72 ; i < len; i ++)
	buffer [i] = 0x00;


for (i = 0 ; i < 72; i ++)
	printf ("%02x",  buffer [i]);

printf("\n");

  pFile = fopen ("bt_pkt.bin", "wb");
  fwrite (buffer , sizeof(uint8_t), sizeof(buffer), pFile);
  fclose (pFile);
  return 0;
}
