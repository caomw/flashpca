// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// flashpca_internal
List flashpca_internal(Eigen::Map<Eigen::MatrixXd> X, int method, int stand, bool transpose, unsigned int ndim, unsigned int nextra, unsigned int maxiter, double tol, long seed, int kernel, double sigma, bool rbf_center, unsigned int rbf_sample, bool save_kernel, bool do_orth, bool verbose, bool do_loadings, int mem, bool return_scale, unsigned int num_threads);
RcppExport SEXP flashpcaR_flashpca_internal(SEXP XSEXP, SEXP methodSEXP, SEXP standSEXP, SEXP transposeSEXP, SEXP ndimSEXP, SEXP nextraSEXP, SEXP maxiterSEXP, SEXP tolSEXP, SEXP seedSEXP, SEXP kernelSEXP, SEXP sigmaSEXP, SEXP rbf_centerSEXP, SEXP rbf_sampleSEXP, SEXP save_kernelSEXP, SEXP do_orthSEXP, SEXP verboseSEXP, SEXP do_loadingsSEXP, SEXP memSEXP, SEXP return_scaleSEXP, SEXP num_threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::MatrixXd> >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type method(methodSEXP);
    Rcpp::traits::input_parameter< int >::type stand(standSEXP);
    Rcpp::traits::input_parameter< bool >::type transpose(transposeSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type ndim(ndimSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type nextra(nextraSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< long >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< int >::type kernel(kernelSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< bool >::type rbf_center(rbf_centerSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type rbf_sample(rbf_sampleSEXP);
    Rcpp::traits::input_parameter< bool >::type save_kernel(save_kernelSEXP);
    Rcpp::traits::input_parameter< bool >::type do_orth(do_orthSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< bool >::type do_loadings(do_loadingsSEXP);
    Rcpp::traits::input_parameter< int >::type mem(memSEXP);
    Rcpp::traits::input_parameter< bool >::type return_scale(return_scaleSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type num_threads(num_threadsSEXP);
    __result = Rcpp::wrap(flashpca_internal(X, method, stand, transpose, ndim, nextra, maxiter, tol, seed, kernel, sigma, rbf_center, rbf_sample, save_kernel, do_orth, verbose, do_loadings, mem, return_scale, num_threads));
    return __result;
END_RCPP
}
// scca_internal
List scca_internal(Eigen::Map<Eigen::MatrixXd> X, Eigen::Map<Eigen::MatrixXd> Y, double lambda1, double lambda2, unsigned int ndim, int stand, int mem, long seed, int maxiter, double tol, bool verbose, unsigned int num_threads, bool useV, Eigen::Map<Eigen::MatrixXd> Vinit);
RcppExport SEXP flashpcaR_scca_internal(SEXP XSEXP, SEXP YSEXP, SEXP lambda1SEXP, SEXP lambda2SEXP, SEXP ndimSEXP, SEXP standSEXP, SEXP memSEXP, SEXP seedSEXP, SEXP maxiterSEXP, SEXP tolSEXP, SEXP verboseSEXP, SEXP num_threadsSEXP, SEXP useVSEXP, SEXP VinitSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::MatrixXd> >::type X(XSEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::MatrixXd> >::type Y(YSEXP);
    Rcpp::traits::input_parameter< double >::type lambda1(lambda1SEXP);
    Rcpp::traits::input_parameter< double >::type lambda2(lambda2SEXP);
    Rcpp::traits::input_parameter< unsigned int >::type ndim(ndimSEXP);
    Rcpp::traits::input_parameter< int >::type stand(standSEXP);
    Rcpp::traits::input_parameter< int >::type mem(memSEXP);
    Rcpp::traits::input_parameter< long >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type num_threads(num_threadsSEXP);
    Rcpp::traits::input_parameter< bool >::type useV(useVSEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::MatrixXd> >::type Vinit(VinitSEXP);
    __result = Rcpp::wrap(scca_internal(X, Y, lambda1, lambda2, ndim, stand, mem, seed, maxiter, tol, verbose, num_threads, useV, Vinit));
    return __result;
END_RCPP
}
