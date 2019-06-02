#include "BallController.h"

#include "Grid.h"

void BallController::updateBalls(std::vector <Ball>& balls, Grid* grid, float deltaTime, int maxX, int maxY) {
	const float FRICTION = 0.09f;
	//Update our grabbed balls velocity
	if (m_grabbedBall != -1) {
		balls[m_grabbedBall].velocity = position - m_prevPos;
}

	glm::vec2 gravity = getGravityAccel();

	for (size_t i = 0; i < balls.size(); i++) {
		//get handle for less typing
		Ball& ball = balls[i];
		//Update motion if its not grabbed 
		if (i != m_grabbedBall) {
			ball.position += ball.velocity * deltaTime;
			//Aply friction
			glm::vec2 momentumVec = ball.velocity * ball.mass;
			if (momentumVec.x != 0 || momentumVec.y != 0) {
				if (FRICTION < glm::length(momentumVec)) {
					ball.velocity -= deltaTime * FRICTION * glm::normalize(momentumVec) / ball.mass;
				}
				else {
					ball.velocity = glm::vec2(0.0f);
				}
			}
			//Apply gravity
			ball.velocity += gravity * deltaTime;
		}
		//check wall position
		if (ball.position.x < ball.radius) {
			ball.position.x = ball.radius;