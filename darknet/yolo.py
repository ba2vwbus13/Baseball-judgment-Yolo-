import os

direct='/home/ic1/darknet/ball_test'
#画像が入っているディレクトリの指定

info=os.listdir(direct)

count=1
for file in info:
    index=re.search('jpg',file)
    if index:
        count+=1

for i in range(1, count):

    os.chdir("home/ic1/darknet")    #cd darknetを外部コマンドで実施している

    os.system("./darknet detector test /home/ic1/darknet/logs/019/019.data /home/ic1/darknet/logs/019/yolov3.cfg /home/ic1/darknet/logs/019/backup/yolov3_last.weights ball_test/dog"+str(i)+".jpg")

    path1="home/ic1/darknet/predictions.jpg"
    path2="home/ic1/darknet/ball_test_yolo/new"+str(i)+".jpg"

    os.rename('path1', 'path2')
