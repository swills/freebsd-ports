# Created by: mat@FreeBSD.org
# $FreeBSD: head/net/rubygem-epp-client-smallregistry/Makefile 414136 2016-04-27 21:57:31Z swills $

PORTNAME=	epp-client-smallregistry
PORTVERSION=	0.15.1
CATEGORIES=	net rubygems
MASTER_SITES=	RG

MAINTAINER=	mat@FreeBSD.org
COMMENT=	Smallregistry EPP client library

LICENSE=	MIT

RUN_DEPENDS=	rubygem-builder>=2.1.2:devel/rubygem-builder \
		rubygem-nokogiri>=1.4:textproc/rubygem-nokogiri \
		rubygem-epp-client-base=${PORTVERSION}:net/rubygem-epp-client-base \
		rubygem-epp-client-secdns=${PORTVERSION}:net/rubygem-epp-client-secdns \

USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
