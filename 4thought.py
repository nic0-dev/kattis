def op(n):
    if n == 0:
        return '+'
    elif n == 1:
        return '-'
    elif n == 2:
        return '*'
    return '//'

if __name__ == "__main__":
    ans = set()
    operation = {}
    for a in range(0,4):
        for b in range(0,4):
            for c in range(0,4):
                s = '4' + op(a) + '4' + op(b) + '4' + op(c) + '4'
                operation[eval(s)] = s
                ans.add(eval('4' + op(a) + '4' + op(b) + '4' + op(c) + '4'))
    for i in range(int(input())):
        n = int(input())
        if n in ans:
            res2 = operation[n].replace('//', '/')
            print(' '.join(res2) + ' = ' + str(n))
        else:
            print('no solution')
