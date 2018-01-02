# Created by: Ditesh Shashikant Gathani <ditesh@gathani.org>
# $FreeBSD: head/textproc/pecl-doublemetaphone/Makefile 456296 2017-12-14 13:57:28Z tz $

PORTNAME=	doublemetaphone
PORTVERSION=	1.0.1
PORTREVISION=	1
CATEGORIES=	textproc pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PECL extension which implements the Double Metaphone algorithm

LICENSE=	PHP301
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		php:pecl
IGNORE_WITH_PHP=	70 71 72

CONFIGURE_ARGS=	--enable-doublemetaphone

.include <bsd.port.mk>
