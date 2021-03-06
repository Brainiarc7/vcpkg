#pragma once
#include <vector>
#include "MachineType.h"
#include "filesystem_fs.h"

namespace vcpkg::COFFFileReader
{
    struct dll_info
    {
        MachineType machine_type;
    };

    struct lib_info
    {
        std::vector<MachineType> machine_types;
    };

    dll_info read_dll(const fs::path& path);

    lib_info read_lib(const fs::path& path);
}
