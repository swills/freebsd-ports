# Created by: Jeffrey H. Johnson <CPE1704TKS@bellsouth.net>
# $FreeBSD: head/archivers/xar/Makefile 426319 2016-11-18 11:12:40Z jhale $

PORTNAME=	xar
PORTVERSION=	1.6.1
CATEGORIES=	archivers
MASTER_SITES=	https://github.com/downloads/mackyle/xar/ \
		GENTOO

MAINTAINER=	ports@FreeBSD.org
COMMENT=	OpenDarwin XML eXtensible ARchiver

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		gmake libtool ssl
USE_GNOME=	libxml2
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/${PORTNAME} \
		${STAGEDIR}${PREFIX}/lib/lib${PORTNAME}.so

.include <bsd.port.mk>
