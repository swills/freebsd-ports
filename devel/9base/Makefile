# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: head/devel/9base/Makefile 446402 2017-07-22 14:33:15Z sbz $

PORTNAME=	9base
PORTVERSION=	20170701
CATEGORIES=	devel
MASTER_SITES=	http://dl.suckless.org/tools/
DISTNAME=	${PORTNAME}-6

MAINTAINER=	sbz@FreeBSD.org
COMMENT=	Port of various original plan9 tools

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

ONLY_FOR_ARCHS=		amd64 i386 sparc64
ONLY_FOR_ARCHS_REASON=	has low-level code unavailable for ${ARCH}

USES=		shebangfix
SHEBANG_FILES=	troff/tmac/sendcover \
		troff/font/devutf/mkMAP
SHEBANG_LANG=	rc
rc_OLD_CMD=	${PREFIX}/bin/rc
rc_CMD=		${PREFIX}/9/bin/rc
MANPREFIX=	${PREFIX}/9
MAKE_ARGS=	PREFIX="${PREFIX}/9" CC="${CC}" MANPREFIX="${MANPREFIX}/man" \
		CFLAGS="${CFLAGS} -I. -c" LDFLAGS="${LDFLAGS} -L."
MAKE_JOBS_UNSAFE=	yes

post-patch:
	@${REINPLACE_CMD} -e 's|PREFIX|"${PREFIX}/9"|' ${WRKSRC}/lib9/get9root.c

post-install:
	@${FILE} ${STAGEDIR}${PREFIX}/9/bin/* | ${AWK} -F: '/ not stripped/{print $$1}' | \
		${XARGS} ${STRIP_CMD}

.include <bsd.port.mk>
