// Name: [SJC] Simple Junk Code | Github: U5H5 | File: junk.h
#pragma once
#include <windows.h>
#include <cstdint>
#include <iostream>

volatile int _seed = 0x1337;

#define SIMPLE_JUNK_CODE(x) do { \
    volatile int _v1 = 1.111; \
    volatile float _v2 = 2.222; \
    volatile double _v3 = 3.333; \
    volatile long long _v4 = 4.444; \
    volatile short _arr1[128]; \
    volatile char _arr2[256]; \
    volatile int _jmp1[32]; \
    volatile int _jmp2[64] = {0}; \
    volatile int _jmp3 = 0; \
    volatile int _l = 0; \
    volatile int _b_ = 0; \
    for (volatile int _a_ = 0; _a_ < 100; ++_a_) { \
        _v1 ^= (_a_ * _seed); \
        if (((_v1 ^ _a_) & (_b_ + 1)) % 5 == 0) { \
            _v3 += _v2 / (2.0 + _a_); \
            if (((_v1 + _a_ * _b_) % (_b_ + 2)) == 0) { \
                _v4 ^= (_seed << (_a_ % 15)); \
                switch ((_v1 ^ (_a_ * _b_)) % 20) { \
                    case 0: _arr1[_a_ % 64] = _b_; goto label_1; \
                    case 1: _v1 = ~_v1; goto label_2; \
                    case 2: _v2 = -_v2; if (_a_ % 3) goto label_3; break; \
                    case 3: label_1: _v3 *= 0.5; _v4 ^= _a_; break; \
                    case 4: _v4 >>= 1; if (_v1 & 1) goto label_4; break; \
                    case 5: _arr2[(_a_ + _b_) % 128] = _a_ ^ _b_; goto label_5; \
                    case 6: label_2: _v1 = _v1 | (1 << (_a_ % 16)); _v2 *= 1.1f; break; \
                    case 7: _v2 += _v3 / _seed; if (_b_ % 2) goto label_1; break; \
                    case 8: label_3: _v3 = (_v3 > _seed) ? 0 : _v3 * 2; _v1 += _seed; break; \
                    case 9: _v4 = (_v4 * 7) % _seed; goto label_6; \
                    case 10: label_4: _arr1[(_a_ * _b_) % 64] = _a_ + _b_; _v3 -= _v2; break; \
                    case 11: _v1 = _v1 & ~(1 << (_b_ % 16)); if (_a_ > 50) goto label_2; break; \
                    case 12: label_5: _v2 *= (_a_ % 2) ? _seed : 16; _v4 <<= 1; break; \
                    case 13: _v3 += sin((double)_a_ / (double)(_b_ + 1)); goto label_7; \
                    case 14: label_6: _v4 ^= (_seed << (_b_ % 8)); _v1 = _v1 ^ _v4; break; \
                    case 15: _arr1[(_a_ + _b_ * 3) % 64] = _a_ * _b_; goto label_8; \
                    case 16: label_7: _v2 = _v2 / 1.5f; _v3 *= _a_; break; \
                    case 17: label_8: _v1 ^= (_b_ * _seed); _v4 += _seed; break; \
                    case 18: _arr2[_a_ % 128] = (_v1 >> 8) & 0xFF; goto label_1; \
                    case 19: _v3 = _v3 * (_a_ / 100.0) + _v2; break; \
                    case 20: _v1 = _v1 & ~(1 << (_b_ % 11)); goto label_1; \
                } \
            } \
        } \
    } \
    x; \
} while (0)