# Generated by using Rcpp::compileAttributes() -> do not edit by hand
# Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

score <- function(e, lambda, k, huber = TRUE) {
    .Call(`_funcharts_score`, e, lambda, k, huber)
}

score2 <- function(e, lambda, k, huber = TRUE) {
    .Call(`_funcharts_score2`, e, lambda, k, huber)
}

statisticY_EWMA_vec <- function(X, Y_previous, lambda, k, huber) {
    .Call(`_funcharts_statisticY_EWMA_vec`, X, Y_previous, lambda, k, huber)
}

statisticY_EWMA_cpp <- function(X, lambda, k, huber, idx) {
    .Call(`_funcharts_statisticY_EWMA_cpp`, X, lambda, k, huber, idx)
}

calculate_T2 <- function(Y, Vectors, Values) {
    .Call(`_funcharts_calculate_T2`, Y, Vectors, Values)
}

calculate_T2_vec <- function(Y, Vectors, Values) {
    .Call(`_funcharts_calculate_T2_vec`, Y, Vectors, Values)
}

get_RL_cpp <- function(X2, X_IC, idx2, idx_IC, lambda, k, huber, h, Values, Vectors) {
    .Call(`_funcharts_get_RL_cpp`, X2, X_IC, idx2, idx_IC, lambda, k, huber, h, Values, Vectors)
}

