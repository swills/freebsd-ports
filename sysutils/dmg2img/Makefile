# Created by: Gvozdikov Veniamin <g.veniamin@googlemail.com>
# $FreeBSD: head/sysutils/dmg2img/Makefile 433632 2017-02-08 06:36:26Z vg $

PORTNAME=	dmg2img
PORTVERSION=	1.6.6
CATEGORIES=	sysutils
MASTER_SITES=	http://vu1tur.eu.org/tools/

LICENSE=	GPLv2

MAINTAINER=	vg@FreeBSD.org
COMMENT=	DMG2IMG convert tool

USES=		ssl
PLIST_FILES=	bin/${PORTNAME} \
		bin/vfdecrypt

pre-configure:
	${REINPLACE_CMD} -e 's|%%PREFIX%%|${STAGEDIR}${PREFIX}/bin|g' \
		-e "s|\(CFLAGS =\)|\1 -I${OPENSSLINC} |g" \
		-e "s|\(-lcrypto\)|-L${OPENSSLLIB} \1|g" ${WRKSRC}/Makefile

post-build:
	${MAKE} -C ${WRKSRC} install

.include <bsd.port.mk>
