#pragma once

namespace machina::zmachine
{
    // Dynamic memory bounds
    constexpr unsigned int DYNAMIC_MEMORY_START = 0;

    // Static memory bounds
    constexpr unsigned int STATIC_MEMORY_START_OFFSET = 0xE;
    constexpr unsigned int MAX_STATIC_MEMORY_END = 0xFFFF;

    // High memory bounds
    constexpr unsigned int HIGH_MEMORY_START_OFFSET = 0x4;

    constexpr unsigned int HEADER_SIZE = 64;
}