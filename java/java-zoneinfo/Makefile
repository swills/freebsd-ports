# Created by: Greg Lewis <glewis@FreeBSD.org>
# $FreeBSD: head/java/java-zoneinfo/Makefile 491321 2019-01-27 02:40:22Z glewis $

PORTNAME=	zoneinfo
DISTVERSION=	2018i
CATEGORIES=	java misc
MASTER_SITES=	LOCAL/glewis/javazi
PKGNAMEPREFIX=	java-
DISTNAME=	javazi-${DISTVERSION}

MAINTAINER=	glewis@FreeBSD.org
COMMENT=	Updated Java timezone definitions

LICENSE=	PD

WRKSRC=		${WRKDIR}
NO_BUILD=	yes

JAVASHAREDIR=	${PREFIX}/share/java

do-install:
	${MKDIR} ${STAGEDIR}${JAVASHAREDIR}/zi
	(cd ${WRKSRC}/zi && ${COPYTREE_SHARE} . ${STAGEDIR}${JAVASHAREDIR}/zi)

.include <bsd.port.mk>
