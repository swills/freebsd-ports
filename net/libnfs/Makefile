# Created by: Manuel Creach <manuel.creach@icloud.com>
# $FreeBSD: head/net/libnfs/Makefile 471550 2018-06-04 14:46:41Z mat $

PORTNAME=	libnfs
PORTVERSION=	2.0.0
DISTVERSIONPREFIX=	${PORTNAME}-
CATEGORIES=	net

MAINTAINER=	snoe925@gmail.com
COMMENT=	Client library for accessing NFS shares over a network

LICENSE=	LGPL21 GPLv3
LICENSE_COMB=	multi
LICENSE_FILE=	${WRKSRC}/COPYING

GNU_CONFIGURE=	yes
USES=		autoreconf gmake libtool pkgconfig
USE_LDCONFIG=	yes
USE_GITHUB=	yes
GH_ACCOUNT=	sahlberg

CONFIGURE_ARGS=	--disable-werror

post-patch:
	${REINPLACE_CMD} 's|$$(libdir)/\(pkgconfig\)|$$(prefix)/libdata/\1|' \
		${WRKSRC}/Makefile.am

.include <bsd.port.mk>
