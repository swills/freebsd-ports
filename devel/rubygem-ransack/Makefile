# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/devel/rubygem-ransack/Makefile 483338 2018-10-28 19:57:43Z sunpoet $

PORTNAME=	ransack
PORTVERSION=	2.1.0
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Successor to the MetaSearch gem

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-actionpack5>=5.0:www/rubygem-actionpack5 \
		rubygem-activerecord5>=5.0:databases/rubygem-activerecord5 \
		rubygem-activesupport5>=5.0:devel/rubygem-activesupport5 \
		rubygem-i18n>=0:devel/rubygem-i18n

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
