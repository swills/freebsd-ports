# $FreeBSD: head/net-im/pecl-stomp2/Makefile 465055 2018-03-20 02:20:07Z dbaio $

PORTNAME=	stomp
PORTVERSION=	2.0.1
CATEGORIES=	net-im pear

MAINTAINER=	dbaio@FreeBSD.org
COMMENT=	PECL extension of stomp client

LICENSE=	PHP301
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		php:pecl
IGNORE_WITH_PHP=	56
CONFLICTS=	pecl-stomp-1*

PORTSCOUT=	limit:^2.*

.include <bsd.port.mk>
