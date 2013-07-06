/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE. 
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/
/*******************************************************************************
 *
 * Filename:
 * ---------
 * Bt_opps_message.h
 *
 * Project:
 * --------
 *   BT Project
 *
 * Description:
 * ------------
 *   This file is used to
 *
 * Author:
 * -------
 * Daylong
 *
 *==============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Revision: 
 * $Modtime:
 * $Log: 
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/
#ifndef __BT_OPPS_MESSAGE_H__
#define __BT_OPPS_MESSAGE_H__

#ifdef SOURCE_INSIGHT_TRACE
enum 
{
#endif
#ifdef BTMTK_ON_WISE    
    MSG_ID_BT_OPPS_REGISTER_SERVER_REQ,
    MSG_ID_BT_OPPS_GROUP_START = MSG_ID_BT_OPPS_REGISTER_SERVER_REQ,
#else
    MSG_ID_BT_OPPS_REGISTER_SERVER_REQ = MSG_ID_BT_OPPS_GROUP_START,
#endif /* BTMTK_ON_WISE */  
	MSG_ID_BT_OPPS_REGISTER_SERVER_CNF,
	MSG_ID_BT_OPPS_DEREGISTER_SERVER_REQ,
	MSG_ID_BT_OPPS_DEREGISTER_SERVER_CNF,
	MSG_ID_BT_OPPS_CONNECT_IND,
	MSG_ID_BT_OPPS_CONNECT_RSP,
	MSG_ID_BT_OPPS_PUSH_IND,
	MSG_ID_BT_OPPS_PUSH_RSP,
	MSG_ID_BT_OPPS_PULL_IND,
	MSG_ID_BT_OPPS_PULL_RSP,
	MSG_ID_BT_OPPS_SET_FOLDER_IND,
	MSG_ID_BT_OPPS_SET_FOLDER_RSP,
	MSG_ID_BT_OPPS_ABORT_IND,
	MSG_ID_BT_OPPS_ABORT_RSP,
	MSG_ID_BT_OPPS_AUTH_REQ,
	MSG_ID_BT_OPPS_AUTH_CNF,
	MSG_ID_BT_OPPS_AUTH_IND,
	MSG_ID_BT_OPPS_AUTH_RSP,
	MSG_ID_BT_OPPS_DISCONNECT_IND,
	MSG_ID_BT_OPPS_DISCONNECT_RSP,
	MSG_ID_BT_OPPS_TPDISCONNECT_REQ,
	MSG_ID_BT_OPPS_TPDISCONNECT_IND,
	MSG_ID_BT_OPPS_AUTHORIZE_IND,
	MSG_ID_BT_OPPS_AUTHORIZE_RSP, 
	MSG_ID_BT_OPPS_SERVER_INTERNAL_RW,
	MSG_ID_BT_OPPS_ACTION_IND,
	MSG_ID_BT_OPPS_ACTION_RSP,
	MSG_ID_BT_OPPS_PUSHFILE_IND,
	MSG_ID_BT_OPPS_PUSHFILE_RSP,
	MSG_ID_BT_OPPS_PUSHFILE_RSP_IND,
	MSG_ID_BT_OPPS_PULLFILE_IND,
	MSG_ID_BT_OPPS_PULLFILE_RSP,
	MSG_ID_BT_OPPS_PULLHFILE_RSP_IND,	
	MSG_ID_BT_OPPS_ABORTFILE_REQ,
	MSG_ID_BT_OPPS_ABORTFILE_CNF,
	MSG_ID_BT_OPPS_GROUP_END = MSG_ID_BT_OPPS_ABORTFILE_CNF,


#ifdef SOURCE_INSIGHT_TRACE
};
#endif

#endif	
