
MODINSTDIR = transitions

include(../modules.pri)

OTHER_FILES = transitions.xl                    \
              doc/transitions.doxy.h            \
              doc/transitions.ddd.txt           \
              doc/transitions_fr.ddd.txt        \

SHADERS =     CrossZoom.fs                      \
              Dissolve.fs                       \
              DreamZoom.fs                      \
              GlitchMemories.fs                 \
              Kaleidoscope.fs                   \
              PageCurl.fs                       \
              PinWheel.fs                       \
              PotLeaf.fs                        \
              RandomSquares.fs                  \
              SimpleFlip.fs                     \
              Slide.fs                          \
              SquareSwipe.fs                    \
              $$NULL

shaders.path  = $$MODINSTPATH
shaders.files = $$SHADERS


INSTALLS    += thismod_icon shaders
INSTALLS    -= thismod_bin


QMAKE_SUBSTITUTES = doc/Doxyfile.in
QMAKE_DISTCLEAN = doc/Doxyfile
DOXYFILE = doc/Doxyfile
DOXYLANG = en,fr
DOXYADDFILES = doc/transitions.ddd doc/transitions_fr.ddd
include(../modules_doc.pri)
