# Created by: Wen Heping<wen@FreeBSD.org>
# $FreeBSD: head/databases/pecl-tokyo_tyrant/Makefile 456296 2017-12-14 13:57:28Z tz $

PORTNAME=	tokyo_tyrant
PORTVERSION=	0.7.0
PORTREVISION=	1
CATEGORIES=	databases pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	Wrapper to the Tokyo Tyrant client library

LICENSE=	PHP301
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libtokyotyrant.so:databases/tokyotyrant

USES=		php:pecl pkgconfig
USE_PHP=	session:build
IGNORE_WITH_PHP=	70 71 72

.include <bsd.port.mk>
