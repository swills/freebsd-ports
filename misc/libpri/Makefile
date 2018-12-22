# Created by: Alexander Timoshenko <gonzo@univ.kiev.ua>
# $FreeBSD: head/misc/libpri/Makefile 487335 2018-12-13 02:21:31Z fjoe $

PORTNAME=	libpri
PORTVERSION=	1.6.0
CATEGORIES=	misc
MASTER_SITES=	http://downloads.asterisk.org/pub/telephony/libpri/releases/

MAINTAINER=	fjoe@FreeBSD.org
COMMENT=	C implementation of the Primary Rate ISDN specification

LICENSE=	GPLv2

USES=		gmake
USE_LDCONFIG=	yes
PLIST_FILES=	include/libpri.h lib/libpri.a lib/libpri.so lib/libpri.so.1
MAKE_ARGS=	INSTALL_PREFIX=${STAGEDIR}${PREFIX}

ONLY_FOR_ARCHS=	amd64 i386 sparc64

post-patch:
	${REINPLACE_CMD} -e '/^all:/s/$$(UTILITIES)//' ${WRKSRC}/Makefile

.include <bsd.port.mk>
