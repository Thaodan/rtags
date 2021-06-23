/* This file is part of RTags (https://github.com/Andersbakken/rtags).

   RTags is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   RTags is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with RTags.  If not, see <https://www.gnu.org/licenses/>. */

#ifndef IncludePathJob_h
#define IncludePathJob_h

#include <memory>

#include "QueryJob.h"
#include "Location.h"

class Project;
class QueryMessage;

class IncludePathJob : public QueryJob
{
public:
    IncludePathJob(const Location loc, const std::shared_ptr<QueryMessage> &query, List<std::shared_ptr<Project>> &&projects);
protected:
    virtual int execute() override;
private:
    const Location location;
};

#endif
