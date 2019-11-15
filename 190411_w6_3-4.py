import math
import imageio


img = imageio.imread('HDR.jpg')
h,w = img.shape
print (h,w)


p = [0]*256

for y in range(h):
    for x in range (w):
        b = img[y][x]
        p[b] = p[b] +1;


for x in range(255):
    p[x+1] = p[x+1] + p[x]

for y in range(h):
    for x in range(w):
        img[y][x] = math.floor(255*p[img[y][x]]/(w*h))

imageio.imwrite('HDRnew.jpg' , img)
