# Created by: Ditesh Shashikant Gathani <ditesh@gathani.org>
# $FreeBSD: head/textproc/pecl-doublemetaphone/Makefile 441000 2017-05-16 13:37:51Z joneum $

PORTNAME=	doublemetaphone
PORTVERSION=	1.0.1
PORTREVISION=	1
CATEGORIES=	textproc pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PECL extension which implements the Double Metaphone algorithm

LICENSE=	PHP301
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		php:pecl
IGNORE_WITH_PHP=	70 71

CONFIGURE_ARGS=	--enable-doublemetaphone

.include <bsd.port.mk>
