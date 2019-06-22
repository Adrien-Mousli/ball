#pragma once























class MainGame {
  public:
    ~MainGame();
    void run();
  
  
 private:
      void init();
      void initRenderers();
      void initBalls();
      void drawHud();
      void update(float deltaTime); 
      void draw();
      void processInput();
  
  int m_screenwidth = 0;
  int m_screenHeight = 0;
  
  std::vector<Ball> m_balls; // toutes boules
	std::unique_ptr<Grid> m_grid;

	std::vector<BallRenderer*> > m_BallRenderers;

	BallController m_BallControler; //< Controlle des balles

	Bengine::Window m_window; ///< la fenêtre principale
	Bengine::SpriteBatch m_spriteBatch; ///< Rend toutes les balles
	std::unique_ptr<Bengine::SpriteFont> m_spriteFont;
	Bengine::Camera2D m_camera; ///< rend la scène
	Bengine::InputManager;
	Bengine::GlSLProgram m_textureProgram; ///< shader pour la texture

	Bengine::fpsLimiter m_fpsLimiter; ///< calcul et limite les fps (frame par secondes)
	float m_fps = 0.0f;

	GameState m_gameState = GameState::RUNNING;
};
