# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/graphics/rubygem-clutter-gdk/Makefile 490279 2019-01-14 15:45:40Z sunpoet $

PORTNAME=	clutter-gdk
PORTVERSION=	3.3.1
CATEGORIES=	graphics rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Ruby binding of GDK specific API of Clutter

LICENSE=	LGPL21+

RUN_DEPENDS=	rubygem-clutter>=${PORTVERSION}:graphics/rubygem-clutter \
		rubygem-gdk3>=${PORTVERSION}:x11-toolkits/rubygem-gdk3

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
