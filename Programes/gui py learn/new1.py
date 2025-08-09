import pygame

# Initialize Pygame
pygame.init()

# Set up display
WIDTH, HEIGHT = 800, 600
screen = pygame.display.set_mode((WIDTH, HEIGHT))
pygame.display.set_caption("My First Pygame Window")

# Colors
WHITE = (255, 255, 255)
BLUE = (0, 0, 255)

# Game Loop
running = True
while running:
    screen.fill(WHITE)  # Clear screen

    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False

    # Draw a blue circle
    pygame.draw.circle(screen, BLUE, (WIDTH // 2, HEIGHT // 2), 50)

    pygame.display.update()  # Refresh display

pygame.quit()
