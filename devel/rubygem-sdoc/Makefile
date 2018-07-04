# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: head/devel/rubygem-sdoc/Makefile 473902 2018-07-04 17:23:55Z mfechner $

PORTNAME=	sdoc
PORTVERSION=	1.0.0
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Create rdoc html with javascript search index

LICENSE=	MIT

RUN_DEPENDS=	rubygem-rdoc>=5.0:devel/rubygem-rdoc

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

PLIST_FILES=	bin/sdoc bin/sdoc-merge

.include <bsd.port.mk>
