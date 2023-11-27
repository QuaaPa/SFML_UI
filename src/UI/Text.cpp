#include "UI/UI/Text.hpp"
// Constructor | Destructor
//######################################################
Label::Label()
{

}

Label::Label(
    const std::string &text,
    const std::string &font,
    const sf::Vector2f &position,
    const sf::Uint32 &characterSize,
    const sf::Color &color,
    const sf::Vector2f &scale)
{
    l_font.loadFromFile(font);

    l_text.setString(text);
    l_text.setFont(l_font);
    l_text.setFillColor(color);
    l_text.setPosition(position);
    l_text.setScale(scale);
    l_text.setCharacterSize(characterSize);
}
Label::~Label()
{
    // Do nothing
}
//######################################################

// Set parrameters for the label
//######################################################
void Label::setString(const std::string &text)
{
    l_text.setString(text);
}

void Label::setFont(const std::string &font)
{
    l_font.loadFromFile(font);
}

void Label::setColor(const sf::Color &color)
{
    l_text.setFillColor(color);
}

void Label::setPosition(const sf::Vector2f &position)
{
    l_position = position;
    l_text.setPosition(l_position);
}

void Label::setScale(const sf::Vector2f &scale)
{
    l_scale = scale;
    l_text.setScale(l_scale);
}

void Label::setCharacterSize(const sf::Uint32 &characterSize)
{
    l_characterSize = characterSize;
    l_text.setCharacterSize(l_characterSize);
}

void Label::setOrigin(const sf::Vector2f &origin)
{
    l_text.setOrigin(origin);
}

void Label::setOutlineColor(const sf::Color &outlineColor)
{
    l_text.setOutlineColor(outlineColor);
}

void Label::setOutlineThickness(const float &outlineThickness)
{
    l_text.setOutlineThickness(outlineThickness);
}
// ######################################################

// Display the label on the window.
//######################################################
void Label::renderLabel(sf::RenderWindow &window)
{
    window.draw(l_text);
}
//######################################################
