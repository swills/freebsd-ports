# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: head/devel/rubygem-sdoc/Makefile 430396 2017-01-02 19:15:52Z swills $

PORTNAME=	sdoc
PORTVERSION=	0.4.2
PORTREVISION=	1
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Create rdoc html with javascript search index

LICENSE=	MIT

RUN_DEPENDS=	rubygem-json1>=1.7.7:devel/rubygem-json1

NO_ARCH=	yes

USE_RUBY=	yes
USES=		gem

PLIST_FILES=	bin/sdoc bin/sdoc-merge

.include <bsd.port.mk>
