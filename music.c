#include <stdio.h>
#include <string.h>

#define MAX_SONGS 10

typedef struct {
    char title[50];
    char artist[50];
    char mood[20];
} Song;

void displayPlaylist(Song songs[], int count) {
    printf("\n--- Your Playlist ---\n");
    for (int i = 0; i < count; i++) {
        printf("%d. %s by %s\n", i + 1, songs[i].title, songs[i].artist);
    }
}

int main() {
    Song songs[MAX_SONGS] = {
        {"Happy", "Pharrell Williams", "happy"},
        {"Someone Like You", "Adele", "sad"},
        {"Uptown Funk", "Mark Ronson ft. Bruno Mars", "energetic"},
        {"Chasing Cars", "Snow Patrol", "romantic"},
        {"Lose Yourself", "Eminem", "motivational"},
        {"Shape of You", "Ed Sheeran", "happy"},
        {"Fix You", "Coldplay", "sad"},
        {"Can't Stop the Feeling!", "Justin Timberlake", "energetic"},
        {"Perfect", "Ed Sheeran", "romantic"},
        {"Stronger", "Kanye West", "motivational"}
    };

    char mood[20];
    int found = 0;

    printf("Welcome to the Mood-Based Music Playlist Generator!\n");
    printf("Enter your mood (happy, sad, energetic, romantic, motivational): ");
    scanf("%s", mood);

    printf("\nSearching for songs that match your mood: %s...\n", mood);

    for (int i = 0; i < MAX_SONGS; i++) {
        if (strcmp(songs[i].mood, mood) == 0) {
            found = 1;
            displayPlaylist(&songs[i], 1);
        }
    }

    if (!found) {
        printf("No songs found for the mood: %s\n", mood);
    }

    return 0;
}