#ifndef KONAN_SSD_MODULE_H
#define KONAN_SSD_MODULE_H
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
typedef bool            SSD_MODULE_KBoolean;
#else
typedef _Bool           SSD_MODULE_KBoolean;
#endif
typedef unsigned short     SSD_MODULE_KChar;
typedef signed char        SSD_MODULE_KByte;
typedef short              SSD_MODULE_KShort;
typedef int                SSD_MODULE_KInt;
typedef long long          SSD_MODULE_KLong;
typedef unsigned char      SSD_MODULE_KUByte;
typedef unsigned short     SSD_MODULE_KUShort;
typedef unsigned int       SSD_MODULE_KUInt;
typedef unsigned long long SSD_MODULE_KULong;
typedef float              SSD_MODULE_KFloat;
typedef double             SSD_MODULE_KDouble;
typedef void*              SSD_MODULE_KNativePtr;
struct SSD_MODULE_KType;
typedef struct SSD_MODULE_KType SSD_MODULE_KType;

typedef struct {
  SSD_MODULE_KNativePtr pinned;
} SSD_MODULE_kref_com_common_Request;
typedef struct {
  SSD_MODULE_KNativePtr pinned;
} SSD_MODULE_kref_com_common_User;
typedef struct {
  SSD_MODULE_KNativePtr pinned;
} SSD_MODULE_kref_com_common_Rol;
typedef struct {
  SSD_MODULE_KNativePtr pinned;
} SSD_MODULE_kref_kotlin_Any;
typedef struct {
  SSD_MODULE_KNativePtr pinned;
} SSD_MODULE_kref_com_common_Status;
typedef struct {
  SSD_MODULE_KNativePtr pinned;
} SSD_MODULE_kref_com_common_Type;


