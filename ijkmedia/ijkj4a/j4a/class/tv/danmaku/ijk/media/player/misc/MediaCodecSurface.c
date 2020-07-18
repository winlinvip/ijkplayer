/*
 * Copyright (C) 2015 Zhang Rui <bbcallen@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * https://github.com/Bilibili/jni4android
 * This file is automatically generated by jni4android, do not modify.
 */

#include "MediaCodecSurface.h"

typedef struct J4AC_tv_danmaku_ijk_media_player_misc_MediaCodecSurface {
    jclass id;

    jmethodID method_getSurface;
    jmethodID method_getSurfaceTexture;
    jmethodID method_updateTexImage;
    jmethodID method_attachToGLContext;
    jmethodID method_detachFromGLContext;
    jmethodID method_release;
} J4AC_tv_danmaku_ijk_media_player_misc_MediaCodecSurface;
static J4AC_tv_danmaku_ijk_media_player_misc_MediaCodecSurface class_J4AC_tv_danmaku_ijk_media_player_misc_MediaCodecSurface;

jobject J4AC_tv_danmaku_ijk_media_player_misc_MediaCodecSurface__getSurface(JNIEnv *env, jobject thiz)
{
    return (*env)->CallObjectMethod(env, thiz, class_J4AC_tv_danmaku_ijk_media_player_misc_MediaCodecSurface.method_getSurface);
}

jobject J4AC_tv_danmaku_ijk_media_player_misc_MediaCodecSurface__getSurface__catchAll(JNIEnv *env, jobject thiz)
{
    jobject ret_object = J4AC_tv_danmaku_ijk_media_player_misc_MediaCodecSurface__getSurface(env, thiz);
    if (J4A_ExceptionCheck__catchAll(env) || !ret_object) {
        return NULL;
    }

    return ret_object;
}

jobject J4AC_tv_danmaku_ijk_media_player_misc_MediaCodecSurface__getSurface__asGlobalRef__catchAll(JNIEnv *env, jobject thiz)
{
    jobject ret_object   = NULL;
    jobject local_object = J4AC_tv_danmaku_ijk_media_player_misc_MediaCodecSurface__getSurface__catchAll(env, thiz);
    if (J4A_ExceptionCheck__catchAll(env) || !local_object) {
        ret_object = NULL;
        goto fail;
    }

    ret_object = J4A_NewGlobalRef__catchAll(env, local_object);
    if (!ret_object) {
        ret_object = NULL;
        goto fail;
    }

fail:
    J4A_DeleteLocalRef__p(env, &local_object);
    return ret_object;
}

jobject J4AC_tv_danmaku_ijk_media_player_misc_MediaCodecSurface__getSurfaceTexture(JNIEnv *env, jobject thiz)
{
    return (*env)->CallObjectMethod(env, thiz, class_J4AC_tv_danmaku_ijk_media_player_misc_MediaCodecSurface.method_getSurfaceTexture);
}

jobject J4AC_tv_danmaku_ijk_media_player_misc_MediaCodecSurface__getSurfaceTexture__catchAll(JNIEnv *env, jobject thiz)
{
    jobject ret_object = J4AC_tv_danmaku_ijk_media_player_misc_MediaCodecSurface__getSurfaceTexture(env, thiz);
    if (J4A_ExceptionCheck__catchAll(env) || !ret_object) {
        return NULL;
    }

    return ret_object;
}

jobject J4AC_tv_danmaku_ijk_media_player_misc_MediaCodecSurface__getSurfaceTexture__asGlobalRef__catchAll(JNIEnv *env, jobject thiz)
{
    jobject ret_object   = NULL;
    jobject local_object = J4AC_tv_danmaku_ijk_media_player_misc_MediaCodecSurface__getSurfaceTexture__catchAll(env, thiz);
    if (J4A_ExceptionCheck__catchAll(env) || !local_object) {
        ret_object = NULL;
        goto fail;
    }

    ret_object = J4A_NewGlobalRef__catchAll(env, local_object);
    if (!ret_object) {
        ret_object = NULL;
        goto fail;
    }

fail:
    J4A_DeleteLocalRef__p(env, &local_object);
    return ret_object;
}

void J4AC_tv_danmaku_ijk_media_player_misc_MediaCodecSurface__updateTexImage(JNIEnv *env, jobject thiz, jfloatArray mtx)
{
    (*env)->CallVoidMethod(env, thiz, class_J4AC_tv_danmaku_ijk_media_player_misc_MediaCodecSurface.method_updateTexImage, mtx);
}

void J4AC_tv_danmaku_ijk_media_player_misc_MediaCodecSurface__updateTexImage__catchAll(JNIEnv *env, jobject thiz, jfloatArray mtx)
{
    J4AC_tv_danmaku_ijk_media_player_misc_MediaCodecSurface__updateTexImage(env, thiz, mtx);
    J4A_ExceptionCheck__catchAll(env);
}

void J4AC_tv_danmaku_ijk_media_player_misc_MediaCodecSurface__attachToGLContext(JNIEnv *env, jobject thiz, jint texName, jint width, jint height)
{
    (*env)->CallVoidMethod(env, thiz, class_J4AC_tv_danmaku_ijk_media_player_misc_MediaCodecSurface.method_attachToGLContext, texName, width, height);
}

void J4AC_tv_danmaku_ijk_media_player_misc_MediaCodecSurface__attachToGLContext__catchAll(JNIEnv *env, jobject thiz, jint texName, jint width, jint height)
{
    J4AC_tv_danmaku_ijk_media_player_misc_MediaCodecSurface__attachToGLContext(env, thiz, texName, width, height);
    J4A_ExceptionCheck__catchAll(env);
}

