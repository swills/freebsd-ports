# Created by: Steven Kreuzer <skreuzer@FreeBSD.org>
# $FreeBSD: head/databases/R-cran-RSQLite.extfuns/Makefile 464084 2018-03-10 17:46:04Z gerald $

PORTNAME=	RSQLite.extfuns
PORTVERSION=	0.0.1
PORTREVISION=	9
CATEGORIES=	databases
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	SQLite extension functions for RSQLite

LICENSE=	APACHE20

BUILD_DEPENDS=	R-cran-RSQLite>=0.11.1:databases/R-cran-RSQLite
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		cran:auto-plist,compiles

.include <bsd.port.mk>
