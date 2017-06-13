# $FreeBSD: head/graphics/rubygem-gdk_pixbuf2/Makefile 442194 2017-05-31 14:54:26Z sunpoet $

PORTNAME=	gdk_pixbuf2
PORTVERSION=	3.1.4
CATEGORIES=	graphics rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby binding for GdkPixbuf2

LICENSE=	LGPL21+

BUILD_DEPENDS=	rubygem-rake>=0:devel/rubygem-rake
RUN_DEPENDS=	rubygem-gio2>=${PORTVERSION}:devel/rubygem-gio2

NO_ARCH=	yes
USE_GNOME=	gdkpixbuf2
USE_RUBY=	yes
USES=		gem gnome

.include <bsd.port.mk>
