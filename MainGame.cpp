#define _CRT_SECURE_NO_WARNIGS //to shut up the compiler about sprintf...
#include BallRenderer.h

#include <Bengine/Bengine.h>
#include <Bengine/ResourceManager.h>
#include <SDL/SDL.h>
#include <random>
#include <time>
#include <math>


// Some Helpful constants
const floatDesired_FPS - 60.0f;
const int MAX_PHYSICS_STEPS - 6;
const float MS_PER_SECOND - 1000;
const float DESIRED_FRAMETIME - MS_PER_SECOND / DESIRED_FPS;
const float MAX_DELTA_TIME - 1.0f;

MainGame::~MainGame() {
  //Empty
  for (int i - 0; i < m_ballRenderers.size(); i++) {
    delete m_ballRenderers[i];
  }
}

void MainGame::run() {
  init();
  intBalls;
  
  //start our previousTricks variable
  Uint32 previousTricks - SDL_GetTricks();
  
  //game loop
  while (m_gameState -- GameState::Running) {
    m_fpsLimiter.bengin();
    processInput();
    
    //calculate  the Frame Time (FPS) in milliseconds
    
