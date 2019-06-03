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
  int m_screen
