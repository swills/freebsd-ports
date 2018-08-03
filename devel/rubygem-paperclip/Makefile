# Created by: Ryan Steinmetz <zi@FreeBSD.org>
# $FreeBSD: head/devel/rubygem-paperclip/Makefile 476062 2018-07-31 23:48:35Z sunpoet $

PORTNAME=	paperclip
PORTVERSION=	6.1.0
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Easy upload management for ActiveRecord

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-activemodel4>=4.2.0:databases/rubygem-activemodel4 \
		rubygem-activesupport4>=4.2.0:devel/rubygem-activesupport4 \
		rubygem-mimemagic>=0.3.0:misc/rubygem-mimemagic \
		rubygem-mime-types>=0:misc/rubygem-mime-types \
		rubygem-terrapin>=0.6.0:devel/rubygem-terrapin

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
