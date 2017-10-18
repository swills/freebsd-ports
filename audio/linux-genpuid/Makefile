# Created by: Christopher Key <cjk32@cam.ac.uk>
# $FreeBSD: head/audio/linux-genpuid/Makefile 451964 2017-10-13 08:57:45Z bapt $

PORTNAME=	genpuid
PORTVERSION=	1.4
CATEGORIES=	audio linux
MASTER_SITES=	http://www.spicefly.com/files/
PKGNAMEPREFIX=	linux-
DISTNAME=	${PORTNAME}_linux_${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Application for generating MusicIP puids

USES=		linux tar:tgz
BROKEN=		No public distfiles

NO_BUILD=		yes
IA32_BINARY_PORT=	yes

PLIST_FILES=	bin/genpuid bin/mipcore libexec/mipcore

do-install:
	${BRANDELF} -t Linux ${WRKDIR}/${PORTNAME}-${PORTVERSION}/genpuid
	${BRANDELF} -t Linux ${WRKDIR}/${PORTNAME}-${PORTVERSION}/mipcore
	${INSTALL_PROGRAM} ${WRKDIR}/${PORTNAME}-${PORTVERSION}/genpuid ${STAGEDIR}${PREFIX}/bin
	${INSTALL_PROGRAM} ${WRKDIR}/${PORTNAME}-${PORTVERSION}/mipcore ${STAGEDIR}${PREFIX}/libexec
	${LN} -fhs ${PREFIX}/libexec/mipcore ${STAGEDIR}${PREFIX}/bin/mipcore

.include <bsd.port.mk>
