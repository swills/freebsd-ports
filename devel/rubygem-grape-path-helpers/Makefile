# $FreeBSD: head/devel/rubygem-grape-path-helpers/Makefile 488086 2018-12-22 10:03:04Z mfechner $

PORTNAME=	grape-path-helpers
PORTVERSION=	1.0.6
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	mfechner@FreeBSD.org
COMMENT=	Route path helpers for Grape

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-activesupport4>=0:devel/rubygem-activesupport4 \
		rubygem-grape>=1.0:devel/rubygem-grape \
		rubygem-rake>=12:devel/rubygem-rake

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
