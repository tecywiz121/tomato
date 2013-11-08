/* Copyright 2013 Sam Wilson
 *
 * This file is part of Tomato.
 *
 * Tomato is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Tomato is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Tomato.  If not, see <http://www.gnu.org/licenses/>.
 */
#include <iostream>
#include "jit/jit-plus.h"

#include "page.hpp"
#include "page_function.hpp"

using std::cout;
using std::endl;

using namespace tomato;

int main(int, char**)
{
    jit_context ctx;
    page test(1);
    test.permissions(page::page_flags::EXECUTABLE);
}
