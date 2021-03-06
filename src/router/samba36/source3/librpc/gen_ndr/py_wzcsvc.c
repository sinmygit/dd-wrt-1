
/* Python wrapper functions auto-generated by pidl */
#include <Python.h>
#include "includes.h"
#include <pytalloc.h>
#include "librpc/rpc/pyrpc.h"
#include "librpc/rpc/pyrpc_util.h"
#include "librpc/gen_ndr/ndr_wzcsvc.h"
#include "librpc/gen_ndr/ndr_wzcsvc_c.h"

staticforward PyTypeObject wzcsvc_InterfaceType;

void initwzcsvc(void);static PyTypeObject *ClientConnection_Type;

static bool pack_py_wzcsvc_EnumInterfaces_args_in(PyObject *args, PyObject *kwargs, struct wzcsvc_EnumInterfaces *r)
{
	const char *kwnames[] = {
		NULL
	};

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, ":wzcsvc_EnumInterfaces", discard_const_p(char *, kwnames))) {
		return false;
	}

	return true;
}

static PyObject *unpack_py_wzcsvc_EnumInterfaces_args_out(struct wzcsvc_EnumInterfaces *r)
{
	PyObject *result;
	result = Py_None;
	Py_INCREF(result);
	return result;
}

static bool pack_py_wzcsvc_QueryInterface_args_in(PyObject *args, PyObject *kwargs, struct wzcsvc_QueryInterface *r)
{
	const char *kwnames[] = {
		NULL
	};

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, ":wzcsvc_QueryInterface", discard_const_p(char *, kwnames))) {
		return false;
	}

	return true;
}

static PyObject *unpack_py_wzcsvc_QueryInterface_args_out(struct wzcsvc_QueryInterface *r)
{
	PyObject *result;
	result = Py_None;
	Py_INCREF(result);
	return result;
}

static bool pack_py_wzcsvc_SetInterface_args_in(PyObject *args, PyObject *kwargs, struct wzcsvc_SetInterface *r)
{
	const char *kwnames[] = {
		NULL
	};

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, ":wzcsvc_SetInterface", discard_const_p(char *, kwnames))) {
		return false;
	}

	return true;
}

static PyObject *unpack_py_wzcsvc_SetInterface_args_out(struct wzcsvc_SetInterface *r)
{
	PyObject *result;
	result = Py_None;
	Py_INCREF(result);
	return result;
}

static bool pack_py_wzcsvc_RefreshInterface_args_in(PyObject *args, PyObject *kwargs, struct wzcsvc_RefreshInterface *r)
{
	const char *kwnames[] = {
		NULL
	};

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, ":wzcsvc_RefreshInterface", discard_const_p(char *, kwnames))) {
		return false;
	}

	return true;
}

static PyObject *unpack_py_wzcsvc_RefreshInterface_args_out(struct wzcsvc_RefreshInterface *r)
{
	PyObject *result;
	result = Py_None;
	Py_INCREF(result);
	return result;
}

static bool pack_py_wzcsvc_QueryContext_args_in(PyObject *args, PyObject *kwargs, struct wzcsvc_QueryContext *r)
{
	const char *kwnames[] = {
		NULL
	};

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, ":wzcsvc_QueryContext", discard_const_p(char *, kwnames))) {
		return false;
	}

	return true;
}

static PyObject *unpack_py_wzcsvc_QueryContext_args_out(struct wzcsvc_QueryContext *r)
{
	PyObject *result;
	result = Py_None;
	Py_INCREF(result);
	return result;
}

static bool pack_py_wzcsvc_SetContext_args_in(PyObject *args, PyObject *kwargs, struct wzcsvc_SetContext *r)
{
	const char *kwnames[] = {
		NULL
	};

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, ":wzcsvc_SetContext", discard_const_p(char *, kwnames))) {
		return false;
	}

	return true;
}

static PyObject *unpack_py_wzcsvc_SetContext_args_out(struct wzcsvc_SetContext *r)
{
	PyObject *result;
	result = Py_None;
	Py_INCREF(result);
	return result;
}

static bool pack_py_wzcsvc_EapolUIResponse_args_in(PyObject *args, PyObject *kwargs, struct wzcsvc_EapolUIResponse *r)
{
	const char *kwnames[] = {
		NULL
	};

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, ":wzcsvc_EapolUIResponse", discard_const_p(char *, kwnames))) {
		return false;
	}

	return true;
}

