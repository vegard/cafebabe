/*
 * cafebabe - the class loader library in C
 * Copyright (C) 2008  Vegard Nossum <vegardno@ifi.uio.no>
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
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#include "cafebabe/error.h"

static const char *messages[] = {
	[CAFEBABE_ERROR_EXPECTED_EOF]
		= "Expected end-of-file",
	[CAFEBABE_ERROR_UNEXPECTED_EOF]
		= "Unexpected end-of-file",
	[CAFEBABE_ERROR_BAD_MAGIC_NUMBER]
		= "Bad magic number",
	[CAFEBABE_ERROR_BAD_CONSTANT_TAG]
		= "Bad constant tag",
};

const char *
cafebabe_strerror(enum cafebabe_errno e)
{
	return messages[e];
}
