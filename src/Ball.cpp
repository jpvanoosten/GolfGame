#include "Ball.h"

using namespace Tmpl8;

Ball::Ball(const std::filesystem::path& spritePath, const Tmpl8::vec2& pos)
    : m_Sprite{ new Surface{spritePath.string().c_str()}, 1u }
    , m_Position{ pos }
{

}
