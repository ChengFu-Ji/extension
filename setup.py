from distutils.core import setup, Extension

speedup_performance_module = Extension('speedup_performance', sources = ['speedup_performance.c'])
setup (
        name = "SpeedupPerformance", 
        version = '1.0', 
        ext_modules = [speedup_performance_module]
)
