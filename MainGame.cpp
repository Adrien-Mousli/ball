#define _CRT_SECURE_NO_WARNIGS //fermer le compilateur à propos de sprintf...
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
    
    //calcul du FrameTime (FPS) en milliseconde
    Uint32 newTicks = SDL_GetTicks();
		Uint32 frameTime = newTikcs - previousTikcs;
		previousTicks = newTicks; // Stockez newTicks dans previousTicks afin que nous puissions l'utiliser
		// obtenir le total de la variable deltaTime
		float totalDeltaTime = (float)frameTime / DESIRED_FRAMETIME;
	
		int 1 = 0; //ce compteur fait en sorte que nous la boucle ne s'étègne pas
		while (totalDeltaTime > 0.0f && i < MAX_PHYSICS_STEPS) {
			//le deltaTime devrait être le plus petit par rapport totalDeltaTime et au MAX_DELTA_TIME

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
Uint32 newTicks = SDL_GetTicks();
		Uint32 frameTime = newTikcs - previousTikcs;
		previousTicks = newTicks; // Stockez newTicks dans previousTicks afin que nous puissions l'utiliser
		// obtenir le total de la variable deltaTime
		float totalDeltaTime = (float)frameTime / DESIRED_FRAMETIME;
	
		int 1 = 0; //ce compteur fait en sorte que nous la boucle ne s'étègne pas
		while (totalDeltaTime > 0.0f && i < MAX_PHYSICS_STEPS) {
			//le deltaTime devrait être le plus petit par rapport totalDeltaTime et au MAX_DELTA_TIME    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
