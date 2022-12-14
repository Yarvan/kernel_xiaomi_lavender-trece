/* Copyright (c) 2013-2014, 2016-2017 The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef _RMNET_PRIVATE_H_
#define _RMNET_PRIVATE_H_

#define RMNET_MAX_VND              32
#define RMNET_MAX_PACKET_SIZE      16384
#define RMNET_DFLT_PACKET_SIZE     1500
#define RMNET_DEV_NAME_STR         "rmnet"
#define RMNET_NEEDED_HEADROOM      16
#define RMNET_TX_QUEUE_LEN         1000
#define RMNET_ETHERNET_HEADER_LENGTH    14

extern unsigned int rmnet_log_level;
extern unsigned int rmnet_log_module_mask;

#define RMNET_INIT_OK     0
#define RMNET_INIT_ERROR  1

#define RMNET_LOG_LVL_DBG BIT(4)
#define RMNET_LOG_LVL_LOW BIT(3)
#define RMNET_LOG_LVL_MED BIT(2)
#define RMNET_LOG_LVL_HI  BIT(1)
#define RMNET_LOG_LVL_ERR BIT(0)

#define RMNET_LOGMASK_CONFIG  BIT(0)
#define RMNET_LOGMASK_HANDLER BIT(1)
#define RMNET_LOGMASK_VND     BIT(2)
#define RMNET_LOGMASK_MAPD    BIT(3)
#define RMNET_LOGMASK_MAPC    BIT(4)

#define LOGE(fmt, ...) do { } while (0)

#define LOGH(fmt, ...) do { } while (0)

#define LOGM(fmt, ...) do { } while (0)

#define LOGL(fmt, ...) do { } while (0)

/* Don't use pr_debug as it is compiled out of the kernel. We can be sure of
 * minimal impact as LOGD is not enabled by default.
 */
#define LOGD(fmt, ...) do { } while (0)

#endif /* _RMNET_PRIVATE_H_ */
