# Created by: gurkan@phys.ethz.ch
# $FreeBSD: head/japanese/jishyo/Makefile 405891 2016-01-12 16:20:31Z amdmi3 $

PORTNAME=	jishyo
PORTVERSION=	0.1
PORTREVISION=	6
CATEGORIES=	japanese gnustep
MASTER_SITES=	http://www.eskimo.com/~pburns/Dictionaries/files/
DISTNAME=	Jishyo-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	English to Japanese dictionary for GNUstep

LICENSE=	GPLv2+

PORTSCOUT=	skipv:0.2

USES=		gnustep
USE_GNUSTEP=	back build

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/GNUstep/System/Applications/Jishyo.app/Jishyo

.include <bsd.port.mk>
