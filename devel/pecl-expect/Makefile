# Created by: chinsan <chinsan.tw@gmail.com>
# $FreeBSD: head/devel/pecl-expect/Makefile 456296 2017-12-14 13:57:28Z tz $

PORTNAME=	expect
PORTVERSION=	0.3.3
PORTREVISION=	2
CATEGORIES=	devel pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PHP extension for expect library

LICENSE=	PHP301

LIB_DEPENDS=	libexpect.so:lang/expect

USES=		php:pecl tcl:86
IGNORE_WITH_PHP=	70 71 72

CFLAGS+=	-I${TCL_INCLUDEDIR}
CONFIGURE_ARGS+=--with-expect=${LOCALBASE}

.include <bsd.port.mk>
