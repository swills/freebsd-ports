# $FreeBSD: head/devel/rubygem-bootsnap/Makefile 465373 2018-03-23 16:45:08Z sunpoet $

PORTNAME=	bootsnap
PORTVERSION=	1.2.1
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Boot large ruby/rails apps faster

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-msgpack1>=1.0:devel/rubygem-msgpack1

USE_RUBY=	yes
USES=		gem shebangfix

SHEBANG_FILES=	bin/*

.include <bsd.port.mk>
