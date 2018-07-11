# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/graphics/rubygem-clutter-gdk/Makefile 474173 2018-07-08 10:34:36Z miwi $

PORTNAME=	clutter-gdk
PORTVERSION=	3.2.7
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
