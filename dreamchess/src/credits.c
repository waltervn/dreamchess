/*  DreamChess
**
**  DreamChess is the legal property of its developers, whose names are too
**  numerous to list here. Please refer to the AUTHORS.txt file distributed
**  with this source distribution.
**
**  This program is free software: you can redistribute it and/or modify
**  it under the terms of the GNU General Public License as published by
**  the Free Software Foundation, either version 3 of the License, or
**  (at your option) any later version.
**
**  This program is distributed in the hope that it will be useful,
**  but WITHOUT ANY WARRANTY; without even the implied warranty of
**  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
**  GNU General Public License for more details.
**
**  You should have received a copy of the GNU General Public License
**  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <stdlib.h>

#include "config.h"
#include "credits.h"
#include "i18n.h"

static char *programming[] = {_N("Programming"), "Kris McAulay", "Walter van Niftrik", "Lawrence Sebald", NULL};

static char *graphics[] = {_N("Graphics"),
						   "Drew 'Hawke' Ball",
						   "Annie Kirkpatrick",
						   "Brandon May (melancholy)",
						   "Kris McAulay",
						   "Rogier van Schaijk",
						   NULL};

static char *modelling[] = {_N("3D Modelling"), "Walter van Niftrik", "Rogier van Schaijk", NULL};

static char *thanks[] = {_N("Special Thanks To"),
						 "François-Dominic Laramée",
						 "Armando Hernández Marroquín", "Chris Noll (Christuserloeser)", NULL};

static char *copyright[] = {"DreamChess", "© 2003-" COPYRIGHT_YEAR, "https://www.dreamchess.org", NULL};

static char *music[] = {_N("Music"), "Matthew P. Smith", NULL};

static char **credits[] = {copyright, programming, music, graphics, modelling, thanks, NULL};

char ***get_credits(void) {
	return credits;
}
