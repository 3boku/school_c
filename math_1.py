a = None
b = None
r = None
line = None


agmStart('START');
a = agmPrompt(true, '원의 중심의 x좌표는?')
b = agmPrompt(true, '원의 중심의 y좌표는')
r = agmPrompt(true, '원의 반지름은?(양수)')
line = agmPrompt(false, '직선의 방정식은?(y=ax+b)')
agmCreatePoint('O', a, b);
agmCreateCircle('C', 'O', r);
agmExecuteSetName(line,'L');
agmExecuteSetName(“y=0”,'a1');
agmExecuteSetName(“y=5”,'b1');
agmCreateIntersectionAutoName('A', 'L', 'a1');
agmCreateIntersectionAutoName('B', 'L', 'b1');
agmCreateTwoPointObject('l', 'A_1', 'B_1', '선분');
agmCreateTextSetName(5, 5, ''.join([str(x) for x in ['반지름', r, '원의 중심과 직선의 거리', agmObjectDistance('O', 'line', 'l')]]), 't_1');
