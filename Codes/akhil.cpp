#include <iostream>
#include <cstdlib>  // For system function

int main() {
    std::string playlistUrl = "https://www.youtube.com/playlist?list=PLxCzCOWd7aiGFBD2-2joCpWOLUrDLvVV_";
    std::string command = "youtube-dl --format mp4 --resolution 720p --yes-playlist " + playlistUrl;

    int result = system(command.c_str());

    if (result == 0) {
        std::cout << "Playlist downloaded successfully in 720p resolution.\n";
    } else {
        std::cerr << "Error downloading playlist.\n";
    }

    return 0;
}
