#ifndef INSTRUMENT_DETECTOR_HPP
#define INSTRUMENT_DETECTOR_HPP

#include <string>
#include <vector>
  
class InstrumentDetector
{
public:
    InstrumentDetector();

    void train(const std::string& instrumentDbPath);

    void guess(const std::string& modelPath, const std::string& audioFilePath);

private:
    // Private members
};

#endif // INSTRUMENT_DETECTOR_HPP

