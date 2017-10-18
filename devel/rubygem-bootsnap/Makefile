# $FreeBSD: head/devel/rubygem-bootsnap/Makefile 450543 2017-09-24 19:08:40Z sunpoet $

PORTNAME=	bootsnap
PORTVERSION=	1.1.3
PORTREVISION=	1
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Boot large ruby/rails apps faster

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-msgpack1>=1.0:devel/rubygem-msgpack1

USE_RUBY=	yes
USES=		gem shebangfix

SHEBANG_FILES=	bin/*

.include <bsd.port.mk>
