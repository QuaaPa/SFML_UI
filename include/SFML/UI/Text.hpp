#ifndef LABEL_HPP
#define LABEL_HPP

#include <SFML/Graphics.hpp>

class Label
{
private:
    sf::Text l_text;
    sf::Font l_font;

    sf::Vector2f l_position;
    sf::Vector2f l_scale;
    sf::Uint32 l_characterSize;


public:
    Label();
    Label
        (
            const std::string& text,
            const std::string& font,
            const sf::Vector2f& position    =   sf::Vector2f(0, 0),
            const sf::Uint32& characterSize =   10,
            const sf::Color& color          =   sf::Color::White,
            const sf::Vector2f& scale       =   sf::Vector2f(1, 1)
        );

    ~Label();

    void setString(const std::string& text);
    void setFont(const std::string& font);
    void setColor(const sf::Color& color);
    void setPosition(const sf::Vector2f& position);
    void setScale(const sf::Vector2f& scale);
    void setCharacterSize(const sf::Uint32& characterSize);
    void setOrigin(const sf::Vector2f& origin);
    void setOutlineColor(const sf::Color& outlineColor);
    void setOutlineThickness(const float& outlineThickness);


    void renderLabel(sf::RenderWindow& window);

};

#endif // LABEL_HPP