static PyObject *unpack_py_wzcsvc_EapolUIResponse_args_out(struct wzcsvc_EapolUIResponse *r)
{
	PyObject *result;
	result = Py_None;
	Py_INCREF(result);
	return result;
}

static bool pack_py_wzcsvc_EapolGetCustomAuthData_args_in(PyObject *args, PyObject *kwargs, struct wzcsvc_EapolGetCustomAuthData *r)
{
	const char *kwnames[] = {
		NULL
	};

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, ":wzcsvc_EapolGetCustomAuthData", discard_const_p(char *, kwnames))) {
		return false;
	}

	return true;
}

static PyObject *unpack_py_wzcsvc_EapolGetCustomAuthData_args_out(struct wzcsvc_EapolGetCustomAuthData *r)
{
	PyObject *result;
	result = Py_None;
	Py_INCREF(result);
	return result;
}

static bool pack_py_wzcsvc_EapolSetCustomAuthData_args_in(PyObject *args, PyObject *kwargs, struct wzcsvc_EapolSetCustomAuthData *r)
{
	const char *kwnames[] = {
		NULL
	};

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, ":wzcsvc_EapolSetCustomAuthData", discard_const_p(char *, kwnames))) {
		return false;
	}

	return true;
}

static PyObject *unpack_py_wzcsvc_EapolSetCustomAuthData_args_out(struct wzcsvc_EapolSetCustomAuthData *r)
{
	PyObject *result;
	result = Py_None;
	Py_INCREF(result);
	return result;
}

static bool pack_py_wzcsvc_EapolGetInterfaceParams_args_in(PyObject *args, PyObject *kwargs, struct wzcsvc_EapolGetInterfaceParams *r)
{
	const char *kwnames[] = {
		NULL
	};

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, ":wzcsvc_EapolGetInterfaceParams", discard_const_p(char *, kwnames))) {
		return false;
	}

	return true;
}

static PyObject *unpack_py_wzcsvc_EapolGetInterfaceParams_args_out(struct wzcsvc_EapolGetInterfaceParams *r)
{
	PyObject *result;
	result = Py_None;
	Py_INCREF(result);
	return result;
}

static bool pack_py_wzcsvc_EapolSetInterfaceParams_args_in(PyObject *args, PyObject *kwargs, struct wzcsvc_EapolSetInterfaceParams *r)
{
	const char *kwnames[] = {
		NULL
	};

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, ":wzcsvc_EapolSetInterfaceParams", discard_const_p(char *, kwnames))) {
		return false;
	}

	return true;
}

static PyObject *unpack_py_wzcsvc_EapolSetInterfaceParams_args_out(struct wzcsvc_EapolSetInterfaceParams *r)
{
	PyObject *result;
	result = Py_None;
	Py_INCREF(result);
	return result;
}

static bool pack_py_wzcsvc_EapolReAuthenticateInterface_args_in(PyObject *args, PyObject *kwargs, struct wzcsvc_EapolReAuthenticateInterface *r)
{
	const char *kwnames[] = {
		NULL
	};

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, ":wzcsvc_EapolReAuthenticateInterface", discard_const_p(char *, kwnames))) {
		return false;
	}

	return true;
}

static PyObject *unpack_py_wzcsvc_EapolReAuthenticateInterface_args_out(struct wzcsvc_EapolReAuthenticateInterface *r)
{
	PyObject *result;
	result = Py_None;
	Py_INCREF(result);
	return result;
}

static bool pack_py_wzcsvc_EapolQueryInterfaceState_args_in(PyObject *args, PyObject *kwargs, struct wzcsvc_EapolQueryInterfaceState *r)
{
	const char *kwnames[] = {
		NULL
	};

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, ":wzcsvc_EapolQueryInterfaceState", discard_const_p(char *, kwnames))) {
		return false;
	}

	return true;
}

static PyObject *unpack_py_wzcsvc_EapolQueryInterfaceState_args_out(struct wzcsvc_EapolQueryInterfaceState *r)
{
	PyObject *result;
	result = Py_None;
	Py_INCREF(result);
	return result;
}

static bool pack_py_wzcsvc_OpenWZCDbLogSession_args_in(PyObject *args, PyObject *kwargs, struct wzcsvc_OpenWZCDbLogSession *r)
{
	const char *kwnames[] = {
		NULL
	};

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, ":wzcsvc_OpenWZCDbLogSession", discard_const_p(char *, kwnames))) {
		return false;
	}

	return true;
}

