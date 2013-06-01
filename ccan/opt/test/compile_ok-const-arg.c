/*
 * Copyright 2011 Rusty Russell
 *
 * This program is free software; you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation; either version 2 of the License, or (at your option) any later
 * version.  See LICENSE for more details.
 */

#include <ccan/opt/opt.h>
#include <ccan/opt/opt.c>
#include <ccan/opt/helpers.c>
#include <ccan/opt/parse.c>
#include <ccan/opt/usage.c>

int main(int argc, char *argv[])
{
	opt_register_noarg("-v", opt_version_and_exit,
			   (const char *)"1.2.3",
			   (const char *)"Print version");
	return 0;
}
