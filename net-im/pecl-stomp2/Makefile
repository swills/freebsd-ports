# $FreeBSD: head/net-im/pecl-stomp2/Makefile 463917 2018-03-08 19:48:41Z mat $

PORTNAME=	stomp
PORTVERSION=	2.0.1
CATEGORIES=	net-im pear

MAINTAINER=	dbaio@FreeBSD.org
COMMENT=	PECL extension of stomp client

LICENSE=	PHP301
LICENSE_FILE=	${WRKSRC}/LICENSE

PORTSCOUT=	limit:^2.*

USES=		php:pecl
IGNORE_WITH_PHP=	56
CONFLICTS=	pecl-stomp-1*

.include <bsd.port.mk>
