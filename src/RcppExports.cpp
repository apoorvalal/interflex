// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// fastplm
List fastplm(arma::mat data, arma::mat FE, arma::colvec weight, int FEcoefs);
RcppExport SEXP _interflex_fastplm(SEXP dataSEXP, SEXP FESEXP, SEXP weightSEXP, SEXP FEcoefsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type data(dataSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type FE(FESEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type weight(weightSEXP);
    Rcpp::traits::input_parameter< int >::type FEcoefs(FEcoefsSEXP);
    rcpp_result_gen = Rcpp::wrap(fastplm(data, FE, weight, FEcoefs));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_interflex_fastplm", (DL_FUNC) &_interflex_fastplm, 4},
    {NULL, NULL, 0}
};


