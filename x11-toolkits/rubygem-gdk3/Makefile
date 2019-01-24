# $FreeBSD: head/x11-toolkits/rubygem-gdk3/Makefile 490287 2019-01-14 15:46:22Z sunpoet $

PORTNAME=	gdk3
PORTVERSION=	3.3.1
CATEGORIES=	x11-toolkits rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby/GDK3 is a Ruby binding of GDK-3.x

LICENSE=	LGPL21+

BUILD_DEPENDS=	rubygem-rake>=0:devel/rubygem-rake
RUN_DEPENDS=	rubygem-cairo-gobject>=${PORTVERSION}:devel/rubygem-cairo-gobject \
		rubygem-gdk_pixbuf2>=${PORTVERSION}:graphics/rubygem-gdk_pixbuf2 \
		rubygem-pango>=${PORTVERSION}:x11-toolkits/rubygem-pango

USES=		gem gnome
USE_GNOME=	gtk30
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
