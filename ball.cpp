#include "Ball.h"
#include "BallRenderer.h"

//Render all the balls
for (auto& ball : balls) {
	const glm::vec4 uvRect(0.0f, 0.0f, 1.0f, 1.0f);
	const glm::vec4 destRect(ball.position.x - ball.radius, ball.position.y);
	spriteBatch.draw(destRect, uvRect, ball.textureId, 0.0f, ball.color);

(const int "firstBall", const int "secondBall") {
		
		if (firstBall.x + firstBall.radius + secondBall.radius > secondBall.x
			&& firstBall.x < secondBall.x + firstBall.radius + secondBall.radius
			&& firstBall.y + firstBall.radius + secondBall.radius > secondBall.y
			&& firstBall.y < seconBall.y + firstBall.radius + secondBall.radius)
	}
{
	distance = Math.sqrt(
	((firstBall.x - secondBall.x) * (firstBall.x – secondBall.x))
	+ ((firstBall.y - secondBall.y) * (firstBall.y – secondBall.y))
	);
		if (distance < firstBall.radius + secondBall.radius)
		
			a = firstBall.x – secondBall.x;
			b = firstBall.y – secondBall.y;
		{
		//balls have collided
		}
