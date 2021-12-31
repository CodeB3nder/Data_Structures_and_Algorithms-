def slope(n0, n1): 
    return((int(H[n0-1])-int(H[n1-1]))/(n0-n1))
def maxGlide(start, stop): 
    stringIndex = str(start)+","+str(stop)
    try:
        return(mem[stringIndex]) 
    except 
        KeyError: 
            if(start == stop): 
                return(int(A[start-1])) 
            elif(start < stop):     
                maxGlideVal = 0 
                sumGlide = int(A[start-1])
                maxSlope = -10e10