// TODO ToG: Add license header

#ifndef MARIAN_VERSION_H
#define MARIAN_VERSION_H

#define  MARIAN_VERSION_MAJOR 1
#define  MARIAN_VERSION_MINOR 0
#define  MARIAN_VERSION_PATCH 0

#define __STRINGIFY(x) #x
#define __STRINGIFY__(x) __STRINGIFY(x)
#define MARIAN_DRIVER_VERSION_STRING \
    __STRINGIFY__(MARIAN_VERSION_MAJOR) "." \
    __STRINGIFY__(MARIAN_VERSION_MINOR) "." \
    __STRINGIFY__(MARIAN_VERSION_PATCH)

#endif // MARIAN_VERSION_H
