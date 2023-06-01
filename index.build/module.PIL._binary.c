/* Generated code for Python module 'PIL._binary'
 * created by Nuitka version 1.0.2
 *
 * This code is in part copyright 2022 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_PIL$_binary" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_PIL$_binary;
PyDictObject *moduledict_PIL$_binary;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[45];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[45];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("PIL._binary"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 45; i++) {
            mod_consts_hash[i] = DEEP_HASH(mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_PIL$_binary(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 45; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_755e0c60e0838de0393727a0ce4e9044;
static PyCodeObject *codeobj_2147ed2a1c9b8467caf18bae52dd3700;
static PyCodeObject *codeobj_a951899dbb8c15b3daf02a0ca803c298;
static PyCodeObject *codeobj_fb6f089c045e3591427e65f6f70a106d;
static PyCodeObject *codeobj_b4012528e6208fbe46195d91a3b3c3cc;
static PyCodeObject *codeobj_13f22f008eb7cb5f05ffc1f600b9a4fa;
static PyCodeObject *codeobj_57716e00835405c5ac11cabd55db5621;
static PyCodeObject *codeobj_26f1ff2ff6904fe0dc29a4b1fff9ea25;
static PyCodeObject *codeobj_3775f2913fe39cffeb89f6784a04c239;
static PyCodeObject *codeobj_b6bd3601a13b9893347c6b1892f2b612;
static PyCodeObject *codeobj_c00e0032053f2bef2ced8b8454670190;
static PyCodeObject *codeobj_12de3af6fe6df306756f1947f2d2c49f;
static PyCodeObject *codeobj_2355704ef3b51932eb205ede3dfef92d;
static PyCodeObject *codeobj_140c52a0318c7470c2d74ad09b6f6d67;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[18]; CHECK_OBJECT(module_filename_obj);
    codeobj_755e0c60e0838de0393727a0ce4e9044 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[40], NULL, NULL, 0, 0, 0);
    codeobj_2147ed2a1c9b8467caf18bae52dd3700 = MAKE_CODEOBJECT(module_filename_obj, 80, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[34], mod_consts[41], NULL, 2, 0, 0);
    codeobj_a951899dbb8c15b3daf02a0ca803c298 = MAKE_CODEOBJECT(module_filename_obj, 30, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[29], mod_consts[41], NULL, 2, 0, 0);
    codeobj_fb6f089c045e3591427e65f6f70a106d = MAKE_CODEOBJECT(module_filename_obj, 84, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[35], mod_consts[41], NULL, 2, 0, 0);
    codeobj_b4012528e6208fbe46195d91a3b3c3cc = MAKE_CODEOBJECT(module_filename_obj, 60, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[32], mod_consts[41], NULL, 2, 0, 0);
    codeobj_13f22f008eb7cb5f05ffc1f600b9a4fa = MAKE_CODEOBJECT(module_filename_obj, 21, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[26], mod_consts[42], NULL, 1, 0, 0);
    codeobj_57716e00835405c5ac11cabd55db5621 = MAKE_CODEOBJECT(module_filename_obj, 97, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[38], mod_consts[43], NULL, 1, 0, 0);
    codeobj_26f1ff2ff6904fe0dc29a4b1fff9ea25 = MAKE_CODEOBJECT(module_filename_obj, 89, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[36], mod_consts[43], NULL, 1, 0, 0);
    codeobj_3775f2913fe39cffeb89f6784a04c239 = MAKE_CODEOBJECT(module_filename_obj, 101, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[39], mod_consts[43], NULL, 1, 0, 0);
    codeobj_b6bd3601a13b9893347c6b1892f2b612 = MAKE_CODEOBJECT(module_filename_obj, 93, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[37], mod_consts[43], NULL, 1, 0, 0);
    codeobj_c00e0032053f2bef2ced8b8454670190 = MAKE_CODEOBJECT(module_filename_obj, 25, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[27], mod_consts[43], NULL, 1, 0, 0);
    codeobj_12de3af6fe6df306756f1947f2d2c49f = MAKE_CODEOBJECT(module_filename_obj, 50, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[31], mod_consts[41], NULL, 2, 0, 0);
    codeobj_2355704ef3b51932eb205ede3dfef92d = MAKE_CODEOBJECT(module_filename_obj, 40, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[30], mod_consts[41], NULL, 2, 0, 0);
    codeobj_140c52a0318c7470c2d74ad09b6f6d67 = MAKE_CODEOBJECT(module_filename_obj, 70, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[33], mod_consts[41], NULL, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_PIL$_binary$$$function__10_o16le();


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function__11_o32le();


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function__12_o16be();


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function__13_o32be();


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function__1_i8();


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function__2_o8();


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function__3_i16le(PyObject *defaults);


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function__4_si16le(PyObject *defaults);


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function__5_si16be(PyObject *defaults);


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function__6_i32le(PyObject *defaults);


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function__7_si32le(PyObject *defaults);


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function__8_i16be(PyObject *defaults);


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function__9_i32be(PyObject *defaults);


// The module function definitions.
static PyObject *impl_PIL$_binary$$$function__1_i8(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[0];
    struct Nuitka_FrameObject *frame_13f22f008eb7cb5f05ffc1f600b9a4fa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_13f22f008eb7cb5f05ffc1f600b9a4fa = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_13f22f008eb7cb5f05ffc1f600b9a4fa)) {
        Py_XDECREF(cache_frame_13f22f008eb7cb5f05ffc1f600b9a4fa);

#if _DEBUG_REFCOUNTS
        if (cache_frame_13f22f008eb7cb5f05ffc1f600b9a4fa == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_13f22f008eb7cb5f05ffc1f600b9a4fa = MAKE_FUNCTION_FRAME(codeobj_13f22f008eb7cb5f05ffc1f600b9a4fa, module_PIL$_binary, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_13f22f008eb7cb5f05ffc1f600b9a4fa->m_type_description == NULL);
    frame_13f22f008eb7cb5f05ffc1f600b9a4fa = cache_frame_13f22f008eb7cb5f05ffc1f600b9a4fa;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_13f22f008eb7cb5f05ffc1f600b9a4fa);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_13f22f008eb7cb5f05ffc1f600b9a4fa) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_c);
        tmp_expression_value_1 = par_c;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = (PyObject *)&PyLong_Type;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(par_c);
        tmp_return_value = par_c;
        Py_INCREF(tmp_return_value);
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(par_c);
        tmp_expression_value_2 = par_c;
        tmp_subscript_value_1 = mod_consts[0];
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 0);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_13f22f008eb7cb5f05ffc1f600b9a4fa);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_13f22f008eb7cb5f05ffc1f600b9a4fa);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_13f22f008eb7cb5f05ffc1f600b9a4fa);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_13f22f008eb7cb5f05ffc1f600b9a4fa, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_13f22f008eb7cb5f05ffc1f600b9a4fa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_13f22f008eb7cb5f05ffc1f600b9a4fa, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_13f22f008eb7cb5f05ffc1f600b9a4fa,
        type_description_1,
        par_c
    );


    // Release cached frame if used for exception.
    if (frame_13f22f008eb7cb5f05ffc1f600b9a4fa == cache_frame_13f22f008eb7cb5f05ffc1f600b9a4fa) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_13f22f008eb7cb5f05ffc1f600b9a4fa);
        cache_frame_13f22f008eb7cb5f05ffc1f600b9a4fa = NULL;
    }

    assertFrameObject(frame_13f22f008eb7cb5f05ffc1f600b9a4fa);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_c);
    Py_DECREF(par_c);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_c);
    Py_DECREF(par_c);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PIL$_binary$$$function__2_o8(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_i = python_pars[0];
    struct Nuitka_FrameObject *frame_c00e0032053f2bef2ced8b8454670190;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c00e0032053f2bef2ced8b8454670190 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c00e0032053f2bef2ced8b8454670190)) {
        Py_XDECREF(cache_frame_c00e0032053f2bef2ced8b8454670190);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c00e0032053f2bef2ced8b8454670190 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c00e0032053f2bef2ced8b8454670190 = MAKE_FUNCTION_FRAME(codeobj_c00e0032053f2bef2ced8b8454670190, module_PIL$_binary, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c00e0032053f2bef2ced8b8454670190->m_type_description == NULL);
    frame_c00e0032053f2bef2ced8b8454670190 = cache_frame_c00e0032053f2bef2ced8b8454670190;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c00e0032053f2bef2ced8b8454670190);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c00e0032053f2bef2ced8b8454670190) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_bytes_arg_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_bitand_expr_left_1;
        PyObject *tmp_bitand_expr_right_1;
        CHECK_OBJECT(par_i);
        tmp_bitand_expr_left_1 = par_i;
        tmp_bitand_expr_right_1 = mod_consts[1];
        tmp_tuple_element_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_bytes_arg_1 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_bytes_arg_1, 0, tmp_tuple_element_1);
        tmp_return_value = BUILTIN_BYTES1(tmp_bytes_arg_1);
        Py_DECREF(tmp_bytes_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c00e0032053f2bef2ced8b8454670190);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c00e0032053f2bef2ced8b8454670190);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c00e0032053f2bef2ced8b8454670190);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c00e0032053f2bef2ced8b8454670190, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c00e0032053f2bef2ced8b8454670190->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c00e0032053f2bef2ced8b8454670190, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c00e0032053f2bef2ced8b8454670190,
        type_description_1,
        par_i
    );


    // Release cached frame if used for exception.
    if (frame_c00e0032053f2bef2ced8b8454670190 == cache_frame_c00e0032053f2bef2ced8b8454670190) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_c00e0032053f2bef2ced8b8454670190);
        cache_frame_c00e0032053f2bef2ced8b8454670190 = NULL;
    }

    assertFrameObject(frame_c00e0032053f2bef2ced8b8454670190);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_i);
    Py_DECREF(par_i);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_i);
    Py_DECREF(par_i);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PIL$_binary$$$function__3_i16le(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[0];
    PyObject *par_o = python_pars[1];
    struct Nuitka_FrameObject *frame_a951899dbb8c15b3daf02a0ca803c298;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a951899dbb8c15b3daf02a0ca803c298 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a951899dbb8c15b3daf02a0ca803c298)) {
        Py_XDECREF(cache_frame_a951899dbb8c15b3daf02a0ca803c298);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a951899dbb8c15b3daf02a0ca803c298 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a951899dbb8c15b3daf02a0ca803c298 = MAKE_FUNCTION_FRAME(codeobj_a951899dbb8c15b3daf02a0ca803c298, module_PIL$_binary, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_a951899dbb8c15b3daf02a0ca803c298->m_type_description == NULL);
    frame_a951899dbb8c15b3daf02a0ca803c298 = cache_frame_a951899dbb8c15b3daf02a0ca803c298;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a951899dbb8c15b3daf02a0ca803c298);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a951899dbb8c15b3daf02a0ca803c298) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_subscript_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[3];
        CHECK_OBJECT(par_c);
        tmp_args_element_value_2 = par_c;
        CHECK_OBJECT(par_o);
        tmp_args_element_value_3 = par_o;
        frame_a951899dbb8c15b3daf02a0ca803c298->m_frame.f_lineno = 37;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_expression_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[0];
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a951899dbb8c15b3daf02a0ca803c298);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_a951899dbb8c15b3daf02a0ca803c298);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a951899dbb8c15b3daf02a0ca803c298);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a951899dbb8c15b3daf02a0ca803c298, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a951899dbb8c15b3daf02a0ca803c298->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a951899dbb8c15b3daf02a0ca803c298, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a951899dbb8c15b3daf02a0ca803c298,
        type_description_1,
        par_c,
        par_o
    );


    // Release cached frame if used for exception.
    if (frame_a951899dbb8c15b3daf02a0ca803c298 == cache_frame_a951899dbb8c15b3daf02a0ca803c298) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_a951899dbb8c15b3daf02a0ca803c298);
        cache_frame_a951899dbb8c15b3daf02a0ca803c298 = NULL;
    }

    assertFrameObject(frame_a951899dbb8c15b3daf02a0ca803c298);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_c);
    Py_DECREF(par_c);
    CHECK_OBJECT(par_o);
    Py_DECREF(par_o);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_c);
    Py_DECREF(par_c);
    CHECK_OBJECT(par_o);
    Py_DECREF(par_o);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PIL$_binary$$$function__4_si16le(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[0];
    PyObject *par_o = python_pars[1];
    struct Nuitka_FrameObject *frame_2355704ef3b51932eb205ede3dfef92d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2355704ef3b51932eb205ede3dfef92d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2355704ef3b51932eb205ede3dfef92d)) {
        Py_XDECREF(cache_frame_2355704ef3b51932eb205ede3dfef92d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2355704ef3b51932eb205ede3dfef92d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2355704ef3b51932eb205ede3dfef92d = MAKE_FUNCTION_FRAME(codeobj_2355704ef3b51932eb205ede3dfef92d, module_PIL$_binary, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_2355704ef3b51932eb205ede3dfef92d->m_type_description == NULL);
    frame_2355704ef3b51932eb205ede3dfef92d = cache_frame_2355704ef3b51932eb205ede3dfef92d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_2355704ef3b51932eb205ede3dfef92d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_2355704ef3b51932eb205ede3dfef92d) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_subscript_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[5];
        CHECK_OBJECT(par_c);
        tmp_args_element_value_2 = par_c;
        CHECK_OBJECT(par_o);
        tmp_args_element_value_3 = par_o;
        frame_2355704ef3b51932eb205ede3dfef92d->m_frame.f_lineno = 47;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_expression_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[0];
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2355704ef3b51932eb205ede3dfef92d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_2355704ef3b51932eb205ede3dfef92d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2355704ef3b51932eb205ede3dfef92d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2355704ef3b51932eb205ede3dfef92d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2355704ef3b51932eb205ede3dfef92d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2355704ef3b51932eb205ede3dfef92d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2355704ef3b51932eb205ede3dfef92d,
        type_description_1,
        par_c,
        par_o
    );


    // Release cached frame if used for exception.
    if (frame_2355704ef3b51932eb205ede3dfef92d == cache_frame_2355704ef3b51932eb205ede3dfef92d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_2355704ef3b51932eb205ede3dfef92d);
        cache_frame_2355704ef3b51932eb205ede3dfef92d = NULL;
    }

    assertFrameObject(frame_2355704ef3b51932eb205ede3dfef92d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_c);
    Py_DECREF(par_c);
    CHECK_OBJECT(par_o);
    Py_DECREF(par_o);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_c);
    Py_DECREF(par_c);
    CHECK_OBJECT(par_o);
    Py_DECREF(par_o);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PIL$_binary$$$function__5_si16be(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[0];
    PyObject *par_o = python_pars[1];
    struct Nuitka_FrameObject *frame_12de3af6fe6df306756f1947f2d2c49f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_12de3af6fe6df306756f1947f2d2c49f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_12de3af6fe6df306756f1947f2d2c49f)) {
        Py_XDECREF(cache_frame_12de3af6fe6df306756f1947f2d2c49f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_12de3af6fe6df306756f1947f2d2c49f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_12de3af6fe6df306756f1947f2d2c49f = MAKE_FUNCTION_FRAME(codeobj_12de3af6fe6df306756f1947f2d2c49f, module_PIL$_binary, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_12de3af6fe6df306756f1947f2d2c49f->m_type_description == NULL);
    frame_12de3af6fe6df306756f1947f2d2c49f = cache_frame_12de3af6fe6df306756f1947f2d2c49f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_12de3af6fe6df306756f1947f2d2c49f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_12de3af6fe6df306756f1947f2d2c49f) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_subscript_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[7];
        CHECK_OBJECT(par_c);
        tmp_args_element_value_2 = par_c;
        CHECK_OBJECT(par_o);
        tmp_args_element_value_3 = par_o;
        frame_12de3af6fe6df306756f1947f2d2c49f->m_frame.f_lineno = 57;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_expression_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[0];
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_12de3af6fe6df306756f1947f2d2c49f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_12de3af6fe6df306756f1947f2d2c49f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_12de3af6fe6df306756f1947f2d2c49f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_12de3af6fe6df306756f1947f2d2c49f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_12de3af6fe6df306756f1947f2d2c49f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_12de3af6fe6df306756f1947f2d2c49f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_12de3af6fe6df306756f1947f2d2c49f,
        type_description_1,
        par_c,
        par_o
    );


    // Release cached frame if used for exception.
    if (frame_12de3af6fe6df306756f1947f2d2c49f == cache_frame_12de3af6fe6df306756f1947f2d2c49f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_12de3af6fe6df306756f1947f2d2c49f);
        cache_frame_12de3af6fe6df306756f1947f2d2c49f = NULL;
    }

    assertFrameObject(frame_12de3af6fe6df306756f1947f2d2c49f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_c);
    Py_DECREF(par_c);
    CHECK_OBJECT(par_o);
    Py_DECREF(par_o);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_c);
    Py_DECREF(par_c);
    CHECK_OBJECT(par_o);
    Py_DECREF(par_o);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PIL$_binary$$$function__6_i32le(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[0];
    PyObject *par_o = python_pars[1];
    struct Nuitka_FrameObject *frame_b4012528e6208fbe46195d91a3b3c3cc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b4012528e6208fbe46195d91a3b3c3cc = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b4012528e6208fbe46195d91a3b3c3cc)) {
        Py_XDECREF(cache_frame_b4012528e6208fbe46195d91a3b3c3cc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b4012528e6208fbe46195d91a3b3c3cc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b4012528e6208fbe46195d91a3b3c3cc = MAKE_FUNCTION_FRAME(codeobj_b4012528e6208fbe46195d91a3b3c3cc, module_PIL$_binary, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_b4012528e6208fbe46195d91a3b3c3cc->m_type_description == NULL);
    frame_b4012528e6208fbe46195d91a3b3c3cc = cache_frame_b4012528e6208fbe46195d91a3b3c3cc;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b4012528e6208fbe46195d91a3b3c3cc);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b4012528e6208fbe46195d91a3b3c3cc) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_subscript_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[9];
        CHECK_OBJECT(par_c);
        tmp_args_element_value_2 = par_c;
        CHECK_OBJECT(par_o);
        tmp_args_element_value_3 = par_o;
        frame_b4012528e6208fbe46195d91a3b3c3cc->m_frame.f_lineno = 67;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_expression_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[0];
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b4012528e6208fbe46195d91a3b3c3cc);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b4012528e6208fbe46195d91a3b3c3cc);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b4012528e6208fbe46195d91a3b3c3cc);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b4012528e6208fbe46195d91a3b3c3cc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b4012528e6208fbe46195d91a3b3c3cc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b4012528e6208fbe46195d91a3b3c3cc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b4012528e6208fbe46195d91a3b3c3cc,
        type_description_1,
        par_c,
        par_o
    );


    // Release cached frame if used for exception.
    if (frame_b4012528e6208fbe46195d91a3b3c3cc == cache_frame_b4012528e6208fbe46195d91a3b3c3cc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_b4012528e6208fbe46195d91a3b3c3cc);
        cache_frame_b4012528e6208fbe46195d91a3b3c3cc = NULL;
    }

    assertFrameObject(frame_b4012528e6208fbe46195d91a3b3c3cc);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_c);
    Py_DECREF(par_c);
    CHECK_OBJECT(par_o);
    Py_DECREF(par_o);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_c);
    Py_DECREF(par_c);
    CHECK_OBJECT(par_o);
    Py_DECREF(par_o);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PIL$_binary$$$function__7_si32le(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[0];
    PyObject *par_o = python_pars[1];
    struct Nuitka_FrameObject *frame_140c52a0318c7470c2d74ad09b6f6d67;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_140c52a0318c7470c2d74ad09b6f6d67 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_140c52a0318c7470c2d74ad09b6f6d67)) {
        Py_XDECREF(cache_frame_140c52a0318c7470c2d74ad09b6f6d67);

#if _DEBUG_REFCOUNTS
        if (cache_frame_140c52a0318c7470c2d74ad09b6f6d67 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_140c52a0318c7470c2d74ad09b6f6d67 = MAKE_FUNCTION_FRAME(codeobj_140c52a0318c7470c2d74ad09b6f6d67, module_PIL$_binary, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_140c52a0318c7470c2d74ad09b6f6d67->m_type_description == NULL);
    frame_140c52a0318c7470c2d74ad09b6f6d67 = cache_frame_140c52a0318c7470c2d74ad09b6f6d67;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_140c52a0318c7470c2d74ad09b6f6d67);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_140c52a0318c7470c2d74ad09b6f6d67) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_subscript_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[11];
        CHECK_OBJECT(par_c);
        tmp_args_element_value_2 = par_c;
        CHECK_OBJECT(par_o);
        tmp_args_element_value_3 = par_o;
        frame_140c52a0318c7470c2d74ad09b6f6d67->m_frame.f_lineno = 77;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_expression_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[0];
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_140c52a0318c7470c2d74ad09b6f6d67);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_140c52a0318c7470c2d74ad09b6f6d67);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_140c52a0318c7470c2d74ad09b6f6d67);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_140c52a0318c7470c2d74ad09b6f6d67, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_140c52a0318c7470c2d74ad09b6f6d67->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_140c52a0318c7470c2d74ad09b6f6d67, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_140c52a0318c7470c2d74ad09b6f6d67,
        type_description_1,
        par_c,
        par_o
    );


    // Release cached frame if used for exception.
    if (frame_140c52a0318c7470c2d74ad09b6f6d67 == cache_frame_140c52a0318c7470c2d74ad09b6f6d67) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_140c52a0318c7470c2d74ad09b6f6d67);
        cache_frame_140c52a0318c7470c2d74ad09b6f6d67 = NULL;
    }

    assertFrameObject(frame_140c52a0318c7470c2d74ad09b6f6d67);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_c);
    Py_DECREF(par_c);
    CHECK_OBJECT(par_o);
    Py_DECREF(par_o);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_c);
    Py_DECREF(par_c);
    CHECK_OBJECT(par_o);
    Py_DECREF(par_o);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PIL$_binary$$$function__8_i16be(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[0];
    PyObject *par_o = python_pars[1];
    struct Nuitka_FrameObject *frame_2147ed2a1c9b8467caf18bae52dd3700;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2147ed2a1c9b8467caf18bae52dd3700 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2147ed2a1c9b8467caf18bae52dd3700)) {
        Py_XDECREF(cache_frame_2147ed2a1c9b8467caf18bae52dd3700);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2147ed2a1c9b8467caf18bae52dd3700 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2147ed2a1c9b8467caf18bae52dd3700 = MAKE_FUNCTION_FRAME(codeobj_2147ed2a1c9b8467caf18bae52dd3700, module_PIL$_binary, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_2147ed2a1c9b8467caf18bae52dd3700->m_type_description == NULL);
    frame_2147ed2a1c9b8467caf18bae52dd3700 = cache_frame_2147ed2a1c9b8467caf18bae52dd3700;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_2147ed2a1c9b8467caf18bae52dd3700);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_2147ed2a1c9b8467caf18bae52dd3700) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_subscript_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[13];
        CHECK_OBJECT(par_c);
        tmp_args_element_value_2 = par_c;
        CHECK_OBJECT(par_o);
        tmp_args_element_value_3 = par_o;
        frame_2147ed2a1c9b8467caf18bae52dd3700->m_frame.f_lineno = 81;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_expression_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[0];
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2147ed2a1c9b8467caf18bae52dd3700);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_2147ed2a1c9b8467caf18bae52dd3700);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2147ed2a1c9b8467caf18bae52dd3700);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2147ed2a1c9b8467caf18bae52dd3700, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2147ed2a1c9b8467caf18bae52dd3700->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2147ed2a1c9b8467caf18bae52dd3700, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2147ed2a1c9b8467caf18bae52dd3700,
        type_description_1,
        par_c,
        par_o
    );


    // Release cached frame if used for exception.
    if (frame_2147ed2a1c9b8467caf18bae52dd3700 == cache_frame_2147ed2a1c9b8467caf18bae52dd3700) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_2147ed2a1c9b8467caf18bae52dd3700);
        cache_frame_2147ed2a1c9b8467caf18bae52dd3700 = NULL;
    }

    assertFrameObject(frame_2147ed2a1c9b8467caf18bae52dd3700);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_c);
    Py_DECREF(par_c);
    CHECK_OBJECT(par_o);
    Py_DECREF(par_o);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_c);
    Py_DECREF(par_c);
    CHECK_OBJECT(par_o);
    Py_DECREF(par_o);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PIL$_binary$$$function__9_i32be(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[0];
    PyObject *par_o = python_pars[1];
    struct Nuitka_FrameObject *frame_fb6f089c045e3591427e65f6f70a106d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fb6f089c045e3591427e65f6f70a106d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fb6f089c045e3591427e65f6f70a106d)) {
        Py_XDECREF(cache_frame_fb6f089c045e3591427e65f6f70a106d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fb6f089c045e3591427e65f6f70a106d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fb6f089c045e3591427e65f6f70a106d = MAKE_FUNCTION_FRAME(codeobj_fb6f089c045e3591427e65f6f70a106d, module_PIL$_binary, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_fb6f089c045e3591427e65f6f70a106d->m_type_description == NULL);
    frame_fb6f089c045e3591427e65f6f70a106d = cache_frame_fb6f089c045e3591427e65f6f70a106d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_fb6f089c045e3591427e65f6f70a106d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_fb6f089c045e3591427e65f6f70a106d) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_subscript_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[14];
        CHECK_OBJECT(par_c);
        tmp_args_element_value_2 = par_c;
        CHECK_OBJECT(par_o);
        tmp_args_element_value_3 = par_o;
        frame_fb6f089c045e3591427e65f6f70a106d->m_frame.f_lineno = 85;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_expression_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[0];
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_fb6f089c045e3591427e65f6f70a106d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_fb6f089c045e3591427e65f6f70a106d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_fb6f089c045e3591427e65f6f70a106d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fb6f089c045e3591427e65f6f70a106d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fb6f089c045e3591427e65f6f70a106d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fb6f089c045e3591427e65f6f70a106d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fb6f089c045e3591427e65f6f70a106d,
        type_description_1,
        par_c,
        par_o
    );


    // Release cached frame if used for exception.
    if (frame_fb6f089c045e3591427e65f6f70a106d == cache_frame_fb6f089c045e3591427e65f6f70a106d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_fb6f089c045e3591427e65f6f70a106d);
        cache_frame_fb6f089c045e3591427e65f6f70a106d = NULL;
    }

    assertFrameObject(frame_fb6f089c045e3591427e65f6f70a106d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_c);
    Py_DECREF(par_c);
    CHECK_OBJECT(par_o);
    Py_DECREF(par_o);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_c);
    Py_DECREF(par_c);
    CHECK_OBJECT(par_o);
    Py_DECREF(par_o);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PIL$_binary$$$function__10_o16le(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_i = python_pars[0];
    struct Nuitka_FrameObject *frame_26f1ff2ff6904fe0dc29a4b1fff9ea25;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_26f1ff2ff6904fe0dc29a4b1fff9ea25 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_26f1ff2ff6904fe0dc29a4b1fff9ea25)) {
        Py_XDECREF(cache_frame_26f1ff2ff6904fe0dc29a4b1fff9ea25);

#if _DEBUG_REFCOUNTS
        if (cache_frame_26f1ff2ff6904fe0dc29a4b1fff9ea25 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_26f1ff2ff6904fe0dc29a4b1fff9ea25 = MAKE_FUNCTION_FRAME(codeobj_26f1ff2ff6904fe0dc29a4b1fff9ea25, module_PIL$_binary, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_26f1ff2ff6904fe0dc29a4b1fff9ea25->m_type_description == NULL);
    frame_26f1ff2ff6904fe0dc29a4b1fff9ea25 = cache_frame_26f1ff2ff6904fe0dc29a4b1fff9ea25;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_26f1ff2ff6904fe0dc29a4b1fff9ea25);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_26f1ff2ff6904fe0dc29a4b1fff9ea25) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[3];
        CHECK_OBJECT(par_i);
        tmp_args_element_value_2 = par_i;
        frame_26f1ff2ff6904fe0dc29a4b1fff9ea25->m_frame.f_lineno = 90;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_26f1ff2ff6904fe0dc29a4b1fff9ea25);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_26f1ff2ff6904fe0dc29a4b1fff9ea25);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_26f1ff2ff6904fe0dc29a4b1fff9ea25);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_26f1ff2ff6904fe0dc29a4b1fff9ea25, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_26f1ff2ff6904fe0dc29a4b1fff9ea25->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_26f1ff2ff6904fe0dc29a4b1fff9ea25, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_26f1ff2ff6904fe0dc29a4b1fff9ea25,
        type_description_1,
        par_i
    );


    // Release cached frame if used for exception.
    if (frame_26f1ff2ff6904fe0dc29a4b1fff9ea25 == cache_frame_26f1ff2ff6904fe0dc29a4b1fff9ea25) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_26f1ff2ff6904fe0dc29a4b1fff9ea25);
        cache_frame_26f1ff2ff6904fe0dc29a4b1fff9ea25 = NULL;
    }

    assertFrameObject(frame_26f1ff2ff6904fe0dc29a4b1fff9ea25);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_i);
    Py_DECREF(par_i);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_i);
    Py_DECREF(par_i);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PIL$_binary$$$function__11_o32le(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_i = python_pars[0];
    struct Nuitka_FrameObject *frame_b6bd3601a13b9893347c6b1892f2b612;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b6bd3601a13b9893347c6b1892f2b612 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b6bd3601a13b9893347c6b1892f2b612)) {
        Py_XDECREF(cache_frame_b6bd3601a13b9893347c6b1892f2b612);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b6bd3601a13b9893347c6b1892f2b612 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b6bd3601a13b9893347c6b1892f2b612 = MAKE_FUNCTION_FRAME(codeobj_b6bd3601a13b9893347c6b1892f2b612, module_PIL$_binary, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_b6bd3601a13b9893347c6b1892f2b612->m_type_description == NULL);
    frame_b6bd3601a13b9893347c6b1892f2b612 = cache_frame_b6bd3601a13b9893347c6b1892f2b612;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b6bd3601a13b9893347c6b1892f2b612);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b6bd3601a13b9893347c6b1892f2b612) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[9];
        CHECK_OBJECT(par_i);
        tmp_args_element_value_2 = par_i;
        frame_b6bd3601a13b9893347c6b1892f2b612->m_frame.f_lineno = 94;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b6bd3601a13b9893347c6b1892f2b612);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b6bd3601a13b9893347c6b1892f2b612);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b6bd3601a13b9893347c6b1892f2b612);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b6bd3601a13b9893347c6b1892f2b612, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b6bd3601a13b9893347c6b1892f2b612->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b6bd3601a13b9893347c6b1892f2b612, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b6bd3601a13b9893347c6b1892f2b612,
        type_description_1,
        par_i
    );


    // Release cached frame if used for exception.
    if (frame_b6bd3601a13b9893347c6b1892f2b612 == cache_frame_b6bd3601a13b9893347c6b1892f2b612) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_b6bd3601a13b9893347c6b1892f2b612);
        cache_frame_b6bd3601a13b9893347c6b1892f2b612 = NULL;
    }

    assertFrameObject(frame_b6bd3601a13b9893347c6b1892f2b612);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_i);
    Py_DECREF(par_i);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_i);
    Py_DECREF(par_i);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PIL$_binary$$$function__12_o16be(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_i = python_pars[0];
    struct Nuitka_FrameObject *frame_57716e00835405c5ac11cabd55db5621;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_57716e00835405c5ac11cabd55db5621 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_57716e00835405c5ac11cabd55db5621)) {
        Py_XDECREF(cache_frame_57716e00835405c5ac11cabd55db5621);

#if _DEBUG_REFCOUNTS
        if (cache_frame_57716e00835405c5ac11cabd55db5621 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_57716e00835405c5ac11cabd55db5621 = MAKE_FUNCTION_FRAME(codeobj_57716e00835405c5ac11cabd55db5621, module_PIL$_binary, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_57716e00835405c5ac11cabd55db5621->m_type_description == NULL);
    frame_57716e00835405c5ac11cabd55db5621 = cache_frame_57716e00835405c5ac11cabd55db5621;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_57716e00835405c5ac11cabd55db5621);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_57716e00835405c5ac11cabd55db5621) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[13];
        CHECK_OBJECT(par_i);
        tmp_args_element_value_2 = par_i;
        frame_57716e00835405c5ac11cabd55db5621->m_frame.f_lineno = 98;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_57716e00835405c5ac11cabd55db5621);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_57716e00835405c5ac11cabd55db5621);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_57716e00835405c5ac11cabd55db5621);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_57716e00835405c5ac11cabd55db5621, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_57716e00835405c5ac11cabd55db5621->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_57716e00835405c5ac11cabd55db5621, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_57716e00835405c5ac11cabd55db5621,
        type_description_1,
        par_i
    );


    // Release cached frame if used for exception.
    if (frame_57716e00835405c5ac11cabd55db5621 == cache_frame_57716e00835405c5ac11cabd55db5621) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_57716e00835405c5ac11cabd55db5621);
        cache_frame_57716e00835405c5ac11cabd55db5621 = NULL;
    }

    assertFrameObject(frame_57716e00835405c5ac11cabd55db5621);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_i);
    Py_DECREF(par_i);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_i);
    Py_DECREF(par_i);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PIL$_binary$$$function__13_o32be(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_i = python_pars[0];
    struct Nuitka_FrameObject *frame_3775f2913fe39cffeb89f6784a04c239;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3775f2913fe39cffeb89f6784a04c239 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3775f2913fe39cffeb89f6784a04c239)) {
        Py_XDECREF(cache_frame_3775f2913fe39cffeb89f6784a04c239);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3775f2913fe39cffeb89f6784a04c239 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3775f2913fe39cffeb89f6784a04c239 = MAKE_FUNCTION_FRAME(codeobj_3775f2913fe39cffeb89f6784a04c239, module_PIL$_binary, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_3775f2913fe39cffeb89f6784a04c239->m_type_description == NULL);
    frame_3775f2913fe39cffeb89f6784a04c239 = cache_frame_3775f2913fe39cffeb89f6784a04c239;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_3775f2913fe39cffeb89f6784a04c239);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_3775f2913fe39cffeb89f6784a04c239) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[14];
        CHECK_OBJECT(par_i);
        tmp_args_element_value_2 = par_i;
        frame_3775f2913fe39cffeb89f6784a04c239->m_frame.f_lineno = 102;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3775f2913fe39cffeb89f6784a04c239);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_3775f2913fe39cffeb89f6784a04c239);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3775f2913fe39cffeb89f6784a04c239);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3775f2913fe39cffeb89f6784a04c239, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3775f2913fe39cffeb89f6784a04c239->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3775f2913fe39cffeb89f6784a04c239, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3775f2913fe39cffeb89f6784a04c239,
        type_description_1,
        par_i
    );


    // Release cached frame if used for exception.
    if (frame_3775f2913fe39cffeb89f6784a04c239 == cache_frame_3775f2913fe39cffeb89f6784a04c239) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_3775f2913fe39cffeb89f6784a04c239);
        cache_frame_3775f2913fe39cffeb89f6784a04c239 = NULL;
    }

    assertFrameObject(frame_3775f2913fe39cffeb89f6784a04c239);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_i);
    Py_DECREF(par_i);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_i);
    Py_DECREF(par_i);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function__10_o16le() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function__10_o16le,
        mod_consts[36],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_26f1ff2ff6904fe0dc29a4b1fff9ea25,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PIL$_binary,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function__11_o32le() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function__11_o32le,
        mod_consts[37],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b6bd3601a13b9893347c6b1892f2b612,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PIL$_binary,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function__12_o16be() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function__12_o16be,
        mod_consts[38],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_57716e00835405c5ac11cabd55db5621,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PIL$_binary,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function__13_o32be() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function__13_o32be,
        mod_consts[39],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3775f2913fe39cffeb89f6784a04c239,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PIL$_binary,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function__1_i8() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function__1_i8,
        mod_consts[26],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_13f22f008eb7cb5f05ffc1f600b9a4fa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PIL$_binary,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function__2_o8() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function__2_o8,
        mod_consts[27],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c00e0032053f2bef2ced8b8454670190,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PIL$_binary,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function__3_i16le(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function__3_i16le,
        mod_consts[29],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a951899dbb8c15b3daf02a0ca803c298,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PIL$_binary,
        mod_consts[4],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function__4_si16le(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function__4_si16le,
        mod_consts[30],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2355704ef3b51932eb205ede3dfef92d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PIL$_binary,
        mod_consts[6],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function__5_si16be(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function__5_si16be,
        mod_consts[31],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_12de3af6fe6df306756f1947f2d2c49f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PIL$_binary,
        mod_consts[8],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function__6_i32le(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function__6_i32le,
        mod_consts[32],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b4012528e6208fbe46195d91a3b3c3cc,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PIL$_binary,
        mod_consts[10],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function__7_si32le(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function__7_si32le,
        mod_consts[33],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_140c52a0318c7470c2d74ad09b6f6d67,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PIL$_binary,
        mod_consts[12],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function__8_i16be(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function__8_i16be,
        mod_consts[34],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2147ed2a1c9b8467caf18bae52dd3700,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PIL$_binary,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function__9_i32be(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function__9_i32be,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fb6f089c045e3591427e65f6f70a106d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PIL$_binary,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_PIL$_binary[] = {
    impl_PIL$_binary$$$function__1_i8,
    impl_PIL$_binary$$$function__2_o8,
    impl_PIL$_binary$$$function__3_i16le,
    impl_PIL$_binary$$$function__4_si16le,
    impl_PIL$_binary$$$function__5_si16be,
    impl_PIL$_binary$$$function__6_i32le,
    impl_PIL$_binary$$$function__7_si32le,
    impl_PIL$_binary$$$function__8_i16be,
    impl_PIL$_binary$$$function__9_i32be,
    impl_PIL$_binary$$$function__10_o16le,
    impl_PIL$_binary$$$function__11_o32le,
    impl_PIL$_binary$$$function__12_o16be,
    impl_PIL$_binary$$$function__13_o32be,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_PIL$_binary;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = PyTuple_New(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = PyTuple_New(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_PIL$_binary) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODEOBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_PIL$_binary[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_PIL$_binary,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_PIL$_binary(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("PIL._binary");

    // Store the module for future use.
    module_PIL$_binary = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants();

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("PIL._binary: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("PIL._binary: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("PIL._binary: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initPIL$_binary\n");

    moduledict_PIL$_binary = MODULE_DICT(module_PIL$_binary);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_PIL$_binary,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_PIL$_binary,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[44]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_PIL$_binary,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_PIL$_binary,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_PIL$_binary,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_PIL$_binary);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_PIL$_binary);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_755e0c60e0838de0393727a0ce4e9044;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[16];
        UPDATE_STRING_DICT0(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[18];
        UPDATE_STRING_DICT0(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_755e0c60e0838de0393727a0ce4e9044 = MAKE_MODULE_FRAME(codeobj_755e0c60e0838de0393727a0ce4e9044, module_PIL$_binary);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_755e0c60e0838de0393727a0ce4e9044);
    assert(Py_REFCNT(frame_755e0c60e0838de0393727a0ce4e9044) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[18];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[21], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[22], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[24];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_PIL$_binary;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[25];
        tmp_level_value_1 = mod_consts[0];
        frame_755e0c60e0838de0393727a0ce4e9044->m_frame.f_lineno = 18;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_PIL$_binary,
                mod_consts[15],
                mod_consts[0]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[15]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_PIL$_binary,
                mod_consts[2],
                mod_consts[0]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[2]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_6);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_755e0c60e0838de0393727a0ce4e9044);
#endif
    popFrameStack();

    assertFrameObject(frame_755e0c60e0838de0393727a0ce4e9044);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_755e0c60e0838de0393727a0ce4e9044);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_755e0c60e0838de0393727a0ce4e9044, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_755e0c60e0838de0393727a0ce4e9044->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_755e0c60e0838de0393727a0ce4e9044, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_7;


        tmp_assign_source_7 = MAKE_FUNCTION_PIL$_binary$$$function__1_i8();

        UPDATE_STRING_DICT1(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;


        tmp_assign_source_8 = MAKE_FUNCTION_PIL$_binary$$$function__2_o8();

        UPDATE_STRING_DICT1(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[28];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_9 = MAKE_FUNCTION_PIL$_binary$$$function__3_i16le(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = mod_consts[28];
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_10 = MAKE_FUNCTION_PIL$_binary$$$function__4_si16le(tmp_defaults_2);

        UPDATE_STRING_DICT1(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = mod_consts[28];
        Py_INCREF(tmp_defaults_3);


        tmp_assign_source_11 = MAKE_FUNCTION_PIL$_binary$$$function__5_si16be(tmp_defaults_3);

        UPDATE_STRING_DICT1(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_defaults_4;
        tmp_defaults_4 = mod_consts[28];
        Py_INCREF(tmp_defaults_4);


        tmp_assign_source_12 = MAKE_FUNCTION_PIL$_binary$$$function__6_i32le(tmp_defaults_4);

        UPDATE_STRING_DICT1(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_defaults_5;
        tmp_defaults_5 = mod_consts[28];
        Py_INCREF(tmp_defaults_5);


        tmp_assign_source_13 = MAKE_FUNCTION_PIL$_binary$$$function__7_si32le(tmp_defaults_5);

        UPDATE_STRING_DICT1(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_defaults_6;
        tmp_defaults_6 = mod_consts[28];
        Py_INCREF(tmp_defaults_6);


        tmp_assign_source_14 = MAKE_FUNCTION_PIL$_binary$$$function__8_i16be(tmp_defaults_6);

        UPDATE_STRING_DICT1(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_defaults_7;
        tmp_defaults_7 = mod_consts[28];
        Py_INCREF(tmp_defaults_7);


        tmp_assign_source_15 = MAKE_FUNCTION_PIL$_binary$$$function__9_i32be(tmp_defaults_7);

        UPDATE_STRING_DICT1(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;


        tmp_assign_source_16 = MAKE_FUNCTION_PIL$_binary$$$function__10_o16le();

        UPDATE_STRING_DICT1(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;


        tmp_assign_source_17 = MAKE_FUNCTION_PIL$_binary$$$function__11_o32le();

        UPDATE_STRING_DICT1(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;


        tmp_assign_source_18 = MAKE_FUNCTION_PIL$_binary$$$function__12_o16be();

        UPDATE_STRING_DICT1(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;


        tmp_assign_source_19 = MAKE_FUNCTION_PIL$_binary$$$function__13_o32be();

        UPDATE_STRING_DICT1(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_19);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("PIL._binary", false);

    Py_INCREF(module_PIL$_binary);
    return module_PIL$_binary;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("PIL$_binary", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
