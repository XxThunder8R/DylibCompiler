#include <iostream>
#include "Unity/IUnityInterface.h"

// This is the function that Unity or other applications can call.
extern "C" {
    __attribute__((visibility("default"))) void ToggleInvisibility(bool isInvisible) {
        // This will print to the console during testing.
        std::cout << "Toggling Invisibility: " << isInvisible << std::endl;

        // Example: Toggle a visibility property here (if you are controlling Unity objects).
        // This is a mock example, replace with actual Unity-related code.
        if (isInvisible) {
            // Set the object to invisible
            std::cout << "Making object invisible." << std::endl;
        } else {
            // Set the object to visible
            std::cout << "Making object visible." << std::endl;
        }
    }
}
