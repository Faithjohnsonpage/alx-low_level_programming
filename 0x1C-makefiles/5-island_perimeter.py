#!/usr/bin/python3
"""This module defines a function that calculates
the perimeter of an island described in grid"""


def island_perimeter(grid):
    """This function returns the perimeter of the island described in grid"""
    perimeter = 0
    if grid:
        rows = len(grid)
        cols = len(grid[0])

        for i in range(rows):
            for j in range(cols):
                if grid[i][j] == 1:
                    perimeter += 4  # Assume full perimeter
                    # Check neighbors and subtract 1 for each adjacent land
                    if i > 0 and grid[i - 1][j] == 1:
                        perimeter -= 1
                    if i < rows - 1 and grid[i + 1][j] == 1:
                        perimeter -= 1
                    if j > 0 and grid[i][j - 1] == 1:
                        perimeter -= 1
                    if j < cols - 1 and grid[i][j + 1] == 1:
                        perimeter -= 1

        return perimeter
    return 0  # Return 0 if grid is empty
