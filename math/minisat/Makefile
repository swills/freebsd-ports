# Created by: Vsevolod Stakhov <vsevolod@FreeBSD.org>
# $FreeBSD: head/math/minisat/Makefile 483249 2018-10-28 09:36:56Z jbeich $

PORTNAME=	minisat
PORTVERSION=	2.2.1
PORTREVISION=	2
CATEGORIES=	math devel
MASTER_SITES=	http://highsecure.ru/distfiles/

MAINTAINER=	vsevolod@FreeBSD.org
COMMENT=	Minimalistic, open-source SAT solver

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		gmake
USE_LDCONFIG=	yes
MAKE_ENV=	prefix=${PREFIX} CFLAGS="-std=gnu++98"

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/${PORTNAME} \
		${STAGEDIR}${PREFIX}/lib/libminisat.so

.include <bsd.port.mk>
