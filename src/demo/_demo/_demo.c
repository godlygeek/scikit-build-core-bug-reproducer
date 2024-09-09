#include <Python.h>

static PyModuleDef demo_def = {
    PyModuleDef_HEAD_INIT,     /* m_base */
    "demo",                    /* m_name */
    PyDoc_STR("Demo module"),  /* m_doc */
    0,                         /* m_size */
    NULL,                      /* m_methods */
    NULL,                      /* m_slots */
    NULL,                      /* m_traverse */
    NULL,                      /* m_clear */
    NULL,                      /* m_free */
};

PyMODINIT_FUNC
PyInit__demo(void) {
    return PyModuleDef_Init(&demo_def);
}
