# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/www/R-cran-downloader/Makefile 464084 2018-03-10 17:46:04Z gerald $

PORTNAME=	downloader
PORTVERSION=	0.4
PORTREVISION=	1
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
