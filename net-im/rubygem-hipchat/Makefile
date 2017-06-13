# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/net-im/rubygem-hipchat/Makefile 427705 2016-12-03 19:34:26Z sunpoet $

PORTNAME=	hipchat
PORTVERSION=	1.5.4
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
