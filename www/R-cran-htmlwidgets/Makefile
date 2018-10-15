# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/www/R-cran-htmlwidgets/Makefile 481868 2018-10-12 02:09:07Z tota $

PORTNAME=	htmlwidgets
PORTVERSION=	1.3
CATEGORIES=	www
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	HTML Widgets for R

LICENSE=	MIT

CRAN_DEPENDS=	R-cran-htmltools>=0.3:textproc/R-cran-htmltools \
		R-cran-jsonlite>=0.9.16:converters/R-cran-jsonlite \
		R-cran-yaml>0:textproc/R-cran-yaml
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}

USES=	cran:auto-plist

.include <bsd.port.mk>
