/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/
// @generated by HipHop Compiler

#ifndef __GENERATED_cls_ReflectionProperty_h1f224fe7__
#define __GENERATED_cls_ReflectionProperty_h1f224fe7__

#include <cls/ReflectionProperty.fw.h>
#include <cls/Reflector.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/reflection.php line 1319 */
FORWARD_DECLARE_CLASS(ReflectionProperty);
extern const ObjectStaticCallbacks cw_ReflectionProperty;
class c_ReflectionProperty : public ExtObjectData {
  public:

  // Properties
  Variant m_info;
  Variant m_name;
  Variant m_class;

  // Class Map
  DECLARE_CLASS_NO_SWEEP(ReflectionProperty, ReflectionProperty, ObjectData)
  static const ClassPropTable os_prop_table;
  c_ReflectionProperty() : m_info(Variant::nullInit), m_name(Variant::nullInit), m_class(Variant::nullInit) {}
  public: void t___construct(Variant v_cls, Variant v_name);
  public: c_ReflectionProperty *create(CVarRef v_cls, CVarRef v_name);
  public: String t___tostring();
  public: static Variant t_export(Variant v_cls, CVarRef v_name, CVarRef v_ret);
  public: Variant t_getname();
  public: bool t_ispublic();
  public: bool t_isprivate();
  public: bool t_isprotected();
  public: Variant t_isstatic();
  public: Variant t_isdefault();
  public: void t_setaccessible(CVarRef v_accessible);
  public: Variant t_getmodifiers();
  public: Variant t_getvalue(CVarRef v_obj = null_variant);
  public: void t_setvalue(CVarRef v_obj, CVarRef v_value);
  public: Variant t_getdeclaringclass();
  public: Variant t_getdoccomment();
  DECLARE_METHOD_INVOKE_HELPERS(isprivate);
  DECLARE_METHOD_INVOKE_HELPERS(getvalue);
  DECLARE_METHOD_INVOKE_HELPERS(__tostring);
  DECLARE_METHOD_INVOKE_HELPERS(isprotected);
  DECLARE_METHOD_INVOKE_HELPERS(isstatic);
  DECLARE_METHOD_INVOKE_HELPERS(getdeclaringclass);
  DECLARE_METHOD_INVOKE_HELPERS(isdefault);
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  DECLARE_METHOD_INVOKE_HELPERS(getmodifiers);
  DECLARE_METHOD_INVOKE_HELPERS(export);
  DECLARE_METHOD_INVOKE_HELPERS(ispublic);
  DECLARE_METHOD_INVOKE_HELPERS(setaccessible);
  DECLARE_METHOD_INVOKE_HELPERS(getdoccomment);
  DECLARE_METHOD_INVOKE_HELPERS(setvalue);
  DECLARE_METHOD_INVOKE_HELPERS(getname);
};
ObjectData *coo_ReflectionProperty() NEVER_INLINE;
extern const int64 q_ReflectionProperty$$IS_STATIC;
extern const int64 q_ReflectionProperty$$IS_PUBLIC;
extern const int64 q_ReflectionProperty$$IS_PROTECTED;
extern const int64 q_ReflectionProperty$$IS_PRIVATE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_ReflectionProperty_h1f224fe7__
