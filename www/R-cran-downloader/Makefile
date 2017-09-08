# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/www/R-cran-downloader/Makefile 449288 2017-09-05 14:48:17Z tota $

PORTNAME=	downloader
PORTVERSION=	0.4
CATEGORIES=	www
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Download Files over HTTP and HTTPS

LICENSE=	GPLv2

CRAN_DEPENDS=	R-cran-digest>0:security/R-cran-digest
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}

USES=		cran:auto-plist

.include <bsd.port.mk>
