// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// score
arma::mat score(const arma::mat& e, const double lambda, const arma::mat& k, bool huber);
RcppExport SEXP _funcharts_score(SEXP eSEXP, SEXP lambdaSEXP, SEXP kSEXP, SEXP huberSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type e(eSEXP);
    Rcpp::traits::input_parameter< const double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type k(kSEXP);
    Rcpp::traits::input_parameter< bool >::type huber(huberSEXP);
    rcpp_result_gen = Rcpp::wrap(score(e, lambda, k, huber));
    return rcpp_result_gen;
END_RCPP
}
// score2
arma::vec score2(const arma::vec& e, const double lambda, const arma::vec& k, bool huber);
RcppExport SEXP _funcharts_score2(SEXP eSEXP, SEXP lambdaSEXP, SEXP kSEXP, SEXP huberSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type e(eSEXP);
    Rcpp::traits::input_parameter< const double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type k(kSEXP);
    Rcpp::traits::input_parameter< bool >::type huber(huberSEXP);
    rcpp_result_gen = Rcpp::wrap(score2(e, lambda, k, huber));
    return rcpp_result_gen;
END_RCPP
}
// statisticY_EWMA_vec
arma::vec statisticY_EWMA_vec(const arma::vec& X, const arma::vec& Y_previous, double lambda, const arma::vec& k, bool huber);
RcppExport SEXP _funcharts_statisticY_EWMA_vec(SEXP XSEXP, SEXP Y_previousSEXP, SEXP lambdaSEXP, SEXP kSEXP, SEXP huberSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Y_previous(Y_previousSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type k(kSEXP);
    Rcpp::traits::input_parameter< bool >::type huber(huberSEXP);
    rcpp_result_gen = Rcpp::wrap(statisticY_EWMA_vec(X, Y_previous, lambda, k, huber));
    return rcpp_result_gen;
END_RCPP
}
// statisticY_EWMA_cpp
arma::mat statisticY_EWMA_cpp(const arma::mat& X, double lambda, const arma::vec& k, bool huber, const arma::vec& idx);
RcppExport SEXP _funcharts_statisticY_EWMA_cpp(SEXP XSEXP, SEXP lambdaSEXP, SEXP kSEXP, SEXP huberSEXP, SEXP idxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type k(kSEXP);
    Rcpp::traits::input_parameter< bool >::type huber(huberSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type idx(idxSEXP);
    rcpp_result_gen = Rcpp::wrap(statisticY_EWMA_cpp(X, lambda, k, huber, idx));
    return rcpp_result_gen;
END_RCPP
}
// calculate_T2
double calculate_T2(const arma::vec& Y, const arma::mat& Vectors, const arma::vec& Values);
RcppExport SEXP _funcharts_calculate_T2(SEXP YSEXP, SEXP VectorsSEXP, SEXP ValuesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Vectors(VectorsSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Values(ValuesSEXP);
    rcpp_result_gen = Rcpp::wrap(calculate_T2(Y, Vectors, Values));
    return rcpp_result_gen;
END_RCPP
}
// calculate_T2_vec
arma::vec calculate_T2_vec(const arma::mat& Y, const arma::mat& Vectors, const arma::vec& Values);
RcppExport SEXP _funcharts_calculate_T2_vec(SEXP YSEXP, SEXP VectorsSEXP, SEXP ValuesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Vectors(VectorsSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Values(ValuesSEXP);
    rcpp_result_gen = Rcpp::wrap(calculate_T2_vec(Y, Vectors, Values));
    return rcpp_result_gen;
END_RCPP
}
// get_RL_cpp
List get_RL_cpp(const arma::mat& X2, const arma::mat& X_IC, const arma::vec& idx2, const arma::vec& idx_IC, double lambda, const arma::vec& k, bool huber, double h, const arma::vec& Values, const arma::mat& Vectors);
RcppExport SEXP _funcharts_get_RL_cpp(SEXP X2SEXP, SEXP X_ICSEXP, SEXP idx2SEXP, SEXP idx_ICSEXP, SEXP lambdaSEXP, SEXP kSEXP, SEXP huberSEXP, SEXP hSEXP, SEXP ValuesSEXP, SEXP VectorsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X2(X2SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X_IC(X_ICSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type idx2(idx2SEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type idx_IC(idx_ICSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type k(kSEXP);
    Rcpp::traits::input_parameter< bool >::type huber(huberSEXP);
    Rcpp::traits::input_parameter< double >::type h(hSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Values(ValuesSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Vectors(VectorsSEXP);
    rcpp_result_gen = Rcpp::wrap(get_RL_cpp(X2, X_IC, idx2, idx_IC, lambda, k, huber, h, Values, Vectors));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_funcharts_score", (DL_FUNC) &_funcharts_score, 4},
    {"_funcharts_score2", (DL_FUNC) &_funcharts_score2, 4},
    {"_funcharts_statisticY_EWMA_vec", (DL_FUNC) &_funcharts_statisticY_EWMA_vec, 5},
    {"_funcharts_statisticY_EWMA_cpp", (DL_FUNC) &_funcharts_statisticY_EWMA_cpp, 5},
    {"_funcharts_calculate_T2", (DL_FUNC) &_funcharts_calculate_T2, 3},
    {"_funcharts_calculate_T2_vec", (DL_FUNC) &_funcharts_calculate_T2_vec, 3},
    {"_funcharts_get_RL_cpp", (DL_FUNC) &_funcharts_get_RL_cpp, 10},
    {NULL, NULL, 0}
};

RcppExport void R_init_funcharts(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
