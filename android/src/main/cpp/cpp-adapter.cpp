#include <jni.h>
#include "PdfviewerOnLoad.hpp"

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM* vm, void*) {
  return margelo::nitro::pdfviewer::initialize(vm);
}
