#pragma once

#include <Bengine/SpriteBatch.h>
#include <Bengine/GLSLProgram.h>
#include <memory>
#include <vector>
#include "Ball.h"

class BallRenderer {
public:
	virtual void renderBalls(Bengine::SpriteBatch& spriteBatch, const std::vector<Ball>& balls, 
		const glm::mat4& projectionMatrix);
protected:
	std::unique_ptr<Bengine::GLSLProgram> m_program = nulptr;
projectMatrix
	class MomentumBallRenderer : publicBallRenderer {
public:
	virtual void renderBalls(Bengine::SpriteBatch& spriteBatch, const std::vector<Ball>& balls,
		const glm::mat4& projectionMatrix) override ;

};


