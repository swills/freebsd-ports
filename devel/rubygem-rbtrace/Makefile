# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: head/devel/rubygem-rbtrace/Makefile 479067 2018-09-05 23:56:07Z sunpoet $

PORTNAME=	rbtrace
PORTVERSION=	0.4.11
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Shows method calls inside another ruby process in real time

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-ffi>=1.0.6:devel/rubygem-ffi \
		rubygem-msgpack>=0.4.3:devel/rubygem-msgpack \
		rubygem-optimist>=3.0.0:devel/rubygem-optimist

USE_RUBY=	yes
USES=		gem

PLIST_FILES=	bin/rbtrace

.include <bsd.port.mk>
