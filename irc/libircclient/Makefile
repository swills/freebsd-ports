# Created by: Julien Laffaye <kimelto@gmail.com>
# $FreeBSD: head/irc/libircclient/Makefile 454226 2017-11-15 09:00:09Z amdmi3 $

PORTNAME=	libircclient
PORTVERSION=	1.7
CATEGORIES=	irc devel
MASTER_SITES=	SF

MAINTAINER=	jlaffaye@FreeBSD.org
COMMENT=	IRC library to create IRC clients

LICENSE=	LGPL3+
LICENSE_FILE=	${WRKSRC}/LICENSE

OPTIONS_DEFINE=	OPENSSL IPV6 EXAMPLES
OPTIONS_DEFAULT=	OPENSSL

OPENSSL_USES=			ssl
OPENSSL_CONFIGURE_ENABLE=	openssl
OPENSSL_LDFLAGS=		-L${OPENSSLLIB}
OPENSSL_CFLAGS=			-I${OPENSSLINC}
IPV6_CONFIGURE_ENABLE=		ipv6

BUILD_WRKSRC=	${WRKSRC}/src
GNU_CONFIGURE=	yes

do-install:
	${INSTALL_DATA} ${WRKSRC}/include/*.h ${STAGEDIR}${PREFIX}/include
	${INSTALL_DATA} ${WRKSRC}/src/libircclient.a ${STAGEDIR}${PREFIX}/lib

do-install-EXAMPLES-on:
	(cd ${WRKSRC}/examples/ && ${COPYTREE_SHARE} . ${STAGEDIR}${EXAMPLESDIR})

.include <bsd.port.mk>
