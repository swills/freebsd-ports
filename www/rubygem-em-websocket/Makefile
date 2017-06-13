# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/www/rubygem-em-websocket/Makefile 414136 2016-04-27 21:57:31Z swills $

PORTNAME=	em-websocket
PORTVERSION=	0.5.1
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	EventMachine based WebSocket server

LICENSE=	MIT

RUN_DEPENDS=	rubygem-eventmachine>=0.12.9:devel/rubygem-eventmachine \
		rubygem-http_parser.rb>=0.6.0:net/rubygem-http_parser.rb

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
