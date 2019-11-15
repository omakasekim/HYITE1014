import imageio

img = imageio.imread('carry.jpg')
h,w = img.shape

print('bin\tcount\tpercentage(%)')

for i in range(256):
    j=0
    for y in range(675):
        for x in range(1200):
            if i==img[y][x]:
                j=j+1
    k=float(j/(675*1200))

print('%d\t%d\t%f'%(i,j,k))
