#!/usr/bin/python3
"""
Island Parimeter
"""


def island_perimeter(grid):
    """
        function that implements island parameter
    """
    row_len, col_len = len(grid), len(grid[0])
    para = 0
    for i in range(row_len):
        for j in range(col_len):
            if grid[i][j] == 0:
                continue
            count = 4
            if j+1 < col_len and grid[i][j+1]:
                count -= 1
            if j-1 >= 0 and grid[i][j-1]:
                count -= 1
            if i+1 < row_len and grid[i+1][j]:
                count -= 1
            if i-1 >= 0 and grid[i-1][j]:
                count -= 1
            para += count
    return para
