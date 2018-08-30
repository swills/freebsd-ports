# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/devel/rubygem-bugspots/Makefile 478066 2018-08-25 16:01:15Z sunpoet $

PORTNAME=	bugspots
PORTVERSION=	0.2.2
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Bugspots - Bug Prediction Heuristic

LICENSE=	MIT

RUN_DEPENDS=	rubygem-rainbow>=0:devel/rubygem-rainbow \
		rubygem-rugged>=0.21.0:devel/rubygem-rugged

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

PLIST_FILES=	bin/bugspots bin/git-bugspots

.include <bsd.port.mk>
