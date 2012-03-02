C $Header$
C $Name$

CADJ STORE StoreSEAICE    = tapelev3, key = ilev_3

#ifdef SEAICE_MULTICATEGORY
CADJ STORE tices      =     tapelev3, key = ilev_3
#endif

#ifdef AUTODIFF_SOMETIMES_NEEDED
CADJ STORE area  = tapelev3, key = ilev_3
CADJ STORE heff  = tapelev3, key = ilev_3
CADJ STORE uice  = tapelev3, key = ilev_3
CADJ STORE vice  = tapelev3, key = ilev_3
#endif

#ifdef ALLOW_COST_ICE
CADJ STORE objf_ice = tapelev3, key = ilev_3
#endif
#ifdef ALLOW_SEAICE_COST_EXPORT
CADJ STORE uHeffExportCell = tapelev3, key = ilev_3
CADJ STORE vHeffExportCell = tapelev3, key = ilev_3
#endif

#ifdef ALLOW_OBCS
# ifdef ALLOW_OBCS_EAST
CADJ STORE obeuice,obeuice0,obeuice1 = tapelev3, key = ilev_3
CADJ STORE obevice,obevice0,obevice1 = tapelev3, key = ilev_3
# endif
# ifdef ALLOW_OBCS_NORTH
CADJ STORE obnuice,obnuice0,obnuice1 = tapelev3, key = ilev_3
CADJ STORE obnvice,obnvice0,obnvice1 = tapelev3, key = ilev_3
# endif
# ifdef ALLOW_OBCS_SOUTH
CADJ STORE obsuice,obsuice0,obsuice1 = tapelev3, key = ilev_3
CADJ STORE obsvice,obsvice0,obsvice1 = tapelev3, key = ilev_3
# endif
# ifdef ALLOW_OBCS_WEST
CADJ STORE obwuice,obwuice0,obwuice1 = tapelev3, key = ilev_3
CADJ STORE obwvice,obwvice0,obwvice1 = tapelev3, key = ilev_3
# endif
#endif

#ifdef ALLOW_SITRACER
CADJ STORE sitracer = tapelev3, key = ilev_3
CADJ STORE sitrarea = tapelev3, key = ilev_3
CADJ STORE sitrheff = tapelev3, key = ilev_3
#endif

