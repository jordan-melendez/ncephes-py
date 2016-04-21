/*
 *   This file was automatically generated by version 1.7 of cextract.
 *   Manual editing not recommended.
 *
 *   Created: Sun Jan  9 15:07:08 2000
 */
#ifndef __CEXTRACT__
#if __STDC__

extern double cabs ( cmplx *z );
extern void cadd ( cmplx *a, cmplx *b, cmplx *c );
extern double cay ( double q );
extern void cdiv ( cmplx *a, cmplx *b, cmplx *c );
extern void cmov ( short *a, short *b );
extern void cmul ( cmplx *a, cmplx *b, cmplx *c );
extern void cneg ( cmplx *a );
extern void csqrt ( cmplx *z, cmplx *w );
extern void csub ( cmplx *a, cmplx *b, cmplx *c );
extern double ellie ( double phi, double m );
extern double ellik ( double phi, double m );
extern double ellpe ( double x );
extern int ellpj ( double u, double m, double *sn, double *cn, double *dn, double *ph );
extern double ellpk ( double x );
extern int getnum ( char *line, double *val );
extern int lampln ( void );
extern int main ( void );
extern void mtherr ( char *name, int code );
extern double p1evl ( double x, double coef[], int N );
extern double polevl ( double x, double coef[], int N );
extern int quadf ( double x, double y, int pzflg );
extern double response ( double f, double amp );
extern int spln ( void );
extern int xfun ( void );
extern int zplna ( void );
extern int zplnb ( void );
extern int zplnc ( void );

#else /* __STDC__ */

extern double cabs (/* cmplx *z */);
extern void cadd (/* cmplx *a, cmplx *b, cmplx *c */);
extern double cay (/* double q */);
extern void cdiv (/* cmplx *a, cmplx *b, cmplx *c */);
extern void cmov (/* short *a, short *b */);
extern void cmul (/* cmplx *a, cmplx *b, cmplx *c */);
extern void cneg (/* cmplx *a */);
extern void csqrt (/* cmplx *z, cmplx *w */);
extern void csub (/* cmplx *a, cmplx *b, cmplx *c */);
extern double ellie (/* double phi, double m */);
extern double ellik (/* double phi, double m */);
extern double ellpe (/* double x */);
extern int ellpj (/* double u, double m, double *sn, double *cn, double *dn, double *ph */);
extern double ellpk (/* double x */);
extern int getnum (/* char *line, double *val */);
extern int lampln (/* void */);
extern int main (/* void */);
extern void mtherr (/* char *name, int code */);
extern double p1evl (/* double x, double coef[], int N */);
extern double polevl (/* double x, double coef[], int N */);
extern int quadf (/* double x, double y, int pzflg */);
extern double response (/* double f, double amp */);
extern int spln (/* void */);
extern int xfun (/* void */);
extern int zplna (/* void */);
extern int zplnb (/* void */);
extern int zplnc (/* void */);

#endif /* __STDC__ */
#endif /* __CEXTRACT__ */