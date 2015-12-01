#pragma once

#include <iostream>

#include "OutputWriter.hpp"

namespace Decompiler {
class StreamWriter :
        public OutputWriter
{
public:
    StreamWriter(std::ostream& stream);
    virtual ~StreamWriter();

    virtual void writeLine(const std::string& line);

protected:
    std::ostream& m_Stream;
};
}
