# Created by: Machiel Mastenbroek <machiel_mastenbroek@hotmail.com>
# $FreeBSD: head/misc/skyutils/Makefile 428304 2016-12-10 16:04:43Z brnrd $

PORTNAME=	skyutils
PORTVERSION=	2.9
PORTREVISION=	5
CATEGORIES=	misc
MASTER_SITES=	LOCAL/laszlof \
		http://mirror.amdmi3.ru/distfiles/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Library required by smssend (same author)

USES=		autoreconf libtool ssl
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

WRKSRC=		${WRKDIR}/${PORTNAME}

pre-configure:
	@${REINPLACE_CMD} -e's/[[:cntrl:]]*$$//' ${WRKSRC}/src/skyutils.h

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libskyutils.so

.include <bsd.port.mk>
