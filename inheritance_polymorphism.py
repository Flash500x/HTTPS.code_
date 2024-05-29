class Shape:
    def __init__(self,radius,side):
        self.radius = radius
        self.side = side
    def get_area(self,menu):
        if menu == 1:
            self.area = 3.14*(self.radius*self.radius)
        else:
            self.area = self.side*self.side
        print(f'the area is:',self.area)
class Circle(Shape):
    def __init__(self,radius):
        self.radius = radius
        Shape.get_area(self,1)
class Square(Shape):
    def __init__(self,side):
        self.side = side
        Shape.get_area(self,2)


input_Value = int(input('1) area of circle, 2)Area of Square'))
while(True):
    try:
        updater = input_Value
        if updater>2:
            print('retry')
            input_Value = int(input('1) area of circle, 2)Area of Square'))
        else:
            break
    except:
        print('retry')
        input_Value = int(input('1) area of circle, 2)Area of Square'))

if input_Value == 1:
    circle_radius = int(input('Enter the radius of the circle whose area is to be calculated:'))
    console1 = Circle(circle_radius)
else:
    square_side = int(input('Enter the side of the square whose area is to be calculated'))
    console2 = Square(square_side)



