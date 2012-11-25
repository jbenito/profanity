/*
 * files.h
 *
 * Copyright (C) 2012 James Booth <boothj5@gmail.com>
 *
 * This file is part of Profanity.
 *
 * Profanity is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Profanity is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Profanity.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef FILES_H
#define FILES_H

void files_create_config_directory(void);
void files_create_data_directory(void);
void files_create_chatlog_directory(void);
void files_create_themes_directory(void);
gchar* files_get_chatlog_dir(void);
gchar* files_get_preferences_file(void);
gchar* files_get_log_file(void);
gchar* files_get_themes_dir(void);

#endif