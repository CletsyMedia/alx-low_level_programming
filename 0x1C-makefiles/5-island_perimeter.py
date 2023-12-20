#!/usr/bin/python3
"""5-island_perimeter module"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid"""
    perimeter = 0
    length = len(grid) - 1
    width = len(grid[0]) - 1

    for i, row in enumerate(grid):
        for j, cell in enumerate(row):
            if cell == 1:
                if i == 0 or grid[i - 1][j] != 1:
                    perimeter += 1
                if j == 0 or grid[i][j - 1] != 1:
                    perimeter += 1
                if j == width or grid[i][j + 1] != 1:
                    perimeter += 1
                if i == length or grid[i + 1][j] != 1:
                    perimeter += 1

    return perimeter
