# Created by: Steven Kreuzer <skreuzer@FreeBSD.org>
# $FreeBSD: head/databases/R-cran-RSQLite.extfuns/Makefile 487272 2018-12-12 01:35:33Z gerald $

PORTNAME=	RSQLite.extfuns
PORTVERSION=	0.0.1
PORTREVISION=	10
CATEGORIES=	databases
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	SQLite extension functions for RSQLite

LICENSE=	APACHE20

BUILD_DEPENDS=	R-cran-RSQLite>=0.11.1:databases/R-cran-RSQLite
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		cran:auto-plist,compiles

.include <bsd.port.mk>
