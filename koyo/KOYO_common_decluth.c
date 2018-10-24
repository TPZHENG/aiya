

void KOYO_common_decluth (void)
{
	if (timer2 == NG)      /**超时定时器是否设置？*/
		//设置超时定时器
	if (g_NORMAL_RUNTIME_MAIN_CONTACTOR_FEEDBACK_FLAG == NG)  /**主接触器反馈标志位是否置位？*/
		// 主接触器控制输出、运行接触器控制输出，设置定时器
	else
		if (g_NORMAL_RUNTIME_FREQUENCY_FEEDBACK_FLAG == NG)   /**变频器反馈标志位是否置位？ */
			// 设置运行方向，使能变频器
		else
			if (g_NORMAL_RUNTIME_BRAKE_RESISTANCE_FLAG == NG)  /**抱闸经济电阻标志位是否置位？ */
				if (timer3 == NG)  							   /**是否设置经济电阻定时器? */
					//将超时定时器重新配置为经济电阻定时器
				//抱闸控制输出
			else
				if (g_NORMAL_RUNTIME_BRAKE_FEEDBACK_FLAG == NG)  /**抱闸反馈标志位是否置位？*/
					//1.将经济电阻定时器重新配置为超时定时器
					//2. 抱闸经济电阻输出
				else
					//清空所有标志位
						
}