# Created by: Oliver Lehmann <oliver@FreeBSD.org>
# $FreeBSD: head/devel/pecl-yac/Makefile 456296 2017-12-14 13:57:28Z tz $

PORTNAME=	yac
PORTVERSION=	0.9.2
PORTREVISION=	1
PORTEPOCH=	1
CATEGORIES=	devel

MAINTAINER=	oliver@FreeBSD.org
COMMENT=	Yac is a shared memory user data cache for PHP

LICENSE=	PHP301

USES=		php:pecl
IGNORE_WITH_PHP=	70 71 72

OPTIONS_DEFINE=	MSGPACK
MSGPACK_DESC=	Enable MSGPACK module
MSGPACK_BUILD_DEPENDS=	${LOCALBASE}/lib/php/${PHP_EXT_DIR}/msgpack.so:devel/pecl-msgpack
MSGPACK_RUN_DEPENDS=	${LOCALBASE}/lib/php/${PHP_EXT_DIR}/msgpack.so:devel/pecl-msgpack

.include <bsd.port.mk>
