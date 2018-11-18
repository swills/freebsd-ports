# Created by: Greg Lewis <glewis@FreeBSD.org>
# $FreeBSD: head/java/java-zoneinfo/Makefile 485141 2018-11-17 17:22:28Z glewis $

PORTNAME=	zoneinfo
DISTVERSION=	2018g
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