typedef struct {
  /* Service functions. */
  void (*DisposeStablePointer)(SSD_MODULE_KNativePtr ptr);
  void (*DisposeString)(const char* string);
  SSD_MODULE_KBoolean (*IsInstance)(SSD_MODULE_KNativePtr ref, const SSD_MODULE_KType* type);

  /* User functions. */
  struct {
    struct {
      struct {
        struct {
          struct {
            SSD_MODULE_KType* (*_type)(void);
            SSD_MODULE_kref_com_common_Request (*Request)(SSD_MODULE_KInt id, const char* from, const char* to, SSD_MODULE_KInt status, SSD_MODULE_KInt idSupervisor, const char* description, SSD_MODULE_KInt type, SSD_MODULE_kref_com_common_User creator);
            SSD_MODULE_KInt (*get_id)(SSD_MODULE_kref_com_common_Request thiz);
            const char* (*get_from)(SSD_MODULE_kref_com_common_Request thiz);
            const char* (*get_to)(SSD_MODULE_kref_com_common_Request thiz);
            SSD_MODULE_KInt (*get_status)(SSD_MODULE_kref_com_common_Request thiz);
            SSD_MODULE_KInt (*get_idSupervisor)(SSD_MODULE_kref_com_common_Request thiz);
            const char* (*get_description)(SSD_MODULE_kref_com_common_Request thiz);
            SSD_MODULE_KInt (*get_type)(SSD_MODULE_kref_com_common_Request thiz);
            SSD_MODULE_kref_com_common_User (*get_creator)(SSD_MODULE_kref_com_common_Request thiz);
          } Request;
          struct {
            SSD_MODULE_KType* (*_type)(void);
            SSD_MODULE_kref_com_common_Rol (*Rol)(SSD_MODULE_KInt id, const char* name);
            SSD_MODULE_KInt (*get_id)(SSD_MODULE_kref_com_common_Rol thiz);
            const char* (*get_name)(SSD_MODULE_kref_com_common_Rol thiz);
            SSD_MODULE_KBoolean (*equals)(SSD_MODULE_kref_com_common_Rol thiz, SSD_MODULE_kref_kotlin_Any other);
            SSD_MODULE_KInt (*hashCode)(SSD_MODULE_kref_com_common_Rol thiz);
            const char* (*toString)(SSD_MODULE_kref_com_common_Rol thiz);
            SSD_MODULE_KInt (*component1)(SSD_MODULE_kref_com_common_Rol thiz);
            const char* (*component2)(SSD_MODULE_kref_com_common_Rol thiz);
            SSD_MODULE_kref_com_common_Rol (*copy)(SSD_MODULE_kref_com_common_Rol thiz, SSD_MODULE_KInt id, const char* name);
          } Rol;
          struct {
            SSD_MODULE_KType* (*_type)(void);
            SSD_MODULE_kref_com_common_Status (*Status)(SSD_MODULE_KInt id, const char* name);
            SSD_MODULE_KInt (*get_id)(SSD_MODULE_kref_com_common_Status thiz);
            const char* (*get_name)(SSD_MODULE_kref_com_common_Status thiz);
            SSD_MODULE_KBoolean (*equals)(SSD_MODULE_kref_com_common_Status thiz, SSD_MODULE_kref_kotlin_Any other);
            SSD_MODULE_KInt (*hashCode)(SSD_MODULE_kref_com_common_Status thiz);
            const char* (*toString)(SSD_MODULE_kref_com_common_Status thiz);
            SSD_MODULE_KInt (*component1)(SSD_MODULE_kref_com_common_Status thiz);
            const char* (*component2)(SSD_MODULE_kref_com_common_Status thiz);
            SSD_MODULE_kref_com_common_Status (*copy)(SSD_MODULE_kref_com_common_Status thiz, SSD_MODULE_KInt id, const char* name);
          } Status;
          struct {
            SSD_MODULE_KType* (*_type)(void);
            SSD_MODULE_kref_com_common_Type (*Type)(SSD_MODULE_KInt id, const char* name);
            SSD_MODULE_KInt (*get_id)(SSD_MODULE_kref_com_common_Type thiz);
            const char* (*get_name)(SSD_MODULE_kref_com_common_Type thiz);
            SSD_MODULE_KBoolean (*equals)(SSD_MODULE_kref_com_common_Type thiz, SSD_MODULE_kref_kotlin_Any other);
            SSD_MODULE_KInt (*hashCode)(SSD_MODULE_kref_com_common_Type thiz);
            const char* (*toString)(SSD_MODULE_kref_com_common_Type thiz);
            SSD_MODULE_KInt (*component1)(SSD_MODULE_kref_com_common_Type thiz);
            const char* (*component2)(SSD_MODULE_kref_com_common_Type thiz);
            SSD_MODULE_kref_com_common_Type (*copy)(SSD_MODULE_kref_com_common_Type thiz, SSD_MODULE_KInt id, const char* name);
          } Type;
          struct {
            SSD_MODULE_KType* (*_type)(void);
            SSD_MODULE_kref_com_common_User (*User)(SSD_MODULE_KInt id, const char* email, const char* password, const char* name, const char* lastname, SSD_MODULE_KInt rol);
            SSD_MODULE_KInt (*get_id)(SSD_MODULE_kref_com_common_User thiz);
            const char* (*get_email)(SSD_MODULE_kref_com_common_User thiz);
            const char* (*get_password)(SSD_MODULE_kref_com_common_User thiz);
            const char* (*get_name)(SSD_MODULE_kref_com_common_User thiz);
            const char* (*get_lastname)(SSD_MODULE_kref_com_common_User thiz);
            SSD_MODULE_KInt (*get_rol)(SSD_MODULE_kref_com_common_User thiz);
            SSD_MODULE_KBoolean (*equals)(SSD_MODULE_kref_com_common_User thiz, SSD_MODULE_kref_kotlin_Any other);
            SSD_MODULE_KInt (*hashCode)(SSD_MODULE_kref_com_common_User thiz);
            const char* (*toString)(SSD_MODULE_kref_com_common_User thiz);
            SSD_MODULE_KInt (*component1)(SSD_MODULE_kref_com_common_User thiz);
            const char* (*component2)(SSD_MODULE_kref_com_common_User thiz);
            const char* (*component3)(SSD_MODULE_kref_com_common_User thiz);
            const char* (*component4)(SSD_MODULE_kref_com_common_User thiz);
            const char* (*component5)(SSD_MODULE_kref_com_common_User thiz);
            SSD_MODULE_KInt (*component6)(SSD_MODULE_kref_com_common_User thiz);
            SSD_MODULE_kref_com_common_User (*copy)(SSD_MODULE_kref_com_common_User thiz, SSD_MODULE_KInt id, const char* email, const char* password, const char* name, const char* lastname, SSD_MODULE_KInt rol);
          } User;
        } common;
      } com;
    } root;
  } kotlin;
} SSD_MODULE_ExportedSymbols;
extern SSD_MODULE_ExportedSymbols* SSD_MODULE_symbols(void);
#ifdef __cplusplus
}  /* extern "C" */
#endif
#endif  /* KONAN_SSD_MODULE_H */
