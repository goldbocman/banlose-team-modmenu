APP_ABI := armeabi-v7a
#APP_PLATFORM := android-18
APP_STL := c++_static
APP_OPTIM := release
APP_LDFLAGS := -llog
APP_THIN_ARCHIVE := true
APP_PIE 		:= true
APP_CPPFLAGS := -std=c++14 -fno-rtti -fno-exceptions -DNDEBUG

APP_BUILD_SCRIPT := Android.mk
