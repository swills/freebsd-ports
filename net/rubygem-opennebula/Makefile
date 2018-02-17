# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/net/rubygem-opennebula/Makefile 462026 2018-02-16 15:42:07Z sunpoet $

PORTNAME=	opennebula
PORTVERSION=	5.4.7
CATEGORIES=	net rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Libraries needed to talk to OpenNebula

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-json>=0:devel/rubygem-json \
		rubygem-nokogiri>=0:textproc/rubygem-nokogiri \
		rubygem-rbvmomi>=0:net/rubygem-rbvmomi

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
