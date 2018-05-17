#!/usr/bin/python3
def pascal_triangle(n):
    triangle = []
    prev_row = [1]
    row = 0
    if n <= 0:
        return []
    triangle.append(prev_row)
    if n == 1:
        return triangle
    while row < n - 1:
        current_row = []
        current_row.append(prev_row[0])
        i = 0
        while i < row:
            current_row.append(prev_row[i] + prev_row[i + 1])
            i += 1
        current_row.append(prev_row[len(prev_row) - 1])
        triangle.append(current_row)
        prev_row = current_row
        row += 1
    return triangle
