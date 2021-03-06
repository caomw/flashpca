% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/scca.R
\name{scca}
\alias{scca}
\title{Performs sparse canonical correlation analysis}
\usage{
scca(X, Y, lambda1 = 0, lambda2 = 0, stand = c("binom", "sd", "center",
  "none"), ndim = 10, maxiter = 1000, tol = 1e-04, seed = 1L,
  verbose = FALSE, num_threads = 1, mem = c("low", "high"),
  check_geno = TRUE, V = NULL)
}
\arguments{
\item{X}{An n by p numeric matrix}

\item{Y}{An n by k numeric matrix}

\item{lambda1}{Numeric. Non-negative L1 penalty on canonical vectors of X.}

\item{lambda2}{Numeric. Non-negative L1 penalty on canonical vectors of Y.}

\item{stand}{Character. One of "binom" (zero mean, unit variance
where variance is 2*p*(1-p), for SNP data),
"sd" (zero-mean, unit variance), "center" (zero mean), or "none". Note
that if you use "binom" for non-SNP data you may get garbage. Note that
currently the same standardization is applied to both X and Y. If you
require different standardizations, it's best to standardize yourself
and then choose stand="none".}

\item{ndim}{Integer. Positive number of canonical vectors to compute.}

\item{maxiter}{Integer. Positive, maximum number of iterations to perform.}

\item{tol}{Numeric. Tolerance for convergence.}

\item{seed}{Integer. Random seed for initialisation of CCA iterations.}

\item{verbose}{Logical.}

\item{num_threads}{Integer. Number of OpenMP threads to
use (only supported under Linux and on Mac if compiled with GCC).}

\item{mem}{Character. One of "low" or "high", where "low"
doesn't explicitly compute X^T Y, and "high" does.
This is useful for large X and Y.}

\item{check_geno}{Logical. Whether to explicitly check if the matrices
X and Y contain values other than {0, 1, 2}, when stand="binom". This can
be set to FALSE if you are sure your matrices only contain these values
(only matters when using stand="binom").}

\item{V}{Numeric. A vector to initialise "v" in SCCA iterations. By
default, it will be a vector of normally distributed variates.}
}
\value{
\code{scca} returns a list containing the following components:

\describe{  
   \item{U}{Top ndim left canonical vectors of X^T Y.}
   \item{V}{Top ndim right canonical vectors of X^T Y.}
   \item{d}{Top ndim canonical covariances, i.e., diag(cov(X U, Y V)). 
 Note that we don't divide by n-1.}
   \item{Px}{X times U.}
   \item{Py}{Y times V.}
}
}
\description{
Performs sparse canonical correlation analysis
}
\examples{

n <- 500
p <- 100
k <- 50
m <- 5
M <- matrix(rnorm(n * m), n, m)
Bx <- matrix(rnorm(m * p), m, p)
By <- matrix(rnorm(m * k), m, k)
X <- scale(M \%*\% Bx + rnorm(n * p))
Y <- scale(M \%*\% By + rnorm(n * k))

s <- scca(X, Y, lambda1=1e-2, lambda2=1e-2, ndim=5, stand="sd")

## The canonical correlations
diag(cor(s$Px, s$Py))

}

