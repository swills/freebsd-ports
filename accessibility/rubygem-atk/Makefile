# $FreeBSD: head/accessibility/rubygem-atk/Makefile 493283 2019-02-18 18:20:16Z sunpoet $

PORTNAME=	atk
PORTVERSION=	3.3.2
CATEGORIES=	accessibility rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby binding for ATK

LICENSE=	LGPL21+

BUILD_DEPENDS=	rubygem-rake>=0:devel/rubygem-rake
RUN_DEPENDS=	rubygem-glib2>=${PORTVERSION}:devel/rubygem-glib2

USES=		gem gnome
USE_GNOME=	atk
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
