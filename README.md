# 正方形大师 难度1

![](images/SquareMaster.jpg)

## 双击生成正方形
- 用数组记录正方形矩形区域。
- 用count记录正方形个数，同时可作为新正方形填充的索引（count - 1）
- 用update()请求重绘

## 左键单击选中正方形，右键单击取消选中
- 增加selected标志位标识是否选中。
- 由于被选中正方形自动提升至顶部，因此无需记录被选中正方形的索引

## 键盘移动选中正方形
- 使用grabKeyboard()/releaseKeyboard()捕获键盘事件
- 使用QRect::translate进行dx/dy相对移动
- 使用qMin/qMax计算移动后的坐标，避免超出范围