static PyObject *unpack_py_wzcsvc_OpenWZCDbLogSession_args_out(struct wzcsvc_OpenWZCDbLogSession *r)
{
	PyObject *result;
	result = Py_None;
	Py_INCREF(result);
	return result;
}

static bool pack_py_wzcsvc_CloseWZCDbLogSession_args_in(PyObject *args, PyObject *kwargs, struct wzcsvc_CloseWZCDbLogSession *r)
{
	const char *kwnames[] = {
		NULL
	};

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, ":wzcsvc_CloseWZCDbLogSession", discard_const_p(char *, kwnames))) {
		return false;
	}

	return true;
}

static PyObject *unpack_py_wzcsvc_CloseWZCDbLogSession_args_out(struct wzcsvc_CloseWZCDbLogSession *r)
{
	PyObject *result;
	result = Py_None;
	Py_INCREF(result);
	return result;
}

static bool pack_py_wzcsvc_EnumWZCDbLogRecords_args_in(PyObject *args, PyObject *kwargs, struct wzcsvc_EnumWZCDbLogRecords *r)
{
	const char *kwnames[] = {
		NULL
	};

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, ":wzcsvc_EnumWZCDbLogRecords", discard_const_p(char *, kwnames))) {
		return false;
	}

	return true;
}

static PyObject *unpack_py_wzcsvc_EnumWZCDbLogRecords_args_out(struct wzcsvc_EnumWZCDbLogRecords *r)
{
	PyObject *result;
	result = Py_None;
	Py_INCREF(result);
	return result;
}

static bool pack_py_wzcsvc_FlushWZCdbLog_args_in(PyObject *args, PyObject *kwargs, struct wzcsvc_FlushWZCdbLog *r)
{
	const char *kwnames[] = {
		NULL
	};

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, ":wzcsvc_FlushWZCdbLog", discard_const_p(char *, kwnames))) {
		return false;
	}

	return true;
}

static PyObject *unpack_py_wzcsvc_FlushWZCdbLog_args_out(struct wzcsvc_FlushWZCdbLog *r)
{
	PyObject *result;
	result = Py_None;
	Py_INCREF(result);
	return result;
}

static bool pack_py_wzcsvc_GetWZCDbLogRecord_args_in(PyObject *args, PyObject *kwargs, struct wzcsvc_GetWZCDbLogRecord *r)
{
	const char *kwnames[] = {
		NULL
	};

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, ":wzcsvc_GetWZCDbLogRecord", discard_const_p(char *, kwnames))) {
		return false;
	}

	return true;
}

static PyObject *unpack_py_wzcsvc_GetWZCDbLogRecord_args_out(struct wzcsvc_GetWZCDbLogRecord *r)
{
	PyObject *result;
	result = Py_None;
	Py_INCREF(result);
	return result;
}

