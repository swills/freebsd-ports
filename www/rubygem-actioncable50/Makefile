# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/www/rubygem-actioncable50/Makefile 496184 2019-03-18 18:23:51Z sunpoet $

PORTNAME=	actioncable
PORTVERSION=	5.0.7.2
CATEGORIES=	www rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	50

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Integrated WebSockets for Rails

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-actionpack50>=${PORTVERSION}:www/rubygem-actionpack50 \
		rubygem-nio4r>=1.2:devel/rubygem-nio4r \
		rubygem-websocket-driver>=0.6.1:www/rubygem-websocket-driver

PORTSCOUT=	limit:^5\.0\.

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
