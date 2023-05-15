#pragma once
#include "State.h"
#include "Gui.h"

class SettingsState :
    public State
{
private:
    //variables
    GraphicsSettings& gfxSettings;
    sf::Texture backgroundTexture;
    sf::RectangleShape background;
    sf::Font font;

    std::map<std::string, gui::Button*> buttons;
    std::map<std::string, gui::DropDownList*> dropDownLists;

    sf::Text optionsText;

    std::vector<sf::VideoMode> modes;

    //functions
    void initVariables();
    void initBackground();
    void initFonts();
    void initKeybinds();
    void initGui();
    void initText();
public:
    SettingsState(StateData* state_data);
    virtual ~SettingsState();

    //Accessors

    //Functions
    void updateGui(const float& dt);
    void updateInput(const float& dt);
    void update(const float& dt);
    void renderGui(sf::RenderTarget& target);
    void render(sf::RenderTarget* target = NULL);

};

