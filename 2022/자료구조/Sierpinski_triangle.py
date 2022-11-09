from tkinter import *
import math 

h = 1000
w = 1000
window = Tk()
canvas = Canvas(window, height=h, width=w, bg='white')
canvas.pack()

tri_x = 200
tri_y = 800
length = 500

m = math.sqrt(3)

def draw(x, y, l):
    if l < 20:
        return 0
    else : 
        canvas.create_polygon(x, y, x+l, y, x+l/2, y-m*l/2, fill='red', outline='red')
        canvas.create_polygon(x+l/4, y-m/4*l, x+l/2, y, x+l*3/4, y-m/4*l, fill='white', outline='white')
        l = l/2
        draw(x, y, l)
        draw(x+l/2, y-m/2*l, l)
        draw(x+l, y, l)
       
draw(tri_x, tri_y, length)
window.mainloop()

