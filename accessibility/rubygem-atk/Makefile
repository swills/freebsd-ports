# $FreeBSD: head/accessibility/rubygem-atk/Makefile 467054 2018-04-11 14:49:09Z sunpoet $

PORTNAME=	atk
PORTVERSION=	3.2.4
CATEGORIES=	accessibility rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby binding for ATK

LICENSE=	LGPL21+

BUILD_DEPENDS=	rubygem-rake>=0:devel/rubygem-rake
RUN_DEPENDS=	rubygem-glib2>=${PORTVERSION}:devel/rubygem-glib2

NO_ARCH=	yes
USE_GNOME=	atk
USE_RUBY=	yes
USES=		gem gnome

.include <bsd.port.mk>
