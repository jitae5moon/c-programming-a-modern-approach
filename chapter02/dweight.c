#include <stdio.h>

int main(void)
{
	int length, width, height, volume, weight;

	length = 12;
	width = 10;
	height = 8;
	volume = height * length * width;
	weight = (volume + 165) / 166;

	printf("Dimensions: %dx%dx%d\n", length, width, height);
	printf("Volume(cubic inches): %d\n", volume);
	printf("Dimensional weight(pounds): %d\n", weight);

	return 0;
}