void J4AC_tv_danmaku_ijk_media_player_misc_MediaCodecSurface__detachFromGLContext(JNIEnv *env, jobject thiz)
{
    (*env)->CallVoidMethod(env, thiz, class_J4AC_tv_danmaku_ijk_media_player_misc_MediaCodecSurface.method_detachFromGLContext);
}

void J4AC_tv_danmaku_ijk_media_player_misc_MediaCodecSurface__detachFromGLContext__catchAll(JNIEnv *env, jobject thiz)
{
    J4AC_tv_danmaku_ijk_media_player_misc_MediaCodecSurface__detachFromGLContext(env, thiz);
    J4A_ExceptionCheck__catchAll(env);
}

void J4AC_tv_danmaku_ijk_media_player_misc_MediaCodecSurface__release(JNIEnv *env, jobject thiz)
{
    (*env)->CallVoidMethod(env, thiz, class_J4AC_tv_danmaku_ijk_media_player_misc_MediaCodecSurface.method_release);
}

void J4AC_tv_danmaku_ijk_media_player_misc_MediaCodecSurface__release__catchAll(JNIEnv *env, jobject thiz)
{
    J4AC_tv_danmaku_ijk_media_player_misc_MediaCodecSurface__release(env, thiz);
    J4A_ExceptionCheck__catchAll(env);
}

int J4A_loadClass__J4AC_tv_danmaku_ijk_media_player_misc_MediaCodecSurface(JNIEnv *env)
{
    int         ret                   = -1;
    const char *J4A_UNUSED(name)      = NULL;
    const char *J4A_UNUSED(sign)      = NULL;
    jclass      J4A_UNUSED(class_id)  = NULL;
    int         J4A_UNUSED(api_level) = 0;

    if (class_J4AC_tv_danmaku_ijk_media_player_misc_MediaCodecSurface.id != NULL)
        return 0;

    sign = "tv/danmaku/ijk/media/player/misc/MediaCodecSurface";
    class_J4AC_tv_danmaku_ijk_media_player_misc_MediaCodecSurface.id = J4A_FindClass__asGlobalRef__catchAll(env, sign);
    if (class_J4AC_tv_danmaku_ijk_media_player_misc_MediaCodecSurface.id == NULL)
        goto fail;

    class_id = class_J4AC_tv_danmaku_ijk_media_player_misc_MediaCodecSurface.id;
    name     = "getSurface";
    sign     = "()Landroid/view/Surface;";
    class_J4AC_tv_danmaku_ijk_media_player_misc_MediaCodecSurface.method_getSurface = J4A_GetMethodID__catchAll(env, class_id, name, sign);
    if (class_J4AC_tv_danmaku_ijk_media_player_misc_MediaCodecSurface.method_getSurface == NULL)
        goto fail;

    class_id = class_J4AC_tv_danmaku_ijk_media_player_misc_MediaCodecSurface.id;
    name     = "getSurfaceTexture";
    sign     = "()Landroid/graphics/SurfaceTexture;";
    class_J4AC_tv_danmaku_ijk_media_player_misc_MediaCodecSurface.method_getSurfaceTexture = J4A_GetMethodID__catchAll(env, class_id, name, sign);
    if (class_J4AC_tv_danmaku_ijk_media_player_misc_MediaCodecSurface.method_getSurfaceTexture == NULL)
        goto fail;

    class_id = class_J4AC_tv_danmaku_ijk_media_player_misc_MediaCodecSurface.id;
    name     = "updateTexImage";
    sign     = "([F)V";
    class_J4AC_tv_danmaku_ijk_media_player_misc_MediaCodecSurface.method_updateTexImage = J4A_GetMethodID__catchAll(env, class_id, name, sign);
    if (class_J4AC_tv_danmaku_ijk_media_player_misc_MediaCodecSurface.method_updateTexImage == NULL)
        goto fail;

    class_id = class_J4AC_tv_danmaku_ijk_media_player_misc_MediaCodecSurface.id;
    name     = "attachToGLContext";
    sign     = "(III)V";
    class_J4AC_tv_danmaku_ijk_media_player_misc_MediaCodecSurface.method_attachToGLContext = J4A_GetMethodID__catchAll(env, class_id, name, sign);
    if (class_J4AC_tv_danmaku_ijk_media_player_misc_MediaCodecSurface.method_attachToGLContext == NULL)
        goto fail;

    class_id = class_J4AC_tv_danmaku_ijk_media_player_misc_MediaCodecSurface.id;
    name     = "detachFromGLContext";
    sign     = "()V";
    class_J4AC_tv_danmaku_ijk_media_player_misc_MediaCodecSurface.method_detachFromGLContext = J4A_GetMethodID__catchAll(env, class_id, name, sign);
    if (class_J4AC_tv_danmaku_ijk_media_player_misc_MediaCodecSurface.method_detachFromGLContext == NULL)
        goto fail;

    class_id = class_J4AC_tv_danmaku_ijk_media_player_misc_MediaCodecSurface.id;
    name     = "release";
    sign     = "()V";
    class_J4AC_tv_danmaku_ijk_media_player_misc_MediaCodecSurface.method_release = J4A_GetMethodID__catchAll(env, class_id, name, sign);
    if (class_J4AC_tv_danmaku_ijk_media_player_misc_MediaCodecSurface.method_release == NULL)
        goto fail;

    J4A_ALOGD("J4ALoader: OK: '%s' loaded\n", "tv.danmaku.ijk.media.player.misc.MediaCodecSurface");
    ret = 0;
fail:
    return ret;
}