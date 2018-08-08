/* Copyright (c) 2017 The Linux Foundation. All rights reserved.
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

#ifndef _QPNP_LABIBB_REGULATOR_H
#define _QPNP_LABIBB_REGULATOR_H

enum labibb_notify_event {
	LAB_VREG_OK = 1,
<<<<<<< HEAD
	LAB_VREG_NOT_OK,
=======
>>>>>>> 4e281077f2786ff40edca328f9da7f39d87fa2cf
};

int qpnp_labibb_notifier_register(struct notifier_block *nb);
int qpnp_labibb_notifier_unregister(struct notifier_block *nb);

#endif
