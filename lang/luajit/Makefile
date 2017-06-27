# Created by: Sergey A. Osokin <osa@FreeBSD.org>
# $FreeBSD: head/lang/luajit/Makefile 444433 2017-06-26 23:44:13Z linimon $

PORTNAME=	luajit
DISTVERSION=	2.0.5
CATEGORIES=	lang
MASTER_SITES=	http://luajit.org/download/
DISTNAME=	LuaJIT-${DISTVERSION}

MAINTAINER=	osa@FreeBSD.org
COMMENT=	Just-In-Time Compiler for Lua

WRKSRC=		${WRKDIR}/LuaJIT-${DISTVERSION}
USES=		gmake
USE_LDCONFIG=	yes

PLIST_SUB+=	VERSION=${DISTVERSION}

ONLY_FOR_ARCHS=		amd64 armv6 i386
ONLY_FOR_ARCHS_REASON=	Requires newer gcc/clang to compile.

post-install:
	${LN} -sf ${PORTNAME}-${DISTVERSION} \
		${STAGEDIR}${PREFIX}/bin/${PORTNAME}
	@${INSTALL_MAN} ${WRKSRC}/etc/luajit.1 ${STAGEDIR}${MAN1PREFIX}/man/man1

.include <bsd.port.mk>
