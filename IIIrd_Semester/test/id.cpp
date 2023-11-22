/*/#include <SFML/Graphics.hpp>

int main()
 {
    // Define the dimensions of the ID card
    float idCardWidth = 8.5; // cm
    float idCardHeight = 5.5; // cm

    // Create an SFML window with the specified dimensions
    sf::RenderWindow window(sf::VideoMode(idCardWidth * 100, idCardHeight * 100), "ID Card");

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        // Clear the window
        window.clear(sf::Color::White);

        // Draw elements on the ID card
        // You can use SFML functions to draw text, images, and shapes here

        // Display the content
        window.display();
    }

    return 0;
}
/**/

/*/
#include <iostream>


int main()
{
    // Create a window with the desired dimensions
    sf::RenderWindow window(sf::VideoMode(850, 550), "ID Card");

    // Create a font for text
    sf::Font font;
    if (!font.loadFromFile("arial.ttf"))
    {
        // Replace "arial.ttf" with the path to a font file on your system
        return -1;
    }

    // Create a text object
    sf::Text text;
    text.setFont(font);
    text.setString("John Doe\nEmployee ID: 12345\nDepartment: IT");
    text.setCharacterSize(16);
    text.setFillColor(sf::Color::Black);
    text.setPosition(50, 50);

    // Create a rectangle for the card background
    sf::RectangleShape card;
    card.setSize(sf::Vector2f(800, 500));
    card.setFillColor(sf::Color::White);
    card.setOutlineThickness(2);
    card.setOutlineColor(sf::Color::Black);
    card.setPosition(25, 25);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::White);
        window.draw(card);
        window.draw(text);
        window.display();
    }

    return 0;
}
/**/


#include <iostream>
#include <string>

int main()
 {
    std::cout << "-----------------------------------\n";
    std::cout << "|         ID CARD GENERATOR       |\n";
    std::cout << "-----------------------------------\n";

    std::string name, employeeID, department;

    std::cout << "Enter Name: ";
    std::getline(std::cin, name);

    std::cout << "Enter Employee ID: ";
    std::getline(std::cin, employeeID);

    std::cout << "Enter Department: ";
    std::getline(std::cin, department);

    // Print the ID card
    std::cout << "\nID CARD\n";
    std::cout << "Name: " << name << "\n";
    std::cout << "Employee ID: " << employeeID << "\n";
    std::cout << "Department: " << department << "\n";

    return 0;
}