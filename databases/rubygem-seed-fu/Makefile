# $FreeBSD: head/databases/rubygem-seed-fu/Makefile 455477 2017-12-03 20:38:07Z sunpoet $

PORTNAME=	seed-fu
PORTVERSION=	2.3.7
CATEGORIES=	databases rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Library to maintain seed datas

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-activerecord4>=3.1:databases/rubygem-activerecord4 \
		rubygem-activesupport4>=3.1:devel/rubygem-activesupport4

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
