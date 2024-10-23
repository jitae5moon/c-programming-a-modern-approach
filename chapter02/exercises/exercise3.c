#include <stdio.h>

int main(void)
{
	int length = 12, width = 10, height = 8, volume;

	volume = height * length * width;

	printf("Dimensions: %dx%dx%d\n", length, width, height);
	printf("Volume(cubic inches): %d\n", volume);
	printf("Dimensional weight(pounds): %d\n", (volume + 165) / 166);

	return 0;
}

