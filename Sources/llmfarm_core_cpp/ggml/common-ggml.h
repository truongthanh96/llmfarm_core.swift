#pragma once

#include "../ggml/ggml_dadbed9.h"

#include <fstream>
#include <vector>
#include <string>

enum ggml_dadbed9_ftype ggml_dadbed9_parse_ftype(const char * str);

void ggml_dadbed9_print_ftypes(FILE * fp = stderr);

bool ggml_dadbed9_common_quantize_0(
        std::ifstream & finp,
        std::ofstream & fout,
        const ggml_dadbed9_ftype ftype,
        const std::vector<std::string> & to_quant,
        const std::vector<std::string> & to_skip);
