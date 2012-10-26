
MODINSTDIR = transitions

include(../modules.pri)

OTHER_FILES = transitions.xl \
              doc/transitions.doxy.h \
              doc/transitions.ddd \
              doc/transitions_fr.ddd

INSTALLS    += thismod_icon
INSTALLS    -= thismod_bin


QMAKE_SUBSTITUTES = doc/Doxyfile.in
QMAKE_DISTCLEAN = doc/Doxyfile
DOXYFILE = doc/Doxyfile
DOXYLANG = en,fr
include(../modules_doc.pri)
