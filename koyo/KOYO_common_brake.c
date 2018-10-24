

void KOYO_common_brake (void)
{
	if (timer1 == NG)  /**是否设置超时定时器？*/
		//设置定时器1
	if (g_NORMAL_RUNTIME_BRAKE_FEEDBACK_FLAG == NG)  /**抱闸反馈标志位是否置位？*/
		//1. 抱闸经济电阻输出关闭
		//2.抱闸控制输出关闭
	else
		if (g_NORMAL_RUNTIME_FREQUENCY_FEEDBACK_FLAG == NG)  /**变频器反馈标志位是否置位？*/
			//关闭变频器使能
		else
			if (g_NORMAL_RUNTIME_MAIN_CONTACTOR_FEEDBACK_FLAG == NG)       /**主接触器反馈标志位是否置位？ */
				//1、主接触器控制输出关闭
				//2、运行接触器控制输出关闭
			else
				//1、清空所有标志位
				//2、关闭定时器
	
	
}