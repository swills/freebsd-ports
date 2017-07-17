# $FreeBSD: head/accessibility/rubygem-atk/Makefile 445934 2017-07-15 19:09:35Z sunpoet $

PORTNAME=	atk
PORTVERSION=	3.1.8
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
