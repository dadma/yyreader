/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class FoxitEMBSDK_EMBJavaSupport */

#ifndef _Included_FoxitEMBSDK_EMBJavaSupport
#define _Included_FoxitEMBSDK_EMBJavaSupport
#ifdef __cplusplus
extern "C" {
#endif
#undef FoxitEMBSDK_EMBJavaSupport_EMBJavaSupport_RESULT_SUCCESS
#define FoxitEMBSDK_EMBJavaSupport_EMBJavaSupport_RESULT_SUCCESS 0L
#undef FoxitEMBSDK_EMBJavaSupport_EMBJavaSupport_RESULT_MEMORY
#define FoxitEMBSDK_EMBJavaSupport_EMBJavaSupport_RESULT_MEMORY 1L
#undef FoxitEMBSDK_EMBJavaSupport_EMBJavaSupport_RESULT_ERROR
#define FoxitEMBSDK_EMBJavaSupport_EMBJavaSupport_RESULT_ERROR -1L
#undef FoxitEMBSDK_EMBJavaSupport_EMBJavaSupport_ANNOTTYPE_UNKNOWN
#define FoxitEMBSDK_EMBJavaSupport_EMBJavaSupport_ANNOTTYPE_UNKNOWN 0L

#undef FoxitEMBSDK_EMBJavaSupport_EMBJavaSupport_ANNOTTYPE_NOTE
#define FoxitEMBSDK_EMBJavaSupport_EMBJavaSupport_ANNOTTYPE_NOTE 1L
#undef FoxitEMBSDK_EMBJavaSupport_EMBJavaSupport_ANNOTTYPE_HIGHLIGHT
#define FoxitEMBSDK_EMBJavaSupport_EMBJavaSupport_ANNOTTYPE_HIGHLIGHT 2L
#undef FoxitEMBSDK_EMBJavaSupport_EMBJavaSupport_ANNOTTYPE_PENCIL
#define FoxitEMBSDK_EMBJavaSupport_EMBJavaSupport_ANNOTTYPE_PENCIL 3L
#undef FoxitEMBSDK_EMBJavaSupport_EMBJavaSupport_ANNOTTYPE_STAMP
#define FoxitEMBSDK_EMBJavaSupport_EMBJavaSupport_ANNOTTYPE_STAMP 4L
#undef FoxitEMBSDK_EMBJavaSupport_EMBJavaSupport_ANNOTTYPE_FILEATTACHMENT
#define FoxitEMBSDK_EMBJavaSupport_EMBJavaSupport_ANNOTTYPE_FILEATTACHMENT 5L
#undef FoxitEMBSDK_EMBJavaSupport_EMBJavaSupport_SAVEFLAG_INCREMENTAL
#define FoxitEMBSDK_EMBJavaSupport_EMBJavaSupport_SAVEFLAG_INCREMENTAL 1L
#undef FoxitEMBSDK_EMBJavaSupport_EMBJavaSupport_SVAEFLAG_NOORIGINAL
#define FoxitEMBSDK_EMBJavaSupport_EMBJavaSupport_SVAEFLAG_NOORIGINAL 2L

#undef FoxitEMBSDK_EMBJavaSupport_TIMER_EVENT_ID
#define FoxitEMBSDK_EMBJavaSupport_TIMER_EVENT_ID 10L

#undef FoxitEMBSDK_EMBJavaSupport_FXG_PT_LINETO
#define FoxitEMBSDK_EMBJavaSupport_FXG_PT_LINETO 2L
#undef FoxitEMBSDK_EMBJavaSupport_FXG_PT_MOVETO
#define FoxitEMBSDK_EMBJavaSupport_FXG_PT_MOVETO 6L
#undef FoxitEMBSDK_EMBJavaSupport_FXG_PT_ENDPATH
#define FoxitEMBSDK_EMBJavaSupport_FXG_PT_ENDPATH 8L
#undef FoxitEMBSDK_EMBJavaSupport_PSI_ACTION_DOWN
#define FoxitEMBSDK_EMBJavaSupport_PSI_ACTION_DOWN 1L
#undef FoxitEMBSDK_EMBJavaSupport_PSI_ACTION_UP
#define FoxitEMBSDK_EMBJavaSupport_PSI_ACTION_UP 2L
#undef FoxitEMBSDK_EMBJavaSupport_PSI_ACTION_MOVE
#define FoxitEMBSDK_EMBJavaSupport_PSI_ACTION_MOVE 3L
/*
 * Class:     FoxitEMBSDK EMBJavaSupport
 * Method:    FPDFDocLoad
 * Signature: (ILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFDocLoad
  (JNIEnv *, jclass, jint, jstring);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFDocClose
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFDocClose
  (JNIEnv *, jclass, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFDocGetPageCount
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFDocGetPageCount
  (JNIEnv *, jclass, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFPageLoad
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFPageLoad
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFPageClose
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFPageClose
  (JNIEnv *, jclass, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFPageStartParse
 * Signature: (III)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFPageStartParse
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFPageContinueParse
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFPageContinueParse
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFPagePageToDevicePoint
 * Signature: (IIIIIILFoxitEMBSDK/EMBJavaSupport/Point;)V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFPagePageToDevicePoint
  (JNIEnv *, jclass, jint, jint, jint, jint, jint, jint, jobject);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFPagePageToDevicePointF
 * Signature: (IIIIIILFoxitEMBSDK/EMBJavaSupport/PointF;)V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFPagePageToDevicePointF
  (JNIEnv *, jclass, jint, jint, jint, jint, jint, jint, jobject);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFTextLoadPage
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFTextLoadPage
  (JNIEnv *, jclass, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFTextCloseTextPage
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFTextCloseTextPage
  (JNIEnv *, jclass, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFTextFindStart
 * Signature: (ILjava/lang/String;JI)I
 */
 JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFTextFindStart
  (JNIEnv *, jclass, jint, jstring, jlong, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFTextFindNext
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFTextFindNext
  (JNIEnv *, jclass, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFTextFindPrev
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFTextFindPrev
  (JNIEnv *, jclass, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFTextGetSchResultIndex
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFTextGetSchResultIndex
  (JNIEnv *, jclass, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFTextGetSchCount
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFTextGetSchCount
  (JNIEnv *, jclass, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFTextFindClose
 * Signature: (I)I
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFTextFindClose
  (JNIEnv *, jclass, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFTextCountChars
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFTextCountChars
  (JNIEnv *, jclass, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFTextCountRects
 * Signature: (III)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFTextCountRects
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFTextGetRect
 * Signature: (II)LFoxitEMBSDK/EMBJavaSupport/RectangleF;
 */	

JNIEXPORT jobject JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFTextGetRect
  (JNIEnv *, jclass, jint , jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFTextGetText
 * Signature: (III)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFTextGetText
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFPagePageToDeviceRect
 * Signature: (IIIIIILFoxitEMBSDK/EMBJavaSupport/Rectangle;)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFPagePageToDeviceRect
  (JNIEnv *, jclass, jint, jint, jint, jint, jint, jint, jobject);
/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFRenderPageStart
 * Signature: (IIIIIIIILFoxitEMBSDK/EMBJavaSupport/Rectangle;I)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFRenderPageStart
  (JNIEnv *, jclass, jint, jint, jint, jint, jint, jint, jint, jint, jobject, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFRenderPageContinue
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFRenderPageContinue
  (JNIEnv *, jclass, jint, jint);
/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFPageDeviceToPageRect
 * Signature: (IIIIIILFoxitEMBSDK/EMBJavaSupport/Rectangle;)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFPageDeviceToPageRect
  (JNIEnv *, jclass, jint, jint, jint, jint, jint, jint, jobject);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFPageDeviceToPageRectF
 * Signature: (IIIIIILFoxitEMBSDK/EMBJavaSupport/RectangleF;)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFPageDeviceToPageRectF
  (JNIEnv *, jclass, jint, jint, jint, jint, jint, jint, jobject);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFPageDeviceToPagePointF
 * Signature: (IIIIIILFoxitEMBSDK/EMBJavaSupport/PointF;)V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFPageDeviceToPagePointF
  (JNIEnv *, jclass, jint, jint, jint, jint, jint, jint, jobject);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFPagePageToDeviceRectF
 * Signature: (IIIIIILFoxitEMBSDK/EMBJavaSupport/RectangleF;)V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFPagePageToDeviceRectF
  (JNIEnv *, jclass, jint, jint, jint, jint, jint, jint, jobject);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFPageGetSizeX
 * Signature: (I)F
 */
JNIEXPORT jfloat JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFPageGetSizeX
  (JNIEnv *, jclass, jint);
  
/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFPageGetSizeY
 * Signature: (I)F
 */
JNIEXPORT jfloat JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFPageGetSizeY
  (JNIEnv *, jclass, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FSInitLibrary
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FSInitLibrary
  (JNIEnv *, jclass, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FSDestroyLibrary
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FSDestroyLibrary
  (JNIEnv *, jclass);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FSMemInitFixedMemory
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FSMemInitFixedMemory
  (JNIEnv *, jclass, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FSMemDestroyMemory
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FSMemDestroyMemory
  (JNIEnv *, jclass);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FSBitmapCreate
 * Signature: (III[BI)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FSBitmapCreate
  (JNIEnv *, jclass, jint, jint, jint, jbyteArray, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FSBitmapDestroy
 * Signature: (I)I
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FSBitmapDestroy
  (JNIEnv *, jclass, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FSBitmapGetBuffer
 * Signature: (I)[B
 */
JNIEXPORT jbyteArray JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FSBitmapGetBuffer
  (JNIEnv *, jclass, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FSBitmapFillColor
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FSBitmapFillColor
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FSFontLoadGBCMap
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FSFontLoadGBCMap
  (JNIEnv *, jclass);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FSFontLoadGBExtCMap
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FSFontLoadGBExtCMap
  (JNIEnv *, jclass);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FSFontLoadCNSCMap
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FSFontLoadCNSCMap
  (JNIEnv *, jclass);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FSFontLoadKoreaCMap
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FSFontLoadKoreaCMap
  (JNIEnv *, jclass);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FSFontLoadJapanCMap
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FSFontLoadJapanCMap
  (JNIEnv *, jclass);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FSFontLoadJapanExtCMap
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FSFontLoadJapanExtCMap
  (JNIEnv *, jclass);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FSLoadJbig2Decoder
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FSLoadJbig2Decoder
  (JNIEnv *, jclass);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FSLoadJpeg2000Decoder
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FSLoadJpeg2000Decoder
  (JNIEnv *, jclass);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FSFileReadAlloc
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FSFileReadAlloc
  (JNIEnv *, jclass, jstring);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FSFileReadRelease
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FSFileReadRelease
  (JNIEnv *, jclass, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FSPauseHandlerAlloc
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FSPauseHandlerAlloc
  (JNIEnv *, jclass);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FSPauseHandlerRelease
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FSPauseHandlerRelease
  (JNIEnv *, jclass, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFFormFillerInfoAlloc
 * Signature: (LFoxitEMBSDK/EMBJavaSupport/CPDFFormFillerInfo;)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFFormFillerInfoAlloc
  (JNIEnv *, jclass, jobject);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFFormFillerInfoRelease
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFFormFillerInfoRelease
  (JNIEnv *, jclass, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFJsPlatformAlloc
 * Signature: (LFoxitEMBSDK/EMBJavaSupport/CPDFJsPlatform;)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFJsPlatformAlloc
  (JNIEnv *, jclass, jobject);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFJsPlatformRelease
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFJsPlatformRelease
  (JNIEnv *, jclass, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFFormFillerInfoSetJsPlatform
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFFormFillerInfoSetJsPlatform
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFJsPlatformSetFormFillerInfo
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFJsPlatformSetFormFillerInfo
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFDocInitFormFillEnviroument
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFDocInitFormFillEnviroument
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFDocExitFormFillEnviroument
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFDocExitFormFillEnviroument
  (JNIEnv *, jclass, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFFormFillOnAfterLoadPage
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFFormFillOnAfterLoadPage
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFFormFillDraw
 * Signature: (IIIIIIIII)V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFFormFillDraw
  (JNIEnv *, jclass, jint, jint, jint, jint, jint, jint, jint, jint, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFFormFillOnKillFocus
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFFormFillOnKillFocus
  (JNIEnv *, jclass, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFFormCreateInterForm
 * Signature: (IZ)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFFormCreateInterForm
  (JNIEnv *, jclass, jint, jboolean);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFFormReleaseInterForm
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFFormReleaseInterForm
  (JNIEnv *, jclass, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFFormExportToXML
 * Signature: (II)Z
 */
JNIEXPORT jboolean JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFFormExportToXML
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFFormImportFromXML
 * Signature: (II)Z
 */
JNIEXPORT jboolean JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFFormImportFromXML
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFFormFillUpdatForm
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFFormFillUpdatForm
  (JNIEnv *, jclass, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFFormFillOnMouseMove
 * Signature: (IIIDD)Z
 */
JNIEXPORT jboolean JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFFormFillOnMouseMove
  (JNIEnv *, jclass, jint, jint, jint, jdouble, jdouble);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFFormFillOnLButtonUp
 * Signature: (IIIDD)Z
 */
JNIEXPORT jboolean JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFFormFillOnLButtonUp
  (JNIEnv *, jclass, jint, jint, jint, jdouble, jdouble);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFFormFillOnLButtonDown
 * Signature: (IIIDD)Z
 */
JNIEXPORT jboolean JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFFormFillOnLButtonDown
  (JNIEnv *, jclass, jint, jint, jint, jdouble, jdouble);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFFormFillOnSetText
 * Signature: (IILjava/lang/String;I)Z
 */
JNIEXPORT jboolean JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFFormFillOnSetText
  (JNIEnv *, jclass, jint, jint, jstring, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFExecCallBack
 * Signature: (IZ)V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFExecCallBack
  (JNIEnv *, jclass, jint, jboolean);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFNoteInfoAlloc
 * Signature: (Ljava/lang/String;JILFoxitEMBSDK/EMBJavaSupport/RectangleF;Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFNoteInfoAlloc
  (JNIEnv *, jclass, jstring, jlong, jint, jobject, jstring,jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFNoteInfoRelease
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFNoteInfoRelease
  (JNIEnv *, jclass, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFPencilInfoAlloc
 * Signature: (Ljava/lang/String;JIZZII)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFPencilInfoAlloc
  (JNIEnv *, jclass, jstring, jlong, jint, jboolean, jboolean, jint, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFPencilInfoSetLineInfo
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFPencilInfoSetLineInfo
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFPencilInfoRelease
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFPencilInfoRelease
  (JNIEnv *, jclass, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFLineInfoAlloc
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFLineInfoAlloc
  (JNIEnv *, jclass, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFLineInfoSetPointInfo
 * Signature: (III[F)V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFLineInfoSetPointInfo
  (JNIEnv *, jclass, jint, jint, jint, jfloatArray);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFLineInfoRelease
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFLineInfoRelease
  (JNIEnv *, jclass, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFHighlightInfoAlloc
 * Signature: (Ljava/lang/String;JII)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFHighlightInfoAlloc
  (JNIEnv *, jclass, jstring, jlong, jint, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFHighlightSetQuads
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFHighlightSetQuads
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFHighlightInfoRelease
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFHighlightInfoRelease
  (JNIEnv *, jclass, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFQuadsInfoAlloc
 * Signature: (I[F)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFQuadsInfoAlloc
  (JNIEnv *, jclass, jint, jfloatArray);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFQuadsInfoRelease
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFQuadsInfoRelease
  (JNIEnv *, jclass, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFStampInfoAlloc
 * Signature: (Ljava/lang/String;JILFoxitEMBSDK/EMBJavaSupport/RectangleF;Ljava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFStampInfoAlloc
  (JNIEnv *, jclass, jstring, jlong, jint, jobject, jstring, jstring);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFStampInfoRelease
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFStampInfoRelease
  (JNIEnv *, jclass, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFFileAttachmentInfoAlloc
 * Signature: (Ljava/lang/String;JILFoxitEMBSDK/EMBJavaSupport/RectangleF;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFFileAttachmentInfoAlloc
  (JNIEnv *, jclass, jstring, jlong, jint, jobject, jstring);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFFileAttachmentInfoRelease
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFFileAttachmentInfoRelease
  (JNIEnv *, jclass, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFAnnotAdd
 * Signature: (III)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFAnnotAdd
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFAnnotDelete
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFAnnotDelete
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFAnnotGetCount
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFAnnotGetCount
  (JNIEnv *, jclass, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFAnnotGetIndexAtPos
 * Signature: (III)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFAnnotGetIndexAtPos
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFReflowAllocPage
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFReflowAllocPage
  (JNIEnv *, jclass);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFReflowStartParse
 * Signature: (IIIIII)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFReflowStartParse
  (JNIEnv *, jclass, jint, jint, jint, jint, jint, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFReflowGetPageHight
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFReflowGetPageHight
  (JNIEnv *, jclass, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFReflowGetPageWidth
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFReflowGetPageWidth
  (JNIEnv *, jclass, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFReflowStartRender
 * Signature: (IIIIIIII)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFReflowStartRender
  (JNIEnv *, jclass, jint, jint, jint, jint, jint, jint, jint, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFReflowSetDitherBits
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFReflowSetDitherBits
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFPageGetPageHeight
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFPageGetPageHeight
  (JNIEnv *, jclass, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFPageGetPageWidth
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFPageGetPageWidth
  (JNIEnv *, jclass, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFRenderPageGetRenderProgress
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFRenderPageGetRenderProgress
  (JNIEnv *, jclass, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FSEMBPauseHandlerAlloc
 * Signature: (LFoxitEMBSDK/EMBJavaSupport/CEMBPause;)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FSEMBPauseHandlerAlloc
  (JNIEnv *, jclass, jobject);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FSUnlock
 * Signature: (Ljava/lang/String;Ljava/lang/String;)V
 */
 
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FSUnlock
  (JNIEnv *, jclass, jstring, jstring);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FSSetFileFontmap
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FSSetFileFontmap
  (JNIEnv *, jclass, jstring);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPSIInitAppCallback
 * Signature: (LFoxitEMBSDK/EMBJavaSupport/CPDFPSI;)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPSIInitAppCallback
  (JNIEnv *, jclass, jobject);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPSIReleaseAppCallback
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPSIReleaseAppCallback
  (JNIEnv *, jclass, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPSIInitEnvironment
 * Signature: (IZ)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPSIInitEnvironment
  (JNIEnv *, jclass, jint, jboolean);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPSIDestroyEnvironment
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPSIDestroyEnvironment
  (JNIEnv *, jclass, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPSIInitCanvas
 * Signature: (III)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPSIInitCanvas
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPSISetInkColor
 * Signature: (IJ)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPSISetInkColor
  (JNIEnv *, jclass, jint, jlong);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPSISetInkDiameter
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPSISetInkDiameter
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPSIAddPoint
 * Signature: (IFFFI)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPSIAddPoint
  (JNIEnv *, jclass, jint, jfloat, jfloat, jfloat, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPSIRender
 * Signature: (IIIIIIII)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPSIRender
  (JNIEnv *, jclass, jint, jint, jint, jint, jint, jint, jint, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFPage_GeneratePSIAnnot
 * Signature: (IILFoxitEMBSDK/EMBJavaSupport/Rectangle;FFFF)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFPage_1GeneratePSIAnnot
  (JNIEnv *, jclass, jint, jint, jobject, jfloat, jfloat, jfloat, jfloat);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFSecurityCreateSecurityHandler
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFSecurityCreateSecurityHandler
  (JNIEnv *, jclass);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFSecurityCreatePKISecurityHandler
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFSecurityCreatePKISecurityHandler
  (JNIEnv *, jclass);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFSecurityRegisterHandler
 * Signature: (Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFSecurityRegisterHandler
  (JNIEnv *, jclass, jstring, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFSecurityUnRegisterHandler
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFSecurityUnRegisterHandler
  (JNIEnv *, jclass, jstring);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFSecurityCustomEncrypt
 * Signature: (ILjava/lang/String;ILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFSecurityCustomEncrypt
  (JNIEnv *, jclass, jint, jstring, jint, jstring);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFSecurityRemove
 * Signature: (ILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFSecurityRemove
  (JNIEnv *, jclass, jint, jstring);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFSecurityGetPasswordLevel
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFSecurityGetPasswordLevel
  (JNIEnv *, jclass, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFSecurityCreateEnvelopes
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFSecurityCreateEnvelopes
  (JNIEnv *, jclass);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFSecurityAddEnvelope
 * Signature: (I[BI)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFSecurityAddEnvelope
  (JNIEnv *, jclass, jint, jbyteArray, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFSecurityCertEncrypt
 * Signature: (IIZI[BILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFSecurityCertEncrypt
  (JNIEnv *, jclass, jint, jint, jboolean, jint, jbyteArray, jint, jstring);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFSecurityDestroyEnvelopes
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFSecurityDestroyEnvelopes
  (JNIEnv *, jclass, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFDocSaveAs
 * Signature: (IIII)I
 */
 
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFDocSaveAs
  (JNIEnv *, jclass, jint, jint, jint, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFSecurityDestroySecurityHandler
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFSecurityDestroySecurityHandler
  (JNIEnv *, jclass, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFSecurityDestroyPKISecurityHandler
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFSecurityDestroyPKISecurityHandler
  (JNIEnv *, jclass, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FSFileWriteAlloc
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FSFileWriteAlloc
  (JNIEnv *, jclass, jstring);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FSFileWriteRelease
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FSFileWriteRelease
  (JNIEnv *, jclass, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFSignatureAdd
 * Signature: (IILFoxitEMBSDK/EMBJavaSupport/RectangleF;)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFSignatureAdd
  (JNIEnv *, jclass, jint, jint, jobject);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFSignatureSetSigner
 * Signature: (ILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFSignatureSetSigner
  (JNIEnv *, jclass, jint, jstring);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFSignatureSetDN
 * Signature: (ILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFSignatureSetDN
  (JNIEnv *, jclass, jint, jstring);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFSignatureSetDate
 * Signature: (ILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFSignatureSetDate
  (JNIEnv *, jclass, jint, jstring);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFSignatureSetText
 * Signature: (ILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFSignatureSetText
  (JNIEnv *, jclass, jint, jstring);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFSignatureSetReason
 * Signature: (ILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFSignatureSetReason
  (JNIEnv *, jclass, jint, jstring);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFSignatureSetLocation
 * Signature: (ILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFSignatureSetLocation
  (JNIEnv *, jclass, jint, jstring);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFSignatureSetOption
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFSignatureSetOption
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFSignatureSetImageType
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFSignatureSetImageType
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFSignatureSetImageData
 * Signature: (ILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFSignatureSetImageData
  (JNIEnv *, jclass, jint, jstring);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFSignatureAllocHandler
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFSignatureAllocHandler
  (JNIEnv *, jclass);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFSignatureReleaseHandler
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFSignatureReleaseHandler
  (JNIEnv *, jclass, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFSignatureSign
 * Signature: (IIII)V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFSignatureSign
  (JNIEnv *, jclass, jint, jint, jint, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFSignatureDelete
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFSignatureDelete
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFSignatureCount
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFSignatureCount
  (JNIEnv *, jclass, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFSignatureGetByIndex
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFSignatureGetByIndex
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFSignatureVerify
 * Signature: (III)Z
 */
JNIEXPORT jboolean JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFSignatureVerify
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFSignatureIsSigned
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFSignatureIsSigned
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFSignatureClear
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFSignatureClear
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFSignatureRemove
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_FoxitEMBSDK_EMBJavaSupport_FPDFSignatureRemove
  (JNIEnv *, jclass, jint, jint);

#ifdef __cplusplus
}
#endif
#endif
