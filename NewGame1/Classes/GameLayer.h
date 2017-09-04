#ifndef __GAMELAYER_H__
#define __GAMELAYER_H__

#include "cocos2d.h"

class GameLayer : public cocos2d::Scene {
protected:
  enum Tag {
    T_Background = 1,
    T_Enemy,
    T_Ball,
    T_Gum1,
    T_Gum2,
    T_Block,
  };

  enum ZOrder {
    Z_Background = 1,
    Z_Enemy,
    Z_Launcher2,
    Z_Gum2,
    Z_Ball,
    Z_Gum1,
    Z_Launcher1,
    Z_Block,
    Z_Fog,
    Z_Star,
    Z_Result,
  };

  enum class BlockType {
    Block1,
    Block2,
    Roof,
    Stone,
  };

  int _remaining;
  int _level;

  void createBackground();
  void createGround();
  void createEnemy(cocos2d::Point position);
  void createBall();
  cocos2d::Point calculatedPosition(cocos2d::Point touchPosition);
  void applyingForceToBall(cocos2d::Node* ball);
  void createBlockAndEnemy(int level);
  void createBlock(BlockType type, cocos2d::Point position, float angle);
  void contactedBall();
  void removingEnemy(cocos2d::Node* enemy);
  void successGame();
  void failureGame(float dt);

public:
    static cocos2d::Scene* createScene(int remaining, int level);
    virtual bool init(int remaining, int level);
    static GameLayer* create(int remaining, int level);
    // CREATE_FUNC(GameLayer);
    virtual void onEnter();
    virtual void update(float dt);

    virtual bool onTouchBegan(cocos2d::Touch* touch, cocos2d::Event* unused_event);
    virtual void onTouchMoved(cocos2d::Touch* touch, cocos2d::Event* unused_event);
    virtual void onTouchEnded(cocos2d::Touch* touch, cocos2d::Event* unused_event);
    virtual void onTouchCancelled(cocos2d::Touch* touch, cocos2d::Event* unused_event);

    bool onContactBegin(cocos2d::PhysicsContact& contact);
};

#endif // __GAMELAYER_H__
