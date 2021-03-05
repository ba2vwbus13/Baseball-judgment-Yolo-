import cv2  #OpenCVのインポート
import numpy as np  #numpyをnpという名前でインポート

img = cv2.imread('C:\\sotuken\\ball_test_openpose_yolo\\predictions6_rendered.png')

cv2.rectangle(img,(376,54),(514,324),(255,0,0),3)
#オブジェクトimgにX20,Y10を左上、X590,Y390を右下の角になる長方形を青：BGR=(255,0,0)、太さ3pxの線で描画
cv2.imwrite('C:\\sotuken\\zone\\predictions_rendered6.png',img)
