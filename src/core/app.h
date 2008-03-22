/* ASE - Allegro Sprite Editor
 * Copyright (C) 2001-2008  David A. Capello
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef CORE_APP_H
#define CORE_APP_H

#include "jinete/jbase.h"

/* enumeration of ASE events in the highest application level */
enum {
  APP_EXIT,
  APP_PALETTE_CHANGE,
  APP_EVENTS
};

bool app_init(int argc, char *argv[]);
void app_loop(void);
void app_exit(void);

void app_add_hook(int app_event, void (*proc)(void *data), void *data);
void app_trigger_event(int app_event);

void app_refresh_screen(void);

void app_realloc_sprite_list(void);
bool app_realloc_recent_list(void);

int app_get_current_image_type(void);

JWidget app_get_top_window(void);
JWidget app_get_menubar(void);
JWidget app_get_statusbar(void);
JWidget app_get_colorbar(void);
JWidget app_get_toolbar(void);
JWidget app_get_tabsbar(void);

void app_default_statusbar_message(void);

#endif /* CORE_APP_H */

