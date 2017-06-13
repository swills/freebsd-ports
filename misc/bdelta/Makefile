# Created by: Roman Bogorodskiy <novel@FreeBSD.org>
# $FreeBSD: head/misc/bdelta/Makefile 430490 2017-01-03 18:12:13Z mat $

PORTNAME=	bdelta
PORTVERSION=	0.3.1
DISTVERSIONPREFIX=v
CATEGORIES=	misc devel

MAINTAINER=	novel@FreeBSD.org
COMMENT=	Advanced delta creator, patcher, and library

LICENSE=	MPL

WRKSRC_SUBDIR=	src

USES=		gmake
USE_LDCONFIG=	yes
USE_GITHUB=	yes
GH_ACCOUNT=	jjwhitney
GH_PROJECT=	BDelta

PLIST_FILES=	bin/bdelta bin/bpatch lib/libbdelta.so

MAKE_JOBS_UNSAFE=	yes

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/bdelta ${STAGEDIR}${PREFIX}/bin
	${INSTALL_PROGRAM} ${WRKSRC}/bpatch ${STAGEDIR}${PREFIX}/bin
	${INSTALL_LIB} ${WRKSRC}/libbdelta.so ${STAGEDIR}${PREFIX}/lib

.include <bsd.port.mk>
