#ifndef _TIME_HELPER_H
/*
 * Copyright (C) 2006-2023 wolfSSL Inc.
 *
 * This file is part of wolfSSL.
 *
 * wolfSSL is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * wolfSSL is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1335, USA
 */

/*
# This tag is used to include this file in the ESP Component Registry:
# __ESP_COMPONENT_SOURCE__
*/

#ifdef __cplusplus
extern "C" {
#endif

/* worst case, if GitHub time not available, used fixed time */
int set_fixed_default_time();

/* set time from string (e.g. GitHub commit time) */
int set_time_from_string(char* time_buffer);

/* set time from NTP servers,
 * also intitially calls set_fixed_default_time or set_time_from_string */
int set_time(void);

int set_time_wait_for_ntp(void);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* #ifndef _TIME_HELPER_H */
