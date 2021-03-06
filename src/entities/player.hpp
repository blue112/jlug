#ifndef PLAYER_HPP_INCLUDED
#define PLAYER_HPP_INCLUDED

/**
* \file player.hpp
* \author jirouette
*/

#include "entities/character.hpp"
#include "utils/input.hpp"

/**
* \namespace jlug
* \brief All jLug components.
* All jLug components.
*/
namespace jlug
{
    class Map;
    class Character;
    /**
    * \class Player
    * \brief Playable Character.
    */
    class Player : public virtual Character
    {
        public:
            Player(jlug::Input& in, jlug::Window& win);
            Player(unsigned int cid, const std::string& cname, jlug::Input& in, jlug::Window& win);
            Player(unsigned int cid, const std::string& cname, unsigned int posx, unsigned int posy, jlug::Input& in, jlug::Window& win);
            Player(unsigned int cid, const std::string& cname, unsigned int posx, unsigned int posy, unsigned int posz, jlug::Input& in, jlug::Window& win);
            ~Player(void);

            virtual void move(jlug::Map& map);
            virtual void display(jlug::Map& map, jlug::Window& win);
            virtual void scroll(jlug::Map& map);

        protected:
            jlug::Input& input;
            jlug::Window& window;
            int velocity;
    };
}

#endif // PLAYER_HPP_INCLUDED
