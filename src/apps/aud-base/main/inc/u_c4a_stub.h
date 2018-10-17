/* Copyright Statement:                                                        
 *                                                                             
 * This software/firmware and related documentation ("MediaTek Software") are  
 * protected under relevant copyright laws. The information contained herein is
 * confidential and proprietary to MediaTek Inc. and/or its licensors. Without 
 * the prior written permission of MediaTek inc. and/or its licensors, any     
 * reproduction, modification, use or disclosure of MediaTek Software, and     
 * information contained herein, in whole or in part, shall be strictly        
 * prohibited.                                                                 
 *                                                                             
 * MediaTek Inc. (C) 2014. All rights reserved.                                
 *                                                                             
 * BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES 
 * THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")     
 * RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER  
 * ON AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL          
 * WARRANTIES, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED    
 * WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR          
 * NONINFRINGEMENT. NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH 
 * RESPECT TO THE SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY,            
 * INCORPORATED IN, OR SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER AGREES
 * TO LOOK ONLY TO SUCH THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO.   
 * RECEIVER EXPRESSLY ACKNOWLEDGES THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO
 * OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES CONTAINED IN MEDIATEK       
 * SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE  
 * RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR     
 * STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S 
 * ENTIRE AND CUMULATIVE LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE       
 * RELEASED HEREUNDER WILL BE, AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE  
 * MEDIATEK SOFTWARE AT ISSUE, OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE  
 * CHARGE PAID BY RECEIVER TO MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.    
 *                                                                             
 * The following software/firmware and/or related documentation ("MediaTek     
 * Software") have been modified by MediaTek Inc. All revisions are subject to 
 * any receiver's applicable license agreements with MediaTek Inc.             
 */



#ifndef _U_C4A_STUB_H_
#define _U_C4A_STUB_H_

/*-----------------------------------------------------------------------------
                    include files
-----------------------------------------------------------------------------*/
#include "u_amb.h"

/*!!!!!!!!!!!!C4aStub_CastState enum must sync with C4aCastState enum of c4a_cast_adapter.h!!!!!!!!!!!!!! */
typedef enum 
{
	C4aStub_CastState_Unknown = 0,
	C4aStub_CastState_Starting,
	C4aStub_CastState_NotSetUp,
	C4aStub_CastState_Offline,
	C4aStub_CastState_ForcedUpdate,	  
	C4aStub_CastState_Suspended,
	C4aStub_CastState_ReadyToCast,
}C4aStub_CastState;

extern VOID a_c4a_stub_register(AMB_REGISTER_INFO_T* pt_reg);
extern BOOL a_get_c4a_inited(VOID);
extern VOID a_c4a_stub_init_tos_accepted_status(VOID);

#endif /* _U_C4A_STUB_H_ */