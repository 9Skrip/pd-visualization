#pragma once
#include "w_dft_visu.h"
#include <memory>

class W_DftWaterfall : public W_DftVisu {
 public:
  W_DftWaterfall(int x, int y, int w, int h);
  ~W_DftWaterfall();

  void update_data(
      const std::complex<float> *spec, unsigned n, float fs,
      bool redraw = true) override;

  void draw() override;
  int handle(int event) override;

 private:
  struct Impl;
  std::unique_ptr<Impl> P;
};
