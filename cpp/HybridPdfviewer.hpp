#pragma once
#include <vector>
#include "HybridPdfviewerSpec.hpp"

namespace margelo::nitro::pdfviewer {
class HybridPdfviewer : public HybridPdfviewerSpec {
    public:
        HybridPdfviewer() : HybridObject(TAG), HybridPdfviewerSpec() {}
       
        double sum(double a, double b) override;
    };
} // namespace margelo::nitro::pdfviewer
