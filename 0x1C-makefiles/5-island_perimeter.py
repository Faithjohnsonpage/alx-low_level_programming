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
                if grid[i][j] == 0:
                    continue
                elif grid[i][j] == 1 and perimeter == 0:
                    perimeter += 4
                elif grid[i][j] == 1 and perimeter > 0:
                    perimeter += 2
        return perimeter
    return 0  # Return 0 if grid is empty
