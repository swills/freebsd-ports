# Created by: Evan Sarmiento <esarmiento@wayfair.com>
# $FreeBSD: head/databases/pecl-chdb/Makefile 441000 2017-05-16 13:37:51Z joneum $

PORTNAME=	chdb
PORTVERSION=	1.0.3
CATEGORIES=	databases
PKGNAMEPREFIX=	pecl-
DIST_SUBDIR=	PECL

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	CHDB extension

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${LOCALBASE}/lib/libcmph.so:devel/cmph
RUN_DEPENDS=	${LOCALBASE}/lib/libcmph.so:devel/cmph

USES=		php:ext
IGNORE_WITH_PHP=	70

CFLAGS+=	-L${LOCALBASE}/lib

USE_GITHUB=	yes
GH_ACCOUNT=	lcastelli

CONFIGURE_ARGS=	--with-libcmph-dir=${LOCALBASE}/lib

.include <bsd.port.mk>
