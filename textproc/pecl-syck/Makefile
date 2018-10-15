# Created by: Ditesh Shashikant Gathani <ditesh@gathani.org>
# $FreeBSD: head/textproc/pecl-syck/Makefile 481545 2018-10-08 15:08:13Z antoine $

PORTNAME=	syck
PORTVERSION=	0.9.3
PORTREVISION=	2
CATEGORIES=	textproc pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PECL extension which facilitates YAML parsing

LICENSE=	PHP301

BUILD_DEPENDS=	${LOCALBASE}/lib/libsyck.a:textproc/syck

USES=		php:pecl
USE_PHP=	spl:build hash:build
IGNORE_WITH_PHP=	70 71 72 73

CONFIGURE_ARGS=	--enable-syck

.include <bsd.port.mk>
