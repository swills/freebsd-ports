# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/net-im/rubygem-hipchat/Makefile 445178 2017-07-06 20:57:24Z sunpoet $

PORTNAME=	hipchat
PORTVERSION=	1.6.0
CATEGORIES=	net-im rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Ruby library to interact with HipChat

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-httparty>=0:www/rubygem-httparty \
		rubygem-mimemagic>=0:misc/rubygem-mimemagic

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
