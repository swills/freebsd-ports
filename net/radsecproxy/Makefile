# Created by: Honza Betik
# $FreeBSD$

PORTNAME=	radsecproxy
PORTVERSION=	1.8.0
CATEGORIES=	net
MASTER_SITES=	GH

MAINTAINER=	m.tsatsenko@gmail.com
COMMENT=	Radsecproxy is a generic RADIUS proxy

LICENSE=	BSD3CLAUSE

LIB_DEPENDS=	libnettle.so:security/nettle

USES=		cpe tar:tgz ssl autoreconf localbase:ldflags

GNU_CONFIGURE=	yes
USE_GITHUB=	yes
USE_RC_SUBR=	${PORTNAME}
CONFIGURE_ARGS=	--with-ssl=${OPENSSLBASE}
CPE_VENDOR=	switch

.include <bsd.port.pre.mk>

post-install:
	${MAKE} install-man -C ${WRKSRC} ${MAKE_ARGS}
	${INSTALL_DATA} ${WRKSRC}/radsecproxy.conf-example \
		${STAGEDIR}${PREFIX}/etc

.include <bsd.port.post.mk>
