## Game Boy Emulator

Emulating the original Game Boy in an isolated process on Windows 10. Possible support for other Operating Systems (OSX, various distros of Linux) in the future. To facilitate this, must write program in such a way to completely decouple OS-specific code from details of emulator itself, using the wisdom of Uncle Bob to achieve this. 

OS functionality must be 'plugged-in' to core Game Boy emulator as we do not want to restrict ourselves to one platform as requirements WILL change in the future and must prepare ourselves for that inevitability.

Implementation Language: Decided on C++
Frameworks and libraries: Undecided, need to research and filter options based on our needs
Execution environment: Must compile to monolithic executable taking a single argument, being the path to a valid Game Boy ROM file