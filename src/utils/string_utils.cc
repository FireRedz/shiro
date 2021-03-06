/*
 * shiro - High performance, high quality osu!Bancho C++ re-implementation
 * Copyright (C) 2018-2020 Marc3842h, czapek
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published
 * by the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#include <boost/lexical_cast.hpp>

#include "string_utils.hh"

bool shiro::utils::strings::to_bool(std::string src) {
    try {
        return boost::lexical_cast<bool>(src);
    } catch (const boost::bad_lexical_cast &ex) {
        std::transform(src.begin(), src.end(), src.begin(), ::tolower);
        return src == "true";
    }
}

std::string shiro::utils::strings::to_string(bool src) {
    return src ? "true" : "false";
}
