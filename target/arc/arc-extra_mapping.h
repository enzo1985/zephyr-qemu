SEMANTIC_FUNCTION(SWI, 1)
SEMANTIC_FUNCTION(SWI, 1)
SEMANTIC_FUNCTION(UNIMP, 0)
SEMANTIC_FUNCTION(RTIE, 0)
SEMANTIC_FUNCTION(SLEEP, 1)

MAPPING(swi, SWI, 0)
CONSTANT(SWI, swi_s, 0, 0)
MAPPING(swi_s, SWI, 1, 0)
MAPPING(trap_s, TRAP, 1, 0)
MAPPING(rtie, RTIE, 0)
MAPPING(sleep, SLEEP, 1, 0)