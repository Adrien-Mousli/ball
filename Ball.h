#pragma once 
#include "BallRenderer.h"

//Render all the balls
for (auto& ball : balls) {
	const glm::vec4 uvRect(0.0f, 0.0f, 1.0f, 1.0f);
	const glm::vec4 destRect(ball.position.x - ball.radius, ball.position.y - ball.radius,
		ball.radius * 2.0f, ball.radius * 2.0f);
	spriteBatch.draw(destRect, uvRect, ball.textureId, 0.0f, ball.color);

class Ball {
	public:
		const [glm::vec4 cursor.draw uvRect(0.0f, 0.0f, 1.0f, 1.0f); ]
	
	
	}

	public var speed : Point;
	public var ballRadius : int;

	public function Ball(xPos:int, yPos : int, rad : int)
{
		speed = new Point((Math.random() * 3) + 2, (Math.random() * 3) + 2);
		x = xPos;
		y = yPos;
		ballRadius = rad;
}

	public function update() :void {
		x += speed.x;
		y += speed.y;
		if (x >= 300 - ballRadius && speed.x > 0) speed.x = -speed.x;
		if (x <= ballRadius && speed.x < 0) speed.x = -speed.x;
		if (y >= 200 - ballRadius && speed.y > 0) speed.y = -speed.y;
		if (y <= ballRadius && speed.y < 0) speed.y = -speed.y;

			graphics.clear();
			graphics.beginFill(0xFF0000);
			graphics.drawCircle(0, 0, ballRadius);
			graphics.endFill();
			trace(x);
}

}
{
	removeEventListener(Event.ADDED_TO_STAGE, init);
	// entry point
	stage.addEventListener(Event.ENTER_FRAME, update);
	addChild(game);
}
 {
	{
private function update(e:Event) :void { game.update(); }

	}

}

 distance = Math.sqrt(
	 ((firstBall.x - secondBall.x) * (firstBall.x – secondBall.x))
	 + ((firstBall.y - secondBall.y) * (firstBall.y – secondBall.y))
 );
 
 if (distance < firstBall.radius + secondBall.radius)
 {
	 //balls have collided
 };

 
 {
	 NewVelX =
		 (firstBall.speed.x * (firstBall.mass – secondBall.mass) + (2 * secondBall.mass * secondBall.speed.x))
		 / (firstBall.mass + secondBall.mass);

	 {
		 NewVelX = (5 * (10 - 10) + (2 * 10 * -1)) / (10 + 10)
			 = (5 * 0) + (-20) / 20
			 = -20 / 20
			 = -1
	 }
		{
			 newVelX1 = (firstBall.speed.x * (firstBall.mass – secondBall.mass) + (2 * secondBall.mass * secondBall.speed.x)) / (firstBall.mass + secondBall.mass);
			 newVelY1 = (firstBall.speed.y * (firstBall.mass – secondBall.mass) + (2 * secondBall.mass * secondBall.speed.y)) / (firstBall.mass + secondBall.mass);
			 newVelX2 = (secondBall.speed.x * (secondBall.mass – firstBall.mass) + (2 * firstBall.mass * firstBall.speed.x)) / (firstBall.mass + secondBall.mass);
			 newVelY2 = (secondBall.speed.y * (secondBall.mass – firstBall.mass) + (2 * firstBall.mass * firstBall.speed.y)) / (firstBall.mass + secondBall.mass);
		}

			{
				 firstBall.x = firstBall.x + newVelX1;
				 firstBall.y = firstBall.y + newVelY1;
				 secondBall.x = secondBall.x + newVelX2;
				 secondBall.y = secondBall.y + newVelY2;
			}

 };
