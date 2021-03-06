/// <summary>
/// author Pete Lowe May 2019
/// you need to change the above line or lose marks
/// </summary>
#ifndef GAME_HPP
#define GAME_HPP
/// <summary>
/// include guards used so we don't process this file twice
/// same as #pragma once
/// Don't forget the endif at the bottom
/// </summary>
#include <SFML/Graphics.hpp>

enum class Direction
{
	None,
	Up,
	Down,
	Right,
	Left
	
};


class Game
{
public:
	Game();
	~Game();
	/// <summary>
	/// main method for game
	/// </summary>
	void run();

private:

	void processEvents();
	void processKeys(sf::Event t_event);
	void update(sf::Time t_deltaTime);
	void render();
	void changecharacter();
	void checkDirection();
	void move();
	void checkBoundry();
	
	void setupFontAndText();
	void setupSprite();

	sf::RenderWindow m_window; // main SFML window
	sf::Font m_marioFont;// mario font definition
	sf::Text m_characterName;// character anme on screen
	sf::Texture m_marioLuigiTex;// texture for mario and lugi
	sf::Sprite m_characterSprite;// sprite for character
	sf::Texture m_logoTexture; // texture used for sfml logo
	sf::Sprite m_logoSprite; // sprite used for sfml logo
	bool m_exitGame; // control exiting game
	bool m_isMaraio = true; // is mario the current chartacter
	Direction m_direction = Direction::None; // marios direction
	sf::Vector2f m_location{ 400.0f,300.0f }; // Marios location
	float m_speed = 2.0f; // how quick mario moves
};

#endif // !GAME_HPP

