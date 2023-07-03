#include <iostream>
#include "instrument_detector.hpp"

int main() {
    std::cout << "Thanks for trying InstinctAI" << std::endl;

    InstrumentDetector detector;

    std::string mode;
    std::cout << "Choose mode: (1) Training (2) Detection: ";
    std::cin >> mode;

    if (mode == "1") {
        std::string instrumentDbPath;
        std::cout << "Enter the path to the instrument database: ";
        std::cin >> instrumentDbPath;

        detector.train(instrumentDbPath);
        std::cout << "Training completed successfully!" << std::endl;
    } else if (mode == "2") {
        std::string modelPath;
        std::cout << "Enter the path to the saved model: ";
        std::cin >> modelPath;

        std::string audioFilePath;
        std::cout << "Enter the path to the audio file: ";
        std::cin >> audioFilePath;

        detector.guess(modelPath, audioFilePath);
        std::cout << "Detection completed successfully! Check the results.txt file." << std::endl;
    } else {
        std::cout << "Invalid mode selected. Exiting..." << std::endl;
    }

    return 0;
}
