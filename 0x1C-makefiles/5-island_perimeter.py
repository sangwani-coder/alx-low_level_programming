#!/usr/bin/python3
""" Returns the perimeter of the island describe by grid """


def island_perimeter(grid):
    """returns the perimeter defined by grid
        param:
            grid(list): A list of integers
            O represents a water zone
            1 represents a land zone
            One cell is a square with side length 1
            Grid cells are connected horizontally/vertically
            Grid is rectangular, width, and height don't exceed 100
    """
    width = len(grid[0])
    height = len(grid)
    edge = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edge += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edge += 1
    return size * 4 - edge * 2
