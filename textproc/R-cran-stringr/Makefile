# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/textproc/R-cran-stringr/Makefile 440316 2017-05-07 08:25:39Z tota $

PORTNAME=	stringr
PORTVERSION=	1.2.0
CATEGORIES=	textproc
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Make it easier to work with strings

LICENSE=	GPLv2

CRAN_DEPENDS=	R-cran-stringi>=0.4.1:textproc/R-cran-stringi \
		R-cran-magrittr>0:devel/R-cran-magrittr
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}

USES=	cran:auto-plist

.include <bsd.port.mk>
