% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/00_mfd.R
\name{plot_mfd}
\alias{plot_mfd}
\title{Plot a Multivariate Functional Data Object.}
\usage{
plot_mfd(
  mfdobj,
  mapping = NULL,
  data = NULL,
  stat = "identity",
  position = "identity",
  na.rm = TRUE,
  orientation = NA,
  show.legend = NA,
  inherit.aes = TRUE,
  type_mfd = "mfd",
  y_lim_equal = FALSE,
  ...
)
}
\arguments{
\item{mfdobj}{A multivariate functional data object of class mfd.}

\item{mapping}{Set of aesthetic mappings additional
to \code{x} and \code{y} as passed to the function
\code{ggplot2::geom:line}.}

\item{data}{A \code{data.frame} providing columns
to create additional aesthetic mappings.
It must contain a factor column "id" with the replication values
as in \code{mfdobj$fdnames[[2]]}.
If it contains a column "var", this must contain
the functional variables as in \code{mfdobj$fdnames[[3]]}.}

\item{stat}{See \code{ggplot2::\link[ggplot2]{geom_line}}.}

\item{position}{See \code{ggplot2::\link[ggplot2]{geom_line}}.}

\item{na.rm}{See \code{ggplot2::\link[ggplot2]{geom_line}}.}

\item{orientation}{See \code{ggplot2::\link[ggplot2]{geom_line}}.}

\item{show.legend}{See \code{ggplot2::\link[ggplot2]{geom_line}}.}

\item{inherit.aes}{See \code{ggplot2::\link[ggplot2]{geom_line}}.}

\item{type_mfd}{A character value equal to "mfd" or "raw".
If "mfd", the smoothed functional data are plotted, if "raw",
the original discrete data are plotted.}

\item{y_lim_equal}{A logical value. If \code{TRUE}, the limits of the y-axis
are the same for all functional variables.
If \code{FALSE}, limits are different for each variable.
Default value is \code{FALSE}.}

\item{...}{See \code{ggplot2::\link[ggplot2]{geom_line}}.}
}
\value{
A plot of the multivariate functional data object.
}
\description{
Plot an object of class \code{mfd} using \code{ggplot2}
and \code{patchwork}.
}
\examples{
library(funcharts)
library(ggplot2)
mfdobj <- data_sim_mfd()
ids <- mfdobj$fdnames[[2]]
df <- data.frame(id = ids, first_two_obs = ids \%in\% c("rep1", "rep2"))
plot_mfd(mapping = aes(colour = first_two_obs),
         data = df,
         mfdobj = mfdobj)

}
