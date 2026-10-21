#include "UI/Background/AnimatedBackground.h"

AnimatedBackground::AnimatedBackground(const sf::Vector2u& windowSize) :
	worldBounds(windowSize),
	ballManager(worldBounds) {}

void AnimatedBackground::update(float deltaTime)
{
	ballManager.update(deltaTime);
	auto& balls = ballManager.getBalls();

	boundarySystem.apply(ballManager, worldBounds);

	auto ballsCollision =
		collisionDetector.detectBallCollisions(balls);
	ballManager.resolveBallCollisions(ballsCollision);
}

void AnimatedBackground::draw(Renderer& renderer)
{
	ballManager.draw(renderer);
}