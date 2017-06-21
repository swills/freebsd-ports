# Created by: Steven Kreuzer <skreuzer@FreeBSD.org>
# $FreeBSD: head/databases/R-cran-RSQLite/Makefile 443845 2017-06-18 18:09:16Z dbn $

PORTNAME=	RSQLite
PORTVERSION=	1.0.0
PORTREVISION=	1
CATEGORIES=	databases
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	Database Interface R driver for SQLite

LICENSE=	LGPL20

BUILD_DEPENDS=	R-cran-DBI>=0.2.5:databases/R-cran-DBI
RUN_DEPENDS=	R-cran-DBI>=0.2.5:databases/R-cran-DBI

USES=		cran:auto-plist,compiles

.include <bsd.port.mk>
