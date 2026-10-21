#ifndef ANIMATED_BACKGROUND_H
#define ANIMATED_BACKGROUND_H

#include "Entities/Enemies/BallManager.h"
#include "Core/Systems/Boundary/BoundarySystem.h"
#include "Core/Systems/CollisionDetection/CollisionDetectionSystem.h"

class AnimatedBackground
{
	public:
		AnimatedBackground(const sf::Vector2u& windowSize);

		void update(float deltaTime);
		void draw(Renderer& renderer);

	private:
		WorldBounds worldBounds;
		BallManager ballManager;
		BoundarySystem boundarySystem;
		CollisionDetectionSystem collisionDetector;
};

#endif // !ANIMATED_BACKGROUND_H