# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/textproc/R-cran-DT/Makefile 466392 2018-04-04 07:06:28Z tota $

PORTNAME=	DT
PORTVERSION=	0.4
CATEGORIES=	textproc
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Wrapper of the JavaScript Library 'DataTables'

LICENSE=	GPLv3

CRAN_DEPENDS=	R-cran-htmltools>=0.3.6:textproc/R-cran-htmltools \
		R-cran-htmlwidgets>=1.0:www/R-cran-htmlwidgets \
		R-cran-magrittr>0:devel/R-cran-magrittr \
		R-cran-crosstalk>0:www/R-cran-crosstalk
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}

USES=	cran:auto-plist

.include <bsd.port.mk>
