# Created by: Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: head/devel/inifiled/Makefile 446357 2017-07-22 03:23:59Z acm $

PORTNAME=	inifiled
PORTVERSION=	1.0.2
CATEGORIES=	devel
MASTER_SITES=	https://github.com/burner/inifiled/archive/
DISTNAME=	${DISTVERSION:S/^/v/}
DIST_SUBDIR=	${PORTNAME}

MAINTAINER=	acm@FreeBSD.org
COMMENT=	Compile time ini file parser and writter generator for D

LICENSE=	BSL

BUILD_DEPENDS=	ldmd2:lang/ldc \
		dub:devel/dub

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}
DUB_CMD=	${LOCALBASE}/bin/dub build --build=release
D_INCLUDE_DIR=	${PREFIX}/include/d
D_LIB_DIR=	${PREFIX}/lib/d

do-build:
	@cd ${WRKSRC} && ${DUB_CMD}

do-install:
	@${MKDIR} ${STAGEDIR}${D_INCLUDE_DIR}
	@${MKDIR} ${STAGEDIR}${D_LIB_DIR}
	${INSTALL_DATA} ${WRKSRC}/libinifiled.a ${STAGEDIR}${D_LIB_DIR}
	cd ${WRKSRC}/source && ${COPYTREE_SHARE} . ${STAGEDIR}${D_INCLUDE_DIR} "-name *\.d"

.include <bsd.port.mk>
