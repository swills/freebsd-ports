# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/www/rubygem-actioncable5/Makefile 496174 2019-03-18 18:22:59Z sunpoet $

PORTNAME=	actioncable
PORTVERSION=	5.1.6.2
CATEGORIES=	www rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	5

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Integrated WebSockets for Rails

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-actionpack5>=${PORTVERSION}:www/rubygem-actionpack5 \
		rubygem-nio4r>=2.0:devel/rubygem-nio4r \
		rubygem-websocket-driver>=0.6.1:www/rubygem-websocket-driver

PORTSCOUT=	limit:^5\.1\.

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
