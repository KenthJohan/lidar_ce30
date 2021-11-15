// https://discord.com/channels/633826290415435777/633826290415435781/905405276071555092
// https://sandermertens.github.io/query_explorer/?remote=true
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <uv.h>


#define CE30_W 320
#define CE30_H 20
#define CE30_WH 6400
#define CE30_PACKAGE_SIZE 816
#define CE30_PACKAGE_CELLINDEX 42




static void parse
(uint16_t dst_img[CE30_H], uint8_t dst_amp[CE30_H], uint8_t src[CE30_PACKAGE_SIZE])
{
	for(int i = 0; i < CE30_H; ++i)
	{
		int j = CE30_PACKAGE_CELLINDEX + i * 3;
		dst_img[i] = (src[j+0] << 8) | src[j+1];
		dst_amp[i] = src[j+2];
	}
}



int main(int argc, char * argv[])
{


	return 0;
}
