# Created by: gno@yahoo-inc.com
# $FreeBSD: head/devel/json-c/Makefile 479045 2018-09-05 22:01:55Z sunpoet $

PORTNAME=	json-c
PORTVERSION=	0.13.1
CATEGORIES=	devel
MASTER_SITES=	https://s3.amazonaws.com/json-c_releases/releases/ \
		LOCAL/sunpoet

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	JSON (JavaScript Object Notation) implementation in C

LICENSE=	MIT

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
TEST_TARGET=	check
USE_LDCONFIG=	yes
USES=		autoreconf cpe gmake libtool pathfix pkgconfig

CPE_VENDOR=	json-c_project

post-patch:
	@${REINPLACE_CMD} -e 's| -Werror||g' ${WRKSRC}/Makefile.in

post-install:
	${INSTALL_DATA} ${WRKSRC}/json_object_private.h ${STAGEDIR}${PREFIX}/include/json-c/

.include <bsd.port.mk>
