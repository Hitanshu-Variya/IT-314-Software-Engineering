class Point:
    def __init__(self, x, y):
        self.x = x
        self.y = y

def doGraham(points):
    if(len(points) == 0):
        return None
    
    min_index = 0

    for i in range(1, len(points)):
        if(points[i].y < points[min_index].y):
            min_index = i
    
    for i in range(0, len(points)):
        if(points[i].y == points[min_index].y and points[i].x > points[min_index].x):
            min_index = i

    return points[min_index]