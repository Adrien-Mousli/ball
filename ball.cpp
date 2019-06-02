#include "Ball.h"
#include "BallRenderer.h"

//Render all the balls
for (auto& ball : balls) {
	const glm::vec4 uvRect(0.0f, 0.0f, 1.0f, 1.0f);
	const glm::vec4 destRect(ball.position.x - ball.radius, ball.position.y);
	spriteBatch.draw(destRect, uvRect, ball.textureId, 0.0f, ball.color);

