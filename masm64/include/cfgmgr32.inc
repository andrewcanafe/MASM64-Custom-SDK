IFNDEF CFGMGR32_INC
CFGMGR32_INC equ <1>

PROTO64 external,CMP_GetServerSideDeviceInstallFlags, :QWORD,:QWORD,:QWORD
PROTO64 external,CMP_WaitNoPendingInstallEvents, :QWORD
PROTO64 external,CM_Add_Empty_Log_Conf, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Add_Empty_Log_Conf_Ex, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Add_IDA, :QWORD,:QWORD,:QWORD
PROTO64 external,CM_Add_IDW, :QWORD,:QWORD,:QWORD
PROTO64 external,CM_Add_ID_ExA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Add_ID_ExW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Add_Range, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Add_Res_Des, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Add_Res_Des_Ex, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Connect_MachineA, :QWORD,:QWORD
PROTO64 external,CM_Connect_MachineW, :QWORD,:QWORD
PROTO64 external,CM_Create_DevNodeA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Create_DevNodeW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Create_DevNode_ExA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Create_DevNode_ExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Create_Range_List, :QWORD,:QWORD
PROTO64 external,CM_Delete_Class_Key, :QWORD,:QWORD
PROTO64 external,CM_Delete_Class_Key_Ex, :QWORD,:QWORD,:QWORD
PROTO64 external,CM_Delete_DevNode_Key, :QWORD,:QWORD,:QWORD
PROTO64 external,CM_Delete_DevNode_Key_Ex, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Delete_Device_Interface_KeyA, :QWORD,:QWORD
PROTO64 external,CM_Delete_Device_Interface_KeyW, :QWORD,:QWORD
PROTO64 external,CM_Delete_Device_Interface_Key_ExA, :QWORD,:QWORD,:QWORD
PROTO64 external,CM_Delete_Device_Interface_Key_ExW, :QWORD,:QWORD,:QWORD
PROTO64 external,CM_Delete_Range, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Detect_Resource_Conflict, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Detect_Resource_Conflict_Ex, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Disable_DevNode, :QWORD,:QWORD
PROTO64 external,CM_Disable_DevNode_Ex, :QWORD,:QWORD,:QWORD
PROTO64 external,CM_Disconnect_Machine, :QWORD
PROTO64 external,CM_Dup_Range_List, :QWORD,:QWORD,:QWORD
PROTO64 external,CM_Enable_DevNode, :QWORD,:QWORD
PROTO64 external,CM_Enable_DevNode_Ex, :QWORD,:QWORD,:QWORD
PROTO64 external,CM_Enumerate_Classes, :QWORD,:QWORD,:QWORD
PROTO64 external,CM_Enumerate_Classes_Ex, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Enumerate_EnumeratorsA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Enumerate_EnumeratorsW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Enumerate_Enumerators_ExA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Enumerate_Enumerators_ExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Find_Range, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_First_Range, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Free_Log_Conf, :QWORD,:QWORD
PROTO64 external,CM_Free_Log_Conf_Ex, :QWORD,:QWORD,:QWORD
PROTO64 external,CM_Free_Log_Conf_Handle, :QWORD
PROTO64 external,CM_Free_Range_List, :QWORD,:QWORD
PROTO64 external,CM_Free_Res_Des, :QWORD,:QWORD,:QWORD
PROTO64 external,CM_Free_Res_Des_Ex, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Free_Res_Des_Handle, :QWORD
PROTO64 external,CM_Free_Resource_Conflict_Handle, :QWORD
PROTO64 external,CM_Get_Child, :QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Child_Ex, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Class_Key_NameA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Class_Key_NameW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Class_Key_Name_ExA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Class_Key_Name_ExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Class_NameA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Class_NameW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Class_Name_ExA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Class_Name_ExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Class_PropertyW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Class_Property_ExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Class_Property_Keys, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Class_Property_Keys_Ex, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Class_Registry_PropertyA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Class_Registry_PropertyW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Depth, :QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Depth_Ex, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_DevNode_Custom_PropertyA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_DevNode_Custom_PropertyW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_DevNode_Custom_Property_ExA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_DevNode_Custom_Property_ExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_DevNode_PropertyW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_DevNode_Property_ExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_DevNode_Property_Keys, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_DevNode_Property_Keys_Ex, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_DevNode_Registry_PropertyA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_DevNode_Registry_PropertyW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_DevNode_Registry_Property_ExA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_DevNode_Registry_Property_ExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_DevNode_Status, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_DevNode_Status_Ex, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Device_IDA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Device_IDW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Device_ID_ExA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Device_ID_ExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Device_ID_ListA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Device_ID_ListW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Device_ID_List_ExA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Device_ID_List_ExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Device_ID_List_SizeA, :QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Device_ID_List_SizeW, :QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Device_ID_List_Size_ExA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Device_ID_List_Size_ExW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Device_ID_Size, :QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Device_ID_Size_Ex, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Device_Interface_AliasA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Device_Interface_AliasW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Device_Interface_Alias_ExA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Device_Interface_Alias_ExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Device_Interface_ListA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Device_Interface_ListW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Device_Interface_List_ExA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Device_Interface_List_ExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Device_Interface_List_SizeA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Device_Interface_List_SizeW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Device_Interface_List_Size_ExA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Device_Interface_List_Size_ExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Device_Interface_PropertyW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Device_Interface_Property_ExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Device_Interface_Property_KeysW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Device_Interface_Property_Keys_ExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_First_Log_Conf, :QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_First_Log_Conf_Ex, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Global_State, :QWORD,:QWORD
PROTO64 external,CM_Get_Global_State_Ex, :QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_HW_Prof_FlagsA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_HW_Prof_FlagsW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_HW_Prof_Flags_ExA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_HW_Prof_Flags_ExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Hardware_Profile_InfoA, :QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Hardware_Profile_InfoW, :QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Hardware_Profile_Info_ExA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Hardware_Profile_Info_ExW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Log_Conf_Priority, :QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Log_Conf_Priority_Ex, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Next_Log_Conf, :QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Next_Log_Conf_Ex, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Next_Res_Des, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Next_Res_Des_Ex, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Parent, :QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Parent_Ex, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Res_Des_Data, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Res_Des_Data_Ex, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Res_Des_Data_Size, :QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Res_Des_Data_Size_Ex, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Resource_Conflict_Count, :QWORD,:QWORD
PROTO64 external,CM_Get_Resource_Conflict_DetailsA, :QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Resource_Conflict_DetailsW, :QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Sibling, :QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Sibling_Ex, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Get_Version, 
PROTO64 external,CM_Get_Version_Ex, :QWORD
PROTO64 external,CM_Intersect_Range_List, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Invert_Range_List, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Is_Dock_Station_Present, :QWORD
PROTO64 external,CM_Is_Dock_Station_Present_Ex, :QWORD,:QWORD
PROTO64 external,CM_Is_Version_Available, :QWORD
PROTO64 external,CM_Is_Version_Available_Ex, :QWORD,:QWORD
PROTO64 external,CM_Locate_DevNodeA, :QWORD,:QWORD,:QWORD
PROTO64 external,CM_Locate_DevNodeW, :QWORD,:QWORD,:QWORD
PROTO64 external,CM_Locate_DevNode_ExA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Locate_DevNode_ExW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_MapCrToWin32Err, :QWORD,:QWORD
PROTO64 external,CM_Merge_Range_List, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Modify_Res_Des, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Modify_Res_Des_Ex, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Move_DevNode, :QWORD,:QWORD,:QWORD
PROTO64 external,CM_Move_DevNode_Ex, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Next_Range, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Open_Class_KeyA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Open_Class_KeyW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Open_Class_Key_ExA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Open_Class_Key_ExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Open_DevNode_Key, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Open_DevNode_Key_Ex, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Open_Device_Interface_KeyA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Open_Device_Interface_KeyW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Open_Device_Interface_Key_ExA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Open_Device_Interface_Key_ExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Query_And_Remove_SubTreeA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Query_And_Remove_SubTreeW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Query_And_Remove_SubTree_ExA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Query_And_Remove_SubTree_ExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Query_Arbitrator_Free_Data, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Query_Arbitrator_Free_Data_Ex, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Query_Arbitrator_Free_Size, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Query_Arbitrator_Free_Size_Ex, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Query_Remove_SubTree, :QWORD,:QWORD
PROTO64 external,CM_Query_Remove_SubTree_Ex, :QWORD,:QWORD,:QWORD
PROTO64 external,CM_Query_Resource_Conflict_List, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Reenumerate_DevNode, :QWORD,:QWORD
PROTO64 external,CM_Reenumerate_DevNode_Ex, :QWORD,:QWORD,:QWORD
PROTO64 external,CM_Register_Device_Driver, :QWORD,:QWORD
PROTO64 external,CM_Register_Device_Driver_Ex, :QWORD,:QWORD,:QWORD
PROTO64 external,CM_Register_Device_InterfaceA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Register_Device_InterfaceW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Register_Device_Interface_ExA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Register_Device_Interface_ExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Register_Notification, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Remove_SubTree, :QWORD,:QWORD
PROTO64 external,CM_Remove_SubTree_Ex, :QWORD,:QWORD,:QWORD
PROTO64 external,CM_Request_Device_EjectA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Request_Device_EjectW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Request_Device_Eject_ExA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Request_Device_Eject_ExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Request_Eject_PC, 
PROTO64 external,CM_Request_Eject_PC_Ex, :QWORD
PROTO64 external,CM_Run_Detection, :QWORD
PROTO64 external,CM_Run_Detection_Ex, :QWORD,:QWORD
PROTO64 external,CM_Set_Class_PropertyW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Set_Class_Property_ExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Set_Class_Registry_PropertyA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Set_Class_Registry_PropertyW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Set_DevNode_Problem, :QWORD,:QWORD,:QWORD
PROTO64 external,CM_Set_DevNode_Problem_Ex, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Set_DevNode_PropertyW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Set_DevNode_Property_ExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Set_DevNode_Registry_PropertyA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Set_DevNode_Registry_PropertyW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Set_DevNode_Registry_Property_ExA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Set_DevNode_Registry_Property_ExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Set_Device_Interface_PropertyW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Set_Device_Interface_Property_ExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Set_HW_Prof, :QWORD,:QWORD
PROTO64 external,CM_Set_HW_Prof_Ex, :QWORD,:QWORD,:QWORD
PROTO64 external,CM_Set_HW_Prof_FlagsA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Set_HW_Prof_FlagsW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Set_HW_Prof_Flags_ExA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Set_HW_Prof_Flags_ExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Setup_DevNode, :QWORD,:QWORD
PROTO64 external,CM_Setup_DevNode_Ex, :QWORD,:QWORD,:QWORD
PROTO64 external,CM_Test_Range_Available, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CM_Uninstall_DevNode, :QWORD,:QWORD
PROTO64 external,CM_Uninstall_DevNode_Ex, :QWORD,:QWORD,:QWORD
PROTO64 external,CM_Unregister_Device_InterfaceA, :QWORD,:QWORD
PROTO64 external,CM_Unregister_Device_InterfaceW, :QWORD,:QWORD
PROTO64 external,CM_Unregister_Device_Interface_ExA, :QWORD,:QWORD,:QWORD
PROTO64 external,CM_Unregister_Device_Interface_ExW, :QWORD,:QWORD,:QWORD
PROTO64 external,CM_Unregister_Notification, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file cfgmgr32.inc
echo -----------------------------------------
ENDIF

