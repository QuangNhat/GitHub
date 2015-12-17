////////////////////////////////////////////////////////////////////////////////
//    Scorched3D (c) 2000-2011
//
//    This file is part of Scorched3D.
//
//    Scorched3D is free software; you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation; either version 2 of the License, or
//    (at your option) any later version.
//
//    Scorched3D is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License along
//    with this program; if not, write to the Free Software Foundation, Inc.,
//    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
////////////////////////////////////////////////////////////////////////////////

#if !defined(__INCLUDE_Lang_INCLUDE__)
#define __INCLUDE_Lang_INCLUDE__

#include <string>
#include <lang/ResourceBundleEntry.h>

class Lang
{
public:
	static Lang *instance();

	virtual void saveUndefined() = 0;

	virtual ResourceBundleEntry *getEntry(
		const std::string &key, const std::string &value) = 0;
	virtual ResourceBundleEntry *getEntry(
		const std::string &key, const LangString &value) = 0;

private:
	static Lang *instance_;
};

#endif // __INCLUDE_Lang_INCLUDE__
