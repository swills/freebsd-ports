# Created by: Ryan Steinmetz <zi@FreeBSD.org>
# $FreeBSD: head/devel/rubygem-paperclip-rails5/Makefile 440928 2017-05-15 14:07:31Z jrm $

PORTNAME=	paperclip
PORTVERSION=	5.1.0
CATEGORIES=	devel rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	-rails5

MAINTAINER=	jrm@FreeBSD.org
COMMENT=	Easy upload management for ActiveRecord

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	ImageMagick7-nox11>0:graphics/ImageMagick7-nox11

RUN_DEPENDS+=	rubygem-activemodel5>0:databases/rubygem-activemodel5 \
		rubygem-activesupport5>=0:devel/rubygem-activesupport5 \
		rubygem-cocaine>=0.5.5:devel/rubygem-cocaine \
		rubygem-mimemagic>=0.3.0:misc/rubygem-mimemagic \
		rubygem-mime-types>=0:misc/rubygem-mime-types

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
