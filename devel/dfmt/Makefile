# Created by: Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: head/devel/dfmt/Makefile 471550 2018-06-04 14:46:41Z mat $

PORTNAME=	dfmt
PORTVERSION=	0.7.0
DISTVERSIONPREFIX=	v
CATEGORIES=	devel

MAINTAINER=	acm@FreeBSD.org
COMMENT=	Formatter for D source code

LICENSE=	BSL

BUILD_DEPENDS=	ldmd2:lang/ldc \
		dub:devel/dub \
		${LOCALBASE}/lib/d/libdparse.a:devel/libdparse \
		${LOCALBASE}/lib/d/libstdx-allocator.a:devel/stdx-allocator

USE_GITHUB=	yes
GH_ACCOUNT=	dlang-community

PLIST_FILES=	bin/${PORTNAME}
DUB_CMD=	${LOCALBASE}/bin/dub build --build=release

post-patch:
	${REINPLACE_CMD} -e "s|%%LOCALBASE%%|${LOCALBASE}|g" ${WRKSRC}/dub.json

do-build:
	@cd ${WRKSRC} && ${DUB_CMD}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/bin/${PORTNAME} ${STAGEDIR}${PREFIX}/bin/

.include <bsd.port.mk>
