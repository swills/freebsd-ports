# Created by: proff
# $FreeBSD: head/games/an/Makefile 473551 2018-06-29 14:22:11Z jbeich $

PORTNAME=	an
PORTVERSION=	1.2
PORTREVISION=	5
CATEGORIES=	games
MASTER_SITES=	DEBIAN_POOL
DISTNAME=	${PORTNAME}_${PORTVERSION}.orig

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Fast anagram generator

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libicuuc.so:devel/icu

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

USES=		gmake tar:xz
PLIST_FILES=	bin/${PORTNAME} \
		man/man6/${PORTNAME}.6.gz

.include <bsd.port.mk>
