
#pragma once
#include <torch/extension.h>

at::Tensor radon_cpu(const at::Tensor& input,
                    const at::Tensor& theta);