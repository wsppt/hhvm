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

#ifndef __GENERATED_cls_ReflectionMethod_hf3cea799__
#define __GENERATED_cls_ReflectionMethod_hf3cea799__

#include <cls/ReflectionMethod.fw.h>
#include <cls/ReflectionFunctionAbstract.h>
#include <cls/Reflector.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/reflection.php line 1571 */
FORWARD_DECLARE_CLASS(ReflectionMethod);
extern const ObjectStaticCallbacks cw_ReflectionMethod;
class c_ReflectionMethod : public c_ReflectionFunctionAbstract {
  public:

  // Properties
  Variant m_name;
  Variant m_class;

  // Class Map
  DECLARE_CLASS_NO_SWEEP(ReflectionMethod, ReflectionMethod, ReflectionFunctionAbstract)
  static const ClassPropTable os_prop_table;
  c_ReflectionMethod() : m_name(Variant::nullInit), m_class(Variant::nullInit) {}
  public: void t___construct(Variant v_cls, Variant v_name = NAMSTR(s_sys_ss00000000, ""));
  public: c_ReflectionMethod *create(CVarRef v_cls, CVarRef v_name = NAMVAR(s_sys_svs00000000, ""));
  public: String t___tostring();
  public: static Variant t_export(Variant v_cls, CVarRef v_name, CVarRef v_ret);
  public: Variant t_invoke(int num_args, CVarRef v_obj, Array args = Array());
  public: Variant t_invokeargs(CVarRef v_obj, CVarRef v_args);
  public: Variant t_isfinal();
  public: Variant t_isabstract();
  public: bool t_ispublic();
  public: bool t_isprivate();
  public: bool t_isprotected();
  public: Variant t_isstatic();
  public: bool t_isconstructor();
  public: bool t_isdestructor();
  public: Variant t_getmodifiers();
  public: Variant t_getclosure();
  public: Variant t_getdeclaringclass();
  DECLARE_METHOD_INVOKE_HELPERS(isprivate);
  DECLARE_METHOD_INVOKE_HELPERS(__tostring);
  DECLARE_METHOD_INVOKE_HELPERS(isprotected);
  DECLARE_METHOD_INVOKE_HELPERS(isstatic);
  DECLARE_METHOD_INVOKE_HELPERS(getdeclaringclass);
  DECLARE_METHOD_INVOKE_HELPERS(isconstructor);
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  DECLARE_METHOD_INVOKE_HELPERS(isfinal);
  DECLARE_METHOD_INVOKE_HELPERS(invokeargs);
  DECLARE_METHOD_INVOKE_HELPERS(getmodifiers);
  DECLARE_METHOD_INVOKE_HELPERS(export);
  DECLARE_METHOD_INVOKE_HELPERS(invoke);
  DECLARE_METHOD_INVOKE_HELPERS(ispublic);
  DECLARE_METHOD_INVOKE_HELPERS(isdestructor);
  DECLARE_METHOD_INVOKE_HELPERS(getclosure);
  DECLARE_METHOD_INVOKE_HELPERS(isabstract);
};
ObjectData *coo_ReflectionMethod() NEVER_INLINE;
extern const int64 q_ReflectionMethod$$IS_STATIC;
extern const int64 q_ReflectionMethod$$IS_PUBLIC;
extern const int64 q_ReflectionMethod$$IS_PROTECTED;
extern const int64 q_ReflectionMethod$$IS_PRIVATE;
extern const int64 q_ReflectionMethod$$IS_ABSTRACT;
extern const int64 q_ReflectionMethod$$IS_FINAL;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_ReflectionMethod_hf3cea799__
