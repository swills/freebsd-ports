# Created by: Veniamin Gvozdikov <vg@FreeBSD.org>
# $FreeBSD$

PORTNAME=	angelscript
PORTVERSION=	2.32.0
CATEGORIES=	lang
MASTER_SITES=	http://www.angelcode.com/angelscript/sdk/files/
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	AngelCode Scripting Library

LICENSE=	ZLIB

BROKEN_aarch64=		Does not build: invokes x86 asm
BROKEN_powerpc64=	Does not build: invokes x86 asm
BROKEN_sparc64=		Does not build: invokes x86 asm

#MAKE_ARGS=	DESTDIR=${STAGEDIR}
USES=		alias gmake zip
USE_LDCONFIG=	yes

WRKSRC=		${WRKDIR}/sdk/angelscript/projects/gnuc/

PLIST_FILES=	include/angelscript.h \
		lib/libangelscript.a \
		lib/libangelscript.so \
		lib/libangelscript.so.${PORTVERSION}

.include <bsd.port.mk>
