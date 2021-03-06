#ifndef bullet_hpp
#define bullet_hpp
#include <myFunctions.hpp>
#include <monster.hpp>
#include <boom.hpp>



class Bullet : public sf::CircleShape {
public:

    Bullet(double angle, sf::Vector2f startPosition, clock_t time, int damage, int life);//tworzy pocisk
    Bullet(double angle, sf::Vector2f startPosition,clock_t time);//tworzy granat

    bool isGranade();//zwraca czy pocisk jest granatem

    void hit(std::vector<Monster> &monsters, std::vector<Bullet> &bullets, int index);//sprawdza trafienie w potwora/ jesli nie jest granatem

    void moveing(clock_t time, std::vector<Bullet> &bullets, int index, std::vector<Monster> &monsters, std::vector<Boom> &booms, sf::Texture &boomTexture);//ruch i odbijanie pocisku, wywoluje hit lub granadeBoom

    void granadeBoom(std::vector<Monster> &monsters);///wybuch granata
protected:
    int life_ = 1000;//dugosc zycia pocisku
    float speed_ = 20;
    float angle_;
    int damage_ = 40;
    int bulletRadius_ = 4;
    clock_t startTime_;
    bool isGranade_ = false;
};

#endif