const struct PyNdrRpcMethodDef py_ndr_wzcsvc_methods[] = {
	{ "EnumInterfaces", "S.EnumInterfaces() -> None", (py_dcerpc_call_fn)dcerpc_wzcsvc_EnumInterfaces_r, (py_data_pack_fn)pack_py_wzcsvc_EnumInterfaces_args_in, (py_data_unpack_fn)unpack_py_wzcsvc_EnumInterfaces_args_out, 0, &ndr_table_wzcsvc },
	{ "QueryInterface", "S.QueryInterface() -> None", (py_dcerpc_call_fn)dcerpc_wzcsvc_QueryInterface_r, (py_data_pack_fn)pack_py_wzcsvc_QueryInterface_args_in, (py_data_unpack_fn)unpack_py_wzcsvc_QueryInterface_args_out, 1, &ndr_table_wzcsvc },
	{ "SetInterface", "S.SetInterface() -> None", (py_dcerpc_call_fn)dcerpc_wzcsvc_SetInterface_r, (py_data_pack_fn)pack_py_wzcsvc_SetInterface_args_in, (py_data_unpack_fn)unpack_py_wzcsvc_SetInterface_args_out, 2, &ndr_table_wzcsvc },
	{ "RefreshInterface", "S.RefreshInterface() -> None", (py_dcerpc_call_fn)dcerpc_wzcsvc_RefreshInterface_r, (py_data_pack_fn)pack_py_wzcsvc_RefreshInterface_args_in, (py_data_unpack_fn)unpack_py_wzcsvc_RefreshInterface_args_out, 3, &ndr_table_wzcsvc },
	{ "QueryContext", "S.QueryContext() -> None", (py_dcerpc_call_fn)dcerpc_wzcsvc_QueryContext_r, (py_data_pack_fn)pack_py_wzcsvc_QueryContext_args_in, (py_data_unpack_fn)unpack_py_wzcsvc_QueryContext_args_out, 4, &ndr_table_wzcsvc },
	{ "SetContext", "S.SetContext() -> None", (py_dcerpc_call_fn)dcerpc_wzcsvc_SetContext_r, (py_data_pack_fn)pack_py_wzcsvc_SetContext_args_in, (py_data_unpack_fn)unpack_py_wzcsvc_SetContext_args_out, 5, &ndr_table_wzcsvc },
	{ "EapolUIResponse", "S.EapolUIResponse() -> None", (py_dcerpc_call_fn)dcerpc_wzcsvc_EapolUIResponse_r, (py_data_pack_fn)pack_py_wzcsvc_EapolUIResponse_args_in, (py_data_unpack_fn)unpack_py_wzcsvc_EapolUIResponse_args_out, 6, &ndr_table_wzcsvc },
	{ "EapolGetCustomAuthData", "S.EapolGetCustomAuthData() -> None", (py_dcerpc_call_fn)dcerpc_wzcsvc_EapolGetCustomAuthData_r, (py_data_pack_fn)pack_py_wzcsvc_EapolGetCustomAuthData_args_in, (py_data_unpack_fn)unpack_py_wzcsvc_EapolGetCustomAuthData_args_out, 7, &ndr_table_wzcsvc },
	{ "EapolSetCustomAuthData", "S.EapolSetCustomAuthData() -> None", (py_dcerpc_call_fn)dcerpc_wzcsvc_EapolSetCustomAuthData_r, (py_data_pack_fn)pack_py_wzcsvc_EapolSetCustomAuthData_args_in, (py_data_unpack_fn)unpack_py_wzcsvc_EapolSetCustomAuthData_args_out, 8, &ndr_table_wzcsvc },
	{ "EapolGetInterfaceParams", "S.EapolGetInterfaceParams() -> None", (py_dcerpc_call_fn)dcerpc_wzcsvc_EapolGetInterfaceParams_r, (py_data_pack_fn)pack_py_wzcsvc_EapolGetInterfaceParams_args_in, (py_data_unpack_fn)unpack_py_wzcsvc_EapolGetInterfaceParams_args_out, 9, &ndr_table_wzcsvc },
	{ "EapolSetInterfaceParams", "S.EapolSetInterfaceParams() -> None", (py_dcerpc_call_fn)dcerpc_wzcsvc_EapolSetInterfaceParams_r, (py_data_pack_fn)pack_py_wzcsvc_EapolSetInterfaceParams_args_in, (py_data_unpack_fn)unpack_py_wzcsvc_EapolSetInterfaceParams_args_out, 10, &ndr_table_wzcsvc },
	{ "EapolReAuthenticateInterface", "S.EapolReAuthenticateInterface() -> None", (py_dcerpc_call_fn)dcerpc_wzcsvc_EapolReAuthenticateInterface_r, (py_data_pack_fn)pack_py_wzcsvc_EapolReAuthenticateInterface_args_in, (py_data_unpack_fn)unpack_py_wzcsvc_EapolReAuthenticateInterface_args_out, 11, &ndr_table_wzcsvc },
	{ "EapolQueryInterfaceState", "S.EapolQueryInterfaceState() -> None", (py_dcerpc_call_fn)dcerpc_wzcsvc_EapolQueryInterfaceState_r, (py_data_pack_fn)pack_py_wzcsvc_EapolQueryInterfaceState_args_in, (py_data_unpack_fn)unpack_py_wzcsvc_EapolQueryInterfaceState_args_out, 12, &ndr_table_wzcsvc },
	{ "OpenWZCDbLogSession", "S.OpenWZCDbLogSession() -> None", (py_dcerpc_call_fn)dcerpc_wzcsvc_OpenWZCDbLogSession_r, (py_data_pack_fn)pack_py_wzcsvc_OpenWZCDbLogSession_args_in, (py_data_unpack_fn)unpack_py_wzcsvc_OpenWZCDbLogSession_args_out, 13, &ndr_table_wzcsvc },
	{ "CloseWZCDbLogSession", "S.CloseWZCDbLogSession() -> None", (py_dcerpc_call_fn)dcerpc_wzcsvc_CloseWZCDbLogSession_r, (py_data_pack_fn)pack_py_wzcsvc_CloseWZCDbLogSession_args_in, (py_data_unpack_fn)unpack_py_wzcsvc_CloseWZCDbLogSession_args_out, 14, &ndr_table_wzcsvc },
	{ "EnumWZCDbLogRecords", "S.EnumWZCDbLogRecords() -> None", (py_dcerpc_call_fn)dcerpc_wzcsvc_EnumWZCDbLogRecords_r, (py_data_pack_fn)pack_py_wzcsvc_EnumWZCDbLogRecords_args_in, (py_data_unpack_fn)unpack_py_wzcsvc_EnumWZCDbLogRecords_args_out, 15, &ndr_table_wzcsvc },
	{ "FlushWZCdbLog", "S.FlushWZCdbLog() -> None", (py_dcerpc_call_fn)dcerpc_wzcsvc_FlushWZCdbLog_r, (py_data_pack_fn)pack_py_wzcsvc_FlushWZCdbLog_args_in, (py_data_unpack_fn)unpack_py_wzcsvc_FlushWZCdbLog_args_out, 16, &ndr_table_wzcsvc },
	{ "GetWZCDbLogRecord", "S.GetWZCDbLogRecord() -> None", (py_dcerpc_call_fn)dcerpc_wzcsvc_GetWZCDbLogRecord_r, (py_data_pack_fn)pack_py_wzcsvc_GetWZCDbLogRecord_args_in, (py_data_unpack_fn)unpack_py_wzcsvc_GetWZCDbLogRecord_args_out, 17, &ndr_table_wzcsvc },
	{ NULL }
};

