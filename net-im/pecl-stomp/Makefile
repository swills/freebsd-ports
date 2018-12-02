# Created by: wen@FreeBSD.org
# $FreeBSD: head/net-im/pecl-stomp/Makefile 486473 2018-12-02 17:43:33Z antoine $

PORTNAME=	stomp
PORTVERSION=	1.0.9
PORTREVISION=	1
CATEGORIES=	net-im pear

MAINTAINER=	dbaio@FreeBSD.org
COMMENT=	PECL extension of stomp client

DEPRECATED=	Works only with EOL php 5.6
EXPIRATION_DATE=	2018-12-30

LICENSE=	PHP301
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		php:pecl
IGNORE_WITH_PHP=	70 71 72 73

PORTSCOUT=	limit:^1.*

.include <bsd.port.mk>
