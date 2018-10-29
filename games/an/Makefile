# Created by: proff
# $FreeBSD: head/games/an/Makefile 482830 2018-10-23 11:35:03Z jbeich $

PORTNAME=	an
PORTVERSION=	1.2
PORTREVISION=	6
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
