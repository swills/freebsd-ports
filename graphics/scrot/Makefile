# Created by: Jeremy Norris <ishmael27@home.com>
# $FreeBSD$

PORTNAME=	scrot
DISTVERSIONPREFIX=	${PORTNAME}-
DISTVERSION=	0.9
CATEGORIES=	graphics
MASTER_SITES=	http://ftp.debian.org/debian/pool/main/s/scrot/
DISTNAME=	${PORTNAME}_${PORTVERSION}.orig

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Screen capture utility that utilizes Imlib2

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libgiblib.so:graphics/giblib \
		libImlib2.so:graphics/imlib2

WRKSRC=	${WRKDIR}/${PORTNAME}-${DISTVERSION}

GNU_CONFIGURE=	yes
USE_XORG=	x11

PLIST_FILES=	bin/${PORTNAME} man/man1/${PORTNAME}.1.gz
PORTDOCS=	*

OPTIONS_DEFINE=	DOCS

pre-configure:
	(cd ${WRKSRC} && ${SH} autogen.sh)

.include <bsd.port.mk>
