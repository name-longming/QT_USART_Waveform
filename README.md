## QT串口波形调试上位机

可以直接通过串口打印向上位机发送数据（需要数据帧尾&），现阶段仅能输出打印一个数据



### 使用方法

**①点击Start USART，打开串口**

**②当显示USART OPEN SUCCESSFUL时，点击Open USART即可显示波形**

**❗注：每个数据必须要添加帧尾&；下位机的波形刷新率 <= 100Hz（建议串口发送数据的间隔 >= 10ms，否则可能造成数据丢失）**

### 效果展示

![IMG_001](https://github.com/name-longming/QT_USART_Waveform/blob/master/IMG/IMG_001.png)![IMG_002](https://github.com/name-longming/QT_USART_Waveform/blob/master/IMG/IMG_002.png)
