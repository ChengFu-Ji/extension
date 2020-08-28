#include <Python.h>

int slow_calc(int x, int a, int b)
{
    return a * x + b;
}

static PyObject *_slow_calc(PyObject *self, PyObject *args, PyObject *kwargs)
{
    int x, a = 0, b = 0;
    int result = 0;

    static char *kwlist[] = {"x", "a", "b", NULL};

    if(!PyArg_ParseTupleAndKeywords(args, kwargs, "i|ii", kwlist, &x, &a, &b)) 
        return NULL;

    result = slow_calc(x, a, b);

    return Py_BuildValue("i", result);
}

static PyMethodDef SpeedupPerformanceMethods[] = {
    {"slow_calc", (PyCFunction) _slow_calc, METH_VARARGS | METH_KEYWORDS, NULL},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef speedup_performance_module = {
        PyModuleDef_HEAD_INIT,
        "speedup_performance",
        NULL,
        -1,
        SpeedupPerformanceMethods
};

PyMODINIT_FUNC PyInit_speedup_performance()
{
    return PyModule_Create(&speedup_performance_module);
}
