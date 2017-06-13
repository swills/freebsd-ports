# Created by: Denis Shaposhnikov <dsh@vlink.ru>
# $FreeBSD: head/security/tclsasl/Makefile 413747 2016-04-21 16:48:50Z gahr $

PORTNAME=	tclsasl
PORTVERSION=	1.0
PORTREVISION=	3
CATEGORIES=	security tcl
MASTER_SITES=	http://beepcore-tcl.sourceforge.net/

MAINTAINER=	dsh@vlink.ru
COMMENT=	Tcl interface to the Cyrus SASLv2 library

LIB_DEPENDS=	libsasl2.so:security/cyrus-sasl2

USES=		tcl:tea libtool tar:tgz
USE_LDCONFIG=	yes

CONFIGURE_ARGS=	--with-cyrus-sasl=${LOCALBASE}
CONFIGURE_ENV=	INSTALL="${INSTALL_DATA}" STAGEDIR="${STAGEDIR}"

PORTDOCS=	tclsasl.html

post-install:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/doc/tclsasl.html ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
