//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2015 Retargetable Decompiler <info@retdec.com>
//

#include <netinet/in.h>
#include <signal.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>

/* ------------- Structures ------------- */

struct _sockaddr {
    int16_t e0;
    int32_t e1[14];
};

/* -------- Function Prototypes --------- */

int32_t checkInput(int8_t * a1, void (*a2)(int32_t));
int32_t grue(int8_t * a1);
int32_t checkEm(int8_t * str);

/* ------------- Functions -------------- */

// Address range: 0x804875c - 0x80487c7
int32_t checkInput(int8_t * a1, void (*a2)(int32_t)) {
    // 0x804875c
    if (*a1 == 49 || *a1 == 50 || *a1 == 51) {
        // 0x8048780
        // branch -> 0x80487c6
        // 0x80487c6
        return (int32_t)*a1 - 48;
    }
    int32_t fd = (int32_t)a2; // 0x80487a4
    write(fd, "Invalid entry.  Not a value 1 - 3\n", 34);
    close(fd);
    exit(0);
    // UNREACHABLE
}

// Address range: 0x80487c8 - 0x80487fb
int32_t grue(int8_t * a1) {
    int32_t fd = (int32_t)a1; // 0x80487de
    write(fd, "You are eaten by a grue\n", 24);
    close(fd);
    exit(0);
    // UNREACHABLE
}

// Address range: 0x8048800 - 0x804882a
int32_t checkEm(int8_t * str) {
    // 0x8048800
    return strstr(str, "/shh/bin") != NULL;
}

