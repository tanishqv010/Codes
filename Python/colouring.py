import pygame

pygame.init() #Initializing pygame functions
Background = pygame.display.set_mode((500 ,500)) #Set the screen size
pygame.display.set_caption("Colouring") #Set the title of the screen
for i in range(0, 500, 15): #Drawing grid
    pygame.draw.line(Background, (255, 255, 255), (0, i), (500, i)) #Drawing horizontal line for grid
    pygame.draw.line(Background, (255, 255, 255), (i, 0), (i, 500)) #Drawing horizontal line for grid
while pygame.event.wait().type != pygame.QUIT:
    #Draw figure
    pygame.display.flip() #Flip the screen