--- environ.h	2018-02-15 21:32:10.473832459 +0800
+++ environ.h.new	2018-02-15 23:28:22.691322000 +0800
@@ -97,10 +97,10 @@
  *  non-functioning stubs to be linked.
  */
 #if !defined(HAVE_CONFIG_H) && !defined(ANDROID_BUILD) && !defined(OS_IOS)
-#define  HAVE_LIBJPEG     1
-#define  HAVE_LIBTIFF     1
-#define  HAVE_LIBPNG      1
-#define  HAVE_LIBZ        1
+#define  HAVE_LIBJPEG     0
+#define  HAVE_LIBTIFF     0
+#define  HAVE_LIBPNG      0
+#define  HAVE_LIBZ        0
 #define  HAVE_LIBGIF      0
 #define  HAVE_LIBUNGIF    0
 #define  HAVE_LIBWEBP     0