// Address range: 0x804882b - 0x804936f
int main(int argc, char ** argv) {
    struct _sockaddr v1; // bp-68
    // bb
    v1 = (struct _sockaddr){
        .e0 = 0
    };
    socket(AF_INET, SOCK_STREAM, IPPROTO_IP);
    htonl(0);
    htons(0x270f); // 9999
    int32_t sock; // 0x80488c4
    setsockopt(sock, SO_DEBUG, 2, (int32_t *)1, 4);
    int32_t addr_len; // 0x80488d3
    int32_t sock2; // 0x80488e9
    bind(sock2, (struct _sockaddr *)&v1.e1[3], addr_len);
    int32_t sock3; // 0x8048900
    listen(sock3, 5);
    signal(SIGSTOP, SIG_IGN);
    // branch -> 0x8048923
    while (true) {
        // 0x8048923
        puts("waiting");
        int32_t sock4; // 0x8048950
        accept(sock4, &v1, &v1.e1[7]);
        int32_t fd66; // 0x8049356
        if (fork() == 0) {
            // 0x8048973
            int32_t fd; // 0x8048983
            write(fd, "Welcome warrior.  What is your name?\n", 37);
            int32_t fd2; // 0x80489a2
            read(fd2, "", 1024);
            int32_t fd3; // 0x80489c1
            write(fd3, "You wake up in a cave.  You have no recollection of how you got here.", 69);
            int32_t fd4; // 0x80489e0
            write(fd4, "You have 3 options:\n1. Wait here for something to happen.\n2. Go deeper into the cave.\n", 86);
            int32_t fd5; // 0x80489ff
            write(fd5, "3. Exit the cave.\nPlease make a choice 1 - 3: ", 46);
            int32_t fd6; // 0x8048a1e
            read(fd6, "", 2);
            int32_t v2; // 0x8048a2d
            int32_t fd7; // 0x8048a5d
            if (checkInput("", (void (*)(int32_t))v2) == 3) {
                // 0x8048a4d
                write(fd7, "The sun stings your eyes as you emerge from the darkness of the cave.", 69);
                int32_t fd8; // 0x8048a7c
                write(fd8, "Ahead of you are three paths.\n1. An overgrown path through the woods.\n", 70);
                int32_t fd9; // 0x8048a9b
                write(fd9, "2. A steep path up a mountainside.\n3. A path through some flowers leading towards a hut\n", 88);
                int32_t fd10; // 0x8048aba
                write(fd10, "Please make a choice 1 - 3: ", 28);
                int32_t fd11; // 0x8048ad9
                read(fd11, "", 2);
                int32_t v3; // 0x8048ae8
                int32_t fd12; // 0x8048b18
                int32_t fd65; // 0x804932f
                if (checkInput("", (void (*)(int32_t))v3) == 2) {
                    // 0x8048b08
                    write(fd12, "You reach the top of the mountain.  Ahead of you are:\n", 54);
                    int32_t fd13; // 0x8048b37
                    write(fd13, "1. A strange looking hut.\n2. Another cave.\n", 43);
                    int32_t fd14; // 0x8048b56
                    write(fd14, "3. A decrepit looking bridge.\n", 30);
                    int32_t fd15; // 0x8048b75
                    write(fd15, "Please make a choice 1 - 3: ", 28);
                    int32_t fd16; // 0x8048b94
                    read(fd16, "", 3);
                    int32_t v4; // 0x8048ba3
                    int32_t fd17; // 0x8048bd3
                    if (checkInput("", (void (*)(int32_t))v4) == 3) {
                        // 0x8048bc3
                        write(fd17, "You cross the bridge with nary a troll or ridiculous riddle to stop you.\n", 73);
                        int32_t fd18; // 0x8048bf2
                        write(fd18, "Suddenly a crazy Wizard appears from thin air.\n He's casting a spell!  You must act quickly\n", 92);
                        int32_t fd19; // 0x8048c11
                        write(fd19, "1. Dodge to the left.\n2. Duck\n3. Dip behind a nearby boulder.\n4. Dive under the bridge.\n", 88);
                        int32_t fd20; // 0x8048c30
                        write(fd20, "5. Dodge to the right.\n", 23);
                        int32_t fd21; // 0x8048c4f
                        write(fd21, "Please make a choice 1 - 5: ", 28);
                        int32_t fd22; // 0x8048c6e
                        read(fd22, "", 3);
                        int32_t v5; // 0x8048ca7
                        int32_t fd23; // 0x8048cd7
                        if (checkInput("", (void (*)(int32_t))v5) == 2) {
                            // 0x8048cc7
                            write(fd23, "You duck as a beam of ice shoots overhead.\n", 50);
                            int32_t fd24; // 0x8048cf6
                            write(fd24, "You grab and throw a large rock in the direction of the wizard.", 63);
                            int32_t fd25; // 0x8048d15
                            write(fd25, "It goes high and you're sure you missed.\nBut, it knocks the wizards crown from his head.", 88);
                            int32_t fd26; // 0x8048d34
                            write(fd26, "Adventurer, the wizard exclaim's.\nYou've saved me.  For that crown is cursed and causes me to do", 96);
                            int32_t fd27; // 0x8048d53
                            write(fd27, "\nThe now friendly looking wizard begins to approach, what do you do?", 68);
                            int32_t fd28; // 0x8048d72
                            write(fd28, "\n.Gethmhatl.2 na tak\n.Rnaa!", 54);
                            int32_t fd29; // 0x8048d91
                            write(fd29, "Please make a choice 1 - 5: ", 28);
                            int32_t fd30; // 0x8048db0
                            read(fd30, "", 3);
                            int8_t * str;
                            int32_t v6; // 0x8048dbf
                            if (checkInput("", (void (*)(int32_t))v6) == 1) {
                                // 0x8048ddf
                                snprintf(str, 1024, "%s", "");
                                if (checkEm(str) == 1) {
                                    // 0x8048e1b
                                    int32_t fd31; // 0x8048e2b
                                    write(fd31, "A booming voice echoes around you.  'We do not take kindly", 58);
                                    int32_t fd32; // 0x8048e4a
                                    write(fd32, " to cheaters in this land.  The ground swallows you...and then...\n", 66);
                                    int32_t v7; // 0x8048e59
                                    grue((int8_t *)v7);
                                    // branch -> 0x8048e68
                                }
                                // 0x8048e68
                                int32_t fd33; // 0x8048e78
                                write(fd33, "Hail friend!. I am ", 19);
                                int32_t nbyte; // 0x8048e87
                                int32_t fd34; // 0x8048e9a
                                write(fd34, str, nbyte);
                                int32_t fd35; // 0x8048eb9
                                write(fd35, "\nMight I ask your name?\nYou extend your arm in a sign of peace.", 64);
                                int32_t fd36; // 0x8048ed8
                                write(fd36, "The last thing you hear on this earthly plane is the man proclaim:\n", 67);
                                int32_t fd37; // 0x8048ef7
                                write(fd37, "I am Rogktan!  King of the grue!\nWell, that and your own bloodcurdling screams.", 79);
                                int32_t v8; // 0x8048f06
                                grue((int8_t *)v8);
                                // branch -> 0x804932f
                            } else {
                                // 0x8048f1a
                                int32_t v9; // 0x8048f1a
                                int32_t fd38; // 0x8048f4a
                                if (checkInput("", (void (*)(int32_t))v9) == 2) {
                                    // 0x8048f3a
                                    write(fd38, "Your instincts tell you something is amiss, and they've never lead you astray before.\n", 86);
                                    int32_t fd39; // 0x8048f69
                                    write(fd39, "You plunge your sword into the man's chest.  His face contorts as his body crumples.\n", 85);
                                    int32_t fd40; // 0x8048f88
                                    write(fd40, "In amazement, you watch as the man's form changes to that of a large and hideous grue!\n", 87);
                                    int32_t fd41; // 0x8048fa7
                                    write(fd41, "In your childhood you'd heard tale of the King of the Grue.  A vicious and fearsome beast,\n", 91);
                                    int32_t fd42; // 0x8048fc6
                                    write(fd42, " capable of changing his appearance at will.\nYou ", 49);
                                    int32_t fd43; // 0x804900b
                                    write(fd43, str, snprintf(str, 1024, ""));
                                    int32_t fd44; // 0x804902a
                                    write(fd44, " have defeated the legendary King of the Grue!\nAll at once here a fearful shriek.", 81);
                                    int32_t fd45; // 0x8049049
                                    write(fd45, " An unholy cacophony of sound emanates from all directions.  You feel the force of the ", 87);
                                    int32_t fd46; // 0x8049068
                                    write(fd46, "noise shaking the very earth beneath your feet.\nSuddenly, you see an army of grue barrelling ", 93);
                                    int32_t fd47; // 0x8049087
                                    write(fd47, "toward your position.  You must think fast.  Someone must defeat this horde of terrors!\n", 88);
                                    int32_t fd48; // 0x80490a6
                                    write(fd48, "What do you do:\n", 16);
                                    int32_t fd49; // 0x80490c5
                                    write(fd49, "1. Charge headlong into the fray!\n2. Cast a meteor spell you just remembered you know\n", 86);
                                    int32_t fd50; // 0x80490e4
                                    write(fd50, "3. Sit and wait for you inevitable fate.\n4. Stand at a distance and fire arrows into the mob.\n", 94);
                                    int32_t fd51; // 0x8049103
                                    write(fd51, "5. Berserker Rage!\n6. Play a song on your lute to soothe the beasts.\n", 69);
                                    int32_t fd52; // 0x8049122
                                    write(fd52, "7. Call forth a dragon!\n8. Run!\n9. Beg for your life.\n10. Parlay.\n", 66);
                                    int32_t fd53; // 0x8049141
                                    write(fd53, "11. Claim lordship over the grue horde!\n12. Fisticuffs.\n13. Beard magic...\n", 75);
                                    int32_t fd54; // 0x8049160
                                    write(fd54, "14. Scream like a small child.\n15. Call forth your own army.\n16. Vanish\n", 72);
                                    int32_t fd55; // 0x804917f
                                    write(fd55, "17. Suddenly remember this is exactly how that old gypsy woman said you'd die...\n", 81);
                                    int32_t fd56; // 0x804919e
                                    write(fd56, "18. Invoke the power of Grayskull!\n19. Join the grue army.\n20. Kill them with your mind.\n", 89);
                                    int32_t fd57; // 0x80491bd
                                    write(fd57, "21. Call the GM a cheater, take your 2 liter of Mr. Pibb, and go home.\n22. Cry.\n", 80);
                                    int32_t fd58; // 0x80491dc
                                    write(fd58, "23. Kick ass and chew bubblegum...wait, you're all out of bubblegum.\n24. Pull out your boomstick!\n", 98);
                                    int32_t fd59; // 0x80491fb
                                    write(fd59, "25. Cast a spell of invincibility.\n26. Call forth the spirits of your ancestors!\n", 81);
                                    int32_t fd60; // 0x804921a
                                    write(fd60, "28. Cast Burning Hands.\n29. Roll for initiative.\n30. Unsheathe your holiest of swords, Gruesbane!", 97);
                                    int32_t fd61; // 0x8049239
                                    write(fd61, " Use Gruesbane to cut a path through the horde to grue General.  Upon defeating him surely the horde will disband...\n", 117);
                                    int32_t fd62; // 0x8049258
                                    read(fd62, "", 3);
                                    int32_t v10; // 0x8049267
                                    grue((int8_t *)v10);
                                    // branch -> 0x804932f
                                } else {
                                    // 0x804927b
                                    if (checkInput("", (void (*)(int32_t))fd38) == 3) {
                                        // 0x804929b
                                        int32_t fd63; // 0x80492ab
                                        write(fd63, "In your blind panic you become lost in the woods.  You wander for what seems like an eternity.\n", 95);
                                        int32_t fd64; // 0x80492ca
                                        write(fd64, "Until, at last...\n", 18);
                                        int32_t v11; // 0x80492d9
                                        grue((int8_t *)v11);
                                        // branch -> 0x804932f
                                    }
                                }
                                // 0x804932f
                                close(fd65);
                                exit(0);
                                // UNREACHABLE
                                // branch -> 0x804934a
                              lab_0x40224c0:
                                // 0x804934a
                                puts("got new connection");
                                close(fd66);
                                // branch -> 0x8048923
                                continue;
                            }
                          lab_0x4023af0:
                            // 0x804932f
                            close(fd65);
                            exit(0);
                            // UNREACHABLE
                            // branch -> 0x804934a
                            goto lab_0x40224c0;
                        } else {
                            // 0x80492ea
                            grue((int8_t *)fd23);
                            // branch -> 0x804932f
                            goto lab_0x4023af0;
                        }
                      lab_0x4025430:
                        // 0x804932f
                        close(fd65);
                        exit(0);
                        // UNREACHABLE
                        // branch -> 0x804934a
                        goto lab_0x40224c0;
                    } else {
                        // 0x80492fb
                        grue((int8_t *)fd17);
                        // branch -> 0x804932f
                        goto lab_0x4025430;
                    }
                  lab_0x4026a30:
                    // 0x804932f
                    close(fd65);
                    exit(0);
                    // UNREACHABLE
                    // branch -> 0x804934a
                    goto lab_0x40224c0;
                } else {
                    // 0x804930c
                    grue((int8_t *)fd12);
                    // branch -> 0x804932f
                    goto lab_0x4026a30;
                }
              lab_0x4027fa0:
                // 0x804932f
                close(fd65);
                exit(0);
                // UNREACHABLE
                // branch -> 0x804934a
                goto lab_0x40224c0;
            } else {
                // 0x804931d
                grue((int8_t *)fd7);
                // branch -> 0x804932f
                goto lab_0x4027fa0;
            }
        }
        // 0x804934a
        puts("got new connection");
        close(fd66);
        // branch -> 0x8048923
    }
}

/* --------- External Functions --------- */

// int accept(int socket, struct sockaddr *restrict address, socklen_t *restrict address_len)
// int bind(int socket, const struct sockaddr *address, socklen_t address_len)
// int close(int)
// void exit (int)
// pid_t fork ()
// uint32_t htonl(uint32_t hostlong)
// uint16_t htons(uint16_t hostshort)
// int listen(int socket, int backlog)
// int puts (const char *)
// ssize_t read(int fildes, void *buf, size_t nbyte)
// int setsockopt(int sockfd, int level, int optname, const void *optval, socklen_t optlen)
// sighandler_t signal(int signum, sighandler_t handler)
// int snprintf (char *restrict, size_t, const char *restrict, ...)
// int socket(int domain, int type, int protocol)
// char * strstr (const char *, const char *)
// ssize_t write(int fildes, const void *buf, size_t nbyte)

/* ---------- Meta-Information ---------- */

// Detected compiler: gcc 4.7.2
// Detected functions: 4 (4 in front-end)
// Decompiler release: v1.9 (Feb  5 2015)
// Decompilation date: May 26 2015 03:46:33