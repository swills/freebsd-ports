# Created by: Julien Laffaye <kimelto@gmail.com>
# $FreeBSD: head/irc/libircclient/Makefile 421725 2016-09-10 18:32:26Z marino $

PORTNAME=	libircclient
PORTVERSION=	1.7
CATEGORIES=	irc devel
MASTER_SITES=	SF

MAINTAINER=	jlaffaye@FreeBSD.org
COMMENT=	IRC library to create IRC clients

LICENSE=	LGPL20

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
	@${INSTALL_DATA} ${WRKSRC}/include/libircclient.h ${STAGEDIR}${PREFIX}/include
	@${INSTALL_DATA} ${WRKSRC}/include/libirc_errors.h ${STAGEDIR}${PREFIX}/include
	@${INSTALL_DATA} ${WRKSRC}/include/libirc_events.h ${STAGEDIR}${PREFIX}/include
	@${INSTALL_DATA} ${WRKSRC}/include/libirc_options.h ${STAGEDIR}${PREFIX}/include
	@${INSTALL_DATA} ${WRKSRC}/include/libirc_rfcnumeric.h ${STAGEDIR}${PREFIX}/include
	@${INSTALL_DATA} ${WRKSRC}/src/libircclient.a ${STAGEDIR}${PREFIX}/lib

post-install-EXAMPLES-on:
	(cd ${WRKSRC}/examples/ && ${COPYTREE_SHARE} \* ${STAGEDIR}${EXAMPLESDIR})

.include <bsd.port.mk>
