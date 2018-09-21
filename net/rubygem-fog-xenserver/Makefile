# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/net/rubygem-fog-xenserver/Makefile 480140 2018-09-20 00:23:12Z sunpoet $

PORTNAME=	fog-xenserver
PORTVERSION=	1.0.0
CATEGORIES=	net rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Module for the 'fog' gem to support XENSERVER

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.md

RUN_DEPENDS=	rubygem-fog-core>=0:devel/rubygem-fog-core \
		rubygem-fog-xml>=0:textproc/rubygem-fog-xml \
		rubygem-xmlrpc>=0:net/rubygem-xmlrpc

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
