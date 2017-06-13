# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/databases/R-cran-RMySQL/Makefile 440300 2017-05-07 05:17:47Z tota $

PORTNAME=	RMySQL
DISTVERSION=	0.10.11
CATEGORIES=	databases
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	R interface to the MySQL database

LICENSE=	GPLv2

CRAN_DEPENDS=	R-cran-DBI>=0.4:databases/R-cran-DBI
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}

USES=	cran:auto-plist,compiles mysql

post-patch:
	@${REINPLACE_CMD} -e '/bin\//s|bash|sh|' ${WRKSRC}/configure

.include <bsd.port.mk>
