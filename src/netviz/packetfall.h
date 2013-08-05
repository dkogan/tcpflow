#ifndef PACKETFALL_H
#define PACKETFALL_H

#include "plot_view.h"

class packetfall {
public:
    packetfall() {}

    void ingest_packet(const be13::packet_info &pi);
    void render(cairo_t *cr, const plot_view::bounds_t &bounds);
};

#endif
