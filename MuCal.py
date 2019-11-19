import math

# Calculate Kinetic Mu
def cal(v1,v2,m):
    ## constant
    M = 379
    S = 0.2
    G = 9.8
    # Calculate
    mu = (m/M)-(math.pow(v2,2)-math.pow(v1,2))/(2*S*G)
    print(mu)

v1 = input()
v2 = input()
m = input()

cal(v1,v2,m)
