def woodcutter(a,h):
    if a == []:
        return 0
    else:
        if a[0]>h:
            return a[0]-h+woodcutter(a[1:],h)
        else:
            return woodcutter(a[1:], h)
if __name__ == '__main__':
    a = [10,7,5,11]
    h = 6
    print(woodcutter(a, h))
