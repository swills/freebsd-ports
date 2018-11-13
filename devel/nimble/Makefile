# Created by: ports@nicandneal.net
# $FreeBSD: head/devel/nimble/Makefile 483803 2018-11-02 13:01:46Z 0mp $

PORTNAME=	nimble
DISTVERSIONPREFIX=	v
DISTVERSION=	0.9.0
CATEGORIES=	devel

MAINTAINER=	ports@nicandneal.net
COMMENT=	Package manager for the Nim programming language

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/license.txt

BUILD_DEPENDS=	nim:lang/nim
RUN_DEPENDS=	nim:lang/nim

USE_GITHUB=	yes
GH_ACCOUNT=	nim-lang

PLIST_FILES=	bin/nimble

do-build:
	@cd ${WRKSRC} && nim c --parallelBuild=${MAKE_JOBS_NUMBER} --path:${LOCALBASE}/nim src/nimble

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/src/nimble ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
