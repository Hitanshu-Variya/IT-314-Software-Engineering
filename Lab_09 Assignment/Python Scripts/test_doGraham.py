import pytest
from Lab_09_doGraham import doGraham, Point

@pytest.mark.parametrize("points, expected", [
    # Test case where the loops are explored zero times (empty list)
    ([], None),  

    # Test case where the first loop executes once and the second loop does not execute
    ([Point(1, 1)], (1, 1)),  

    # Test case where the first loop executes once and the second loop executes once
    ([Point(1, 3), Point(2, 2)], (2, 2)),  

    # Test case where the first loop executes twice and the second loop executes twice
    ([Point(1, 1), Point(2, 1)], (2, 1)),  

    # Test case where the first loop executes twice and the second loop executes once
    ([Point(1, 2), Point(3, 2), Point(2, 1)], (2, 1)),  
])

def test_doGraham(points, expected):
    result = doGraham(points)
    if expected is None:
        assert result is None, f"Failed for points: {[(p.x, p.y) for p in points]}"
    else:
        assert (result.x, result.y) == expected, f"Failed for points: {[(p.x, p.y) for p in points]}"
