# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: head/archivers/unfoo/Makefile 419566 2016-08-04 00:15:50Z marino $

PORTNAME=	unfoo
PORTVERSION=	1.0.7
DISTVERSIONPREFIX=	v
CATEGORIES=	archivers

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Tiny sh(1) wrapper to simplify decompression of files

RUN_DEPENDS=	unace:archivers/unace \
		unrar:archivers/unrar \
		7z:archivers/p7zip

USE_GITHUB=	yes
GH_ACCOUNT=	vitaminmoo

NO_BUILD=	yes
NO_ARCH=	yes
PLIST_FILES=	bin/${PORTNAME}

post-patch:
	@${REINPLACE_CMD} -e '1s|/.*|/bin/sh|;s|==|=|' ${WRKSRC}/${PORTNAME}

do-install:
	@${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME} ${STAGEDIR}/${PREFIX}/bin

.include <bsd.port.mk>
