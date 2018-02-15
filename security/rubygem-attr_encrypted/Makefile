# Created by: Torsten Zuhlsdorff <ports@toco-domains.de>
# $FreeBSD: head/security/rubygem-attr_encrypted/Makefile 461628 2018-02-12 19:04:28Z sunpoet $

PORTNAME=	attr_encrypted
PORTVERSION=	3.1.0
CATEGORIES=	security rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Generates attr_accessors that encrypt and decrypt attributes

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-encryptor>=3.0.0:security/rubygem-encryptor

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
