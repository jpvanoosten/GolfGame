#pragma once

#include "surface.h"
#include "template.h"

#include <filesystem>

class Ball
{
public:
    Ball(const std::filesystem::path& spritePath, const Tmpl8::vec2& pos);
    ~Ball();

    void Render(const Tmpl8::Surface& screen);
    void Update(float deltaTime);

private:
    Tmpl8::Sprite m_Sprite;
    Tmpl8::vec2 m_Size;
    Tmpl8::vec2 m_Position;
    Tmpl8::vec2 m_Velocity;
};
