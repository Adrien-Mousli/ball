#include "BallRenderer.h"
	
void BallRenderer::renderBalls(Bengine::SpriteBatch& spriteBatch, std::vector<Ball>& balls, 
							   const glm::mat4& projectionmatrix) {
		// Lazilly initialize the program
	if (m_program == nullptr) {
		m_program = std::make_unique<Bengine::GLSLProgram>();
		m_program->compileShaders("Shaders/textureShading.vert", "Shaders/textureShading.frag");
		m_program->addAtribute("vertexPosition");
		m_program->addAtribute("vertexColors");
		m_program->addAtribute("vertexUV");
		m_program->linkShaders();
	}
	
	m_program->use();

	spriteBatch.begin();
	
	//Make sure the shader texture 0
	glActiveTexture(GL_TEXTURE0);
	GLint textureUniform = m_program->getUniformLocation("mySampler");
	gUniformli(textureUniform, 0);
	
	
	//Grab the camera Matrix
	GLint textureUniform = m_program->getUniformLocation("P");
	glUniformMatrixfv(pUniform, 1, GL_FALSE, &projectionMatrix[0][0]);

	//Render all the balls
	for (auto& ball : balls) {
		const glm::vec4 uvRect(0.0f, 0.0f, 1.0f, 1.0f);
		const glm::vec4 destRect(ball.position.x - ball.radius, ball.position.y - ball.radius,
			ball.radius * 2.0f, ball.radius * 2.0f);
		spriteBatch.draw(destRect, uvRect, ball.textureId, 0.0f, ball.color);

	}
	
	m_spriteBatch.end();
	m_spriteBatch.renderBatch();

	m_program->unuse();

}

void MomentumBallRenderer::renderBalls(Bengine::SpriteBatch& spriteBatch, std::vector<Ball>& balls,
	const glm::mat4& projectionmatrix) {
	// Lazilly initialize the program
	if (m_program == nullptr) {
		m_program = std::make_unique<Bengine::GLSLProgram>();
		m_program->compileShaders("Shaders/textureShading.vert", "Shaders/textureShading.frag");
		m_program->addAtribute("vertexPosition");
		m_program->addAtribute("vertexColors");
		m_program->addAtribute("vertexUV");
		m_program->linkShaders();
	}

	m_program->use();

	spriteBatch.begin();

	//Make sure the shader texture 0
	glActiveTexture(GL_TEXTURE0);
	GLint textureUniform = m_program->getUniformLocation("mySampler");
	gUniformli(textureUniform, 0);


	//Grab the camera Matrix
	GLint textureUniform = m_program->getUniformLocation("P");
	glUniformMatrixfv(pUniform, 1, GL_FALSE, &projectionMatrix[0][0]);

	//Render all the balls
	for (auto& ball : balls) {
		const glm::vec4 uvRect(0.0f, 0.0f, 1.0f, 1.0f);
		const glm::vec4 destRect(ball.position.x - ball.radius, ball.position.y - ball.radius,
			ball.radius * 2.0f, ball.radius * 2.0f);
		Bengine::ColorRGBA8 color;
			Glubyte colorVal = (Glubyte)(glm::length(ball.velocity) * ball.mass;
		spriteBatch.draw(destRect, uvRect, ball.textureId, 0.0f, ball.color);

	}

	m_spriteBatch.end();
	m_spriteBatch.renderBatch();

	m_program->unuse();
	//24:16s
	//20:51