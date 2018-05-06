# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/graphics/rubygem-clutter-gdk/Makefile 469060 2018-05-04 18:08:08Z sunpoet $

PORTNAME=	clutter-gdk
PORTVERSION=	3.2.5
CATEGORIES=	graphics rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Ruby binding of GDK specific API of Clutter

LICENSE=	LGPL21+

RUN_DEPENDS=	rubygem-clutter>=${PORTVERSION}:graphics/rubygem-clutter \
		rubygem-gdk3>=${PORTVERSION}:x11-toolkits/rubygem-gdk3

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
