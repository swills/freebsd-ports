# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/devel/rubygem-bugspots/Makefile 414136 2016-04-27 21:57:31Z swills $

PORTNAME=	bugspots
PORTVERSION=	0.2.1
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
