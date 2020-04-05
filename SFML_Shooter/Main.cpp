#include <SFML/Graphics.hpp>

using namespace sf;

int main() {

	RenderWindow window(sf::VideoMode(1600, 900), "Shooter!");

	Event event;
	Clock clock;
	float deltaTime;

	while (window.isOpen())
	{
		window.setFramerateLimit(60);

		while (window.pollEvent(event))
		{
			switch (event.type)
			{
				case Event::Closed :
					window.close();
					break;

				case Event::KeyPressed :
					switch (event.key.code)
					{
						case Keyboard::Escape: 
							window.close();
							break;
					}
					break;
			}
		}

		deltaTime = clock.restart().asSeconds();

		//UPDATE


		//DRAW
		window.clear();

		window.display();

	}

	return EXIT_SUCCESS;
}