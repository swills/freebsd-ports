# Created by: trasz
# $FreeBSD: head/textproc/iksemel/Makefile 484628 2018-11-10 18:12:57Z bapt $

PORTNAME=	iksemel
PORTVERSION=	1.4
PORTREVISION=	8
CATEGORIES=	textproc

MAINTAINER=	ports@FreeBSD.org
COMMENT=	XML parser library mainly designed for Jabber applications

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libgnutls.so:security/gnutls

USE_GITHUB=	yes
GH_ACCOUNT=	meduketto
GH_TAGNAME=	6cddfef

USES=		autoreconf libtool makeinfo pathfix pkgconfig
GNU_CONFIGURE=	yes
CPPFLAGS+=	${CXXFLAGS} -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip

INFO=		iksemel

post-patch:
	@${REINPLACE_CMD} -e 's|@setfilename iksemel|@setfilename iksemel.info|' \
	    ${WRKSRC}/doc/iksemel.texi

.include <bsd.port.mk>
