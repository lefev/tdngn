#include <SDL3/SDL.h>
int main()
{
	auto window = SDL_CreateWindow("Hello world", 600, 200, 0);
	auto render = SDL_CreateRenderer(window, nullptr, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	SDL_Delay(5000);
	SDL_Quit();

	return 0;
}