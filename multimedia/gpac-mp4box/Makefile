# Created by: Pascal Vizeli <pvizeli@yahoo.de>
# $FreeBSD$

PORTNAME=	mp4box
DISTVERSION=	0.8.0
DISTVERSIONPREFIX=	v
CATEGORIES=	multimedia
PKGNAMEPREFIX=	gpac-

MAINTAINER=	pvizeli@yahoo.de
COMMENT=	Tool for merge mpg4 from Gpac

LICENSE=	LGPL21

LIB_DEPENDS=	libgpac.so:multimedia/gpac-libgpac

USE_GITHUB= yes
GH_ACCOUNT= gpac
GH_PROJECT= gpac

CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib -lgpac

WRKSRC_SUBDIR=	applications/mp4box
PLIST_FILES=	bin/mp4box man/man1/mp4box.1.gz

do-build:
	cd ${WRKSRC} && ${CC} ${CFLAGS} ${LDFLAGS} -o mp4box \
		filedump.c fileimport.c live.c main.c

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/mp4box ${STAGEDIR}${PREFIX}/bin/mp4box
	${INSTALL_MAN} ${WRKSRC}/../../doc/man/mp4box.1 \
		${STAGEDIR}${PREFIX}/man/man1/mp4box.1

.include <bsd.port.mk>
