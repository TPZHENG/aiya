

void KOYO_common_floor_switch (void)
{
	if (g_ALL_RUNTIME_RUNNING_DIRECTION == NG)   /**运行方向，NG = 下行，OK = 上行 */
		if (g_NORMAL_RUNTIME_BOT_LEVELING_SWITCH_FLAG == NG)  /**下平层开关是否被触发? */
			//下平层开关丢失故障III
		else
			if (g_NORMAL_RUNTIME_TOP_LEVELING_SWITCH_FLAG == NG)  /**上平层开关是否被触发? */
				//速度过快故障I
			/**当前脉冲是否大于目标脉冲加偏置量*/
			while (g_ALL_RUNTIME_CUR_PULSE_COUNT > g_ALL_FLASH_STANDARD_PULSE_COUNT + g_ALL_FLASH_PULSE_OFFSET_COUNT); 
			
			if (g_ALL_RUNTIME_CUR_PULSE_COUNT < g_ALL_FLASH_STANDARD_PULSE_COUNT - g_ALL_FLASH_PULSE_OFFSET_COUNT)
				//平层过门区故障III
	

	
	if (g_ALL_RUNTIME_RUNNING_DIRECTION == OK)   /**运行方向，NG = 下行，OK = 上行 */
		if (g_NORMAL_RUNTIME_TOP_LEVELING_SWITCH_FLAG == NG)  /**上平层开关是否被触发? */
			//上平层开关丢失故障III
		else
			if (g_NORMAL_RUNTIME_BOT_LEVELING_SWITCH_FLAG == NG)  /**下平层开关是否被触发? */
				//速度过快故障I
			/**当前脉冲是否小于目标脉冲减偏置量*/
			while (g_ALL_RUNTIME_CUR_PULSE_COUNT < g_ALL_FLASH_STANDARD_PULSE_COUNT - g_ALL_FLASH_PULSE_OFFSET_COUNT); 
			
			if (g_ALL_RUNTIME_CUR_PULSE_COUNT > g_ALL_FLASH_STANDARD_PULSE_COUNT + g_ALL_FLASH_PULSE_OFFSET_COUNT)
				//平层过门区故障III		
	
}