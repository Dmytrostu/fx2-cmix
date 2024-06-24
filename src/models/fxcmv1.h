//#ifndef FXCM_H
//#define FXCM_H

#include "model.h"
#include <vector>
#include <memory>

namespace fxcmv1 {
  class Predictor{

public:
  Predictor();
  int p() ;
  void update();
};
}

class FXCM : public Model {
 public:
  FXCM();
  const std::valarray<float>& Predict() const;
  unsigned int NumOutputs();
  void Perceive(int bit);
  void ByteUpdate() {};

 private:
  std::unique_ptr<fxcmv1::Predictor> predictor_;
};

//#endif
