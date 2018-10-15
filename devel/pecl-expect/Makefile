# Created by: chinsan <chinsan.tw@gmail.com>
# $FreeBSD: head/devel/pecl-expect/Makefile 481545 2018-10-08 15:08:13Z antoine $

PORTNAME=	expect
PORTVERSION=	0.3.3
PORTREVISION=	2
CATEGORIES=	devel pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PHP extension for expect library

LICENSE=	PHP301

LIB_DEPENDS=	libexpect.so:lang/expect

USES=		php:pecl tcl:86
IGNORE_WITH_PHP=	70 71 72 73

CFLAGS+=	-I${TCL_INCLUDEDIR}
CONFIGURE_ARGS+=--with-expect=${LOCALBASE}

.include <bsd.port.mk>
