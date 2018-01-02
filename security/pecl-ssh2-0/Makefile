# Created by: Alexander Leidinger <netchild@FreeBSD.org>
# $FreeBSD: head/security/pecl-ssh2-0/Makefile 456296 2017-12-14 13:57:28Z tz $

PORTNAME=	ssh2
PORTVERSION=	0.13
CATEGORIES=	security pear
PKGNAMESUFFIX=	-0

MAINTAINER=	dbaio@FreeBSD.org
COMMENT=	PECL extension to the libssh2 library

LICENSE=	PHP301
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libssh2.so:security/libssh2

PORTSCOUT=	limit:^0.*

USES=		php:pecl
IGNORE_WITH_PHP=	70 71 72

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib ${EXTRA_LIBS}

CONFIGURE_ARGS=	--with-ssh2

post-patch:
	@${REINPLACE_CMD} -e 's|\$$SSH2_DIR/lib|\$$SSH2_DIR/\$$PHP_LIBDIR|g' ${WRKSRC}/config.m4

.include <bsd.port.mk>
