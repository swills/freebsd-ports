# Created by: Steven Kreuzer <skreuzer@FreeBSD.org>
# $FreeBSD: head/databases/R-cran-RSQLite/Makefile 464084 2018-03-10 17:46:04Z gerald $

PORTNAME=	RSQLite
PORTVERSION=	1.0.0
PORTREVISION=	2
CATEGORIES=	databases
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	Database Interface R driver for SQLite

LICENSE=	LGPL20

BUILD_DEPENDS=	R-cran-DBI>=0.2.5:databases/R-cran-DBI
RUN_DEPENDS=	R-cran-DBI>=0.2.5:databases/R-cran-DBI

USES=		cran:auto-plist,compiles

.include <bsd.port.mk>
