# $FreeBSD: head/sysutils/rubygem-puppet_forge1/Makefile 440136 2017-05-04 23:48:03Z sunpoet $

PORTNAME=	puppet_forge
PORTVERSION=	1.0.6
CATEGORIES=	sysutils rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	1

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Ruby client for the Puppet Forge API

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-activesupport4>=4.2:devel/rubygem-activesupport4 \
		rubygem-her>=0.6.8:databases/rubygem-her

PORTSCOUT=	limit:^1\.

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
