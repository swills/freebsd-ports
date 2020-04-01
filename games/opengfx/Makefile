# Created by: Ilya A. Arkhipov <rum1cro@yandex.ru>
# $FreeBSD$

PORTNAME=	opengfx
PORTVERSION=	0.6.0
CATEGORIES=	games
MASTER_SITES=	https://cdn.openttd.org/${PORTNAME}-releases/${PORTVERSION}/

MAINTAINER=	rum1cro@yandex.ru
COMMENT=	Free alternative graphics for OpenTTD game engine

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/license.txt

DISTFILES=	${PORTNAME}-${PORTVERSION}-all.zip
USES=		zip

NO_BUILD=	yes
NO_ARCH=	yes

# upstream zipped a tar file, unpack it.
post-extract:
	@cd ${WRKDIR} && tar -xf ${PORTNAME}-${PORTVERSION}.tar

do-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/share/openttd/baseset/opengfx
	${INSTALL_DATA} ${WRKDIR}/opengfx-${PORTVERSION}/* \
		${STAGEDIR}${PREFIX}/share/openttd/baseset/opengfx

.include <bsd.port.mk>
