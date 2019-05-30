# Created by: ijliao
# $FreeBSD$

PORTNAME=	batik
DISTVERSION=	1.10
CATEGORIES=	graphics java
MASTER_SITES=	APACHE/xmlgraphics/${PORTNAME}/source
DISTFILES=	${PORTNAME}-src-${PORTVERSION}${EXTRACT_SUFX}

MAINTAINER=	makc@FreeBSD.org
COMMENT=	Java based SVG toolkit

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

CPE_VENDOR=	apache

USES=		cpe
USE_JAVA=	1.6+
USE_ANT=	yes
ALL_TARGET=	jars all-jar
# Prevent out of memory error during build
MAKE_ENV+=	"ANT_OPTS=-Xmx512m"

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}
INSTALL_WRKSRC=	${WRKSRC}/${PORTNAME}-${PORTVERSION}
DATADIR=	${JAVASHAREDIR}/${PORTNAME}

do-install:
	(cd ${INSTALL_WRKSRC} && ${COPYTREE_SHARE} . ${STAGEDIR}${DATADIR})

.include <bsd.port.mk>
