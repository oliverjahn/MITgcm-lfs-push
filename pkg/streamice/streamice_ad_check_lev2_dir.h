C $Header$
C $Name$

#ifdef ALLOW_STREAMICE

CADJ STORE area_shelf_streamice = tapelev2, key = ilev_2
CADJ STORE streamice_hmask = tapelev2, key = ilev_2
CADJ STORE u_streamice = tapelev2, key = ilev_2
CADJ STORE v_streamice = tapelev2, key = ilev_2
CADJ STORE h_streamice = tapelev2, key = ilev_2
CADJ STORE visc_streamice = tapelev2, key = ilev_2
CADJ STORE tau_beta_eff_streamice = tapelev2, key = ilev_2
CADJ STORE streamice_cg_a1 = tapelev2, key = ilev_2
CADJ STORE streamice_cg_a2 = tapelev2, key = ilev_2
CADJ STORE streamice_cg_a3 = tapelev2, key = ilev_2
CADJ STORE streamice_cg_a4 = tapelev2, key = ilev_2

#ifdef ALLOW_STREAMICE_2DTRACER
CADJ STORE trac2d
CADJ &     = tapelev2, key= ilev_2
#endif

CADJ STORE cost_func1_streamice
CADJ &     = tapelev2, key = ilev_2

CADJ STORE surf_el_streamice
CADJ &     = tapelev2, key=ilev_2
CADJ STORE float_frac_streamice
CADJ &     = tapelev2, key=ilev_2

CADJ STORE c_basal_friction
CADJ &     = tapelev2, key=ilev_2

# ifdef STREAMICE_HYBRID_STRESS
CADJ STORE visc_streamice_full
CADJ &     = tapelev2, key = ilev_2
# endif

# ifdef ALLOW_GENTIM2D_CONTROL
CADJ STORE bdot_streamice
CADJ &     = tapelev2, key = ilev_2
# endif

#ifdef STREAMICE_TRACER_AB
CADJ STORE GAD_trac_2d
CADJ &     = tapelev2, key = ilev_2
#endif


#endif /* ALLOW_STREAMICE */