static PyObject *interface_wzcsvc_new(PyTypeObject *type, PyObject *args, PyObject *kwargs)
{
	return py_dcerpc_interface_init_helper(type, args, kwargs, &ndr_table_wzcsvc);
}

#define PY_DOC_WZCSVC "Wireless Configuration Service"
static PyTypeObject wzcsvc_InterfaceType = {
	PyObject_HEAD_INIT(NULL) 0,
	.tp_name = "wzcsvc.wzcsvc",
	.tp_basicsize = sizeof(dcerpc_InterfaceObject),
	.tp_doc = "wzcsvc(binding, lp_ctx=None, credentials=None) -> connection\n"
"\n"
"binding should be a DCE/RPC binding string (for example: ncacn_ip_tcp:127.0.0.1)\n"
"lp_ctx should be a path to a smb.conf file or a param.LoadParm object\n"
"credentials should be a credentials.Credentials object.\n\n"PY_DOC_WZCSVC,
	.tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	.tp_new = interface_wzcsvc_new,
};

static PyMethodDef wzcsvc_methods[] = {
	{ NULL, NULL, 0, NULL }
};

void initwzcsvc(void)
{
	PyObject *m;
	PyObject *dep_samba_dcerpc_base;

	dep_samba_dcerpc_base = PyImport_ImportModule("samba.dcerpc.base");
	if (dep_samba_dcerpc_base == NULL)
		return;

	ClientConnection_Type = (PyTypeObject *)PyObject_GetAttrString(dep_samba_dcerpc_base, "ClientConnection");
	if (ClientConnection_Type == NULL)
		return;

	wzcsvc_InterfaceType.tp_base = ClientConnection_Type;

	if (PyType_Ready(&wzcsvc_InterfaceType) < 0)
		return;
	if (!PyInterface_AddNdrRpcMethods(&wzcsvc_InterfaceType, py_ndr_wzcsvc_methods))
		return;

#ifdef PY_WZCSVC_PATCH
	PY_WZCSVC_PATCH(&wzcsvc_InterfaceType);
#endif

	m = Py_InitModule3("wzcsvc", wzcsvc_methods, "wzcsvc DCE/RPC");
	if (m == NULL)
		return;

	Py_INCREF((PyObject *)(void *)&wzcsvc_InterfaceType);
	PyModule_AddObject(m, "wzcsvc", (PyObject *)(void *)&wzcsvc_InterfaceType);
#ifdef PY_MOD_WZCSVC_PATCH
	PY_MOD_WZCSVC_PATCH(m);
#endif

}
