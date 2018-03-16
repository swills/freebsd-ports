# Created by: Ryan Steinmetz <zi@FreeBSD.org>
# $FreeBSD: head/devel/rubygem-paperclip/Makefile 464107 2018-03-10 23:00:52Z sunpoet $

PORTNAME=	paperclip
PORTVERSION=	6.0.0
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
