# Created by: wosch
# $FreeBSD: head/german/phone/Makefile 449269 2017-09-05 05:44:28Z dinoex $

PORTNAME=	phone
PORTVERSION=	1.20170802
CATEGORIES=	german
MASTER_SITES=	ftp://ftp.dinoex.org/pub/avon/
DISTNAME=	NVONB.INTERNET.20170802.ONB

MAINTAINER=	dinoex@FreeBSD.org
COMMENT=	German phone code / Deutsche Telefonvorwahl (AVON)

LICENSE=	PD

USES=		zip dos2unix
NO_WRKSUBDIR=	YES
NO_BUILD=	YES
PLIST_FILES=	share/misc/de.phone

do-install:
	${INSTALL_DATA} ${WRKSRC}/${DISTNAME}.csv ${STAGEDIR}${PREFIX}/share/misc/de.phone

.include <bsd.port.mk>
