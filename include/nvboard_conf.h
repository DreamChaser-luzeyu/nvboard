#ifndef __NVBOARD_CONF_H__
#define __NVBOARD_CONF_H__

// 刷新非实时引脚的间隔，单位为微秒
// 建议设为 (1000000 / 屏幕刷新率)
// 近似表示每秒刷新「刷新率」次图形界面，在充分利用屏幕刷新率的同时避免不必要的刷新
// 为提高性能，当然也可以将这个数值调小，以牺牲图形界面的实时性来提高仿真速度
#define NON_RT_PIN_REFRESH_INTERVAL_US   (1000000 / 120)




#endif // __NVBOARD_CONF_H__