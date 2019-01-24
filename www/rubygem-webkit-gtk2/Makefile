# $FreeBSD: head/www/rubygem-webkit-gtk2/Makefile 490286 2019-01-14 15:46:17Z sunpoet $

PORTNAME=	webkit-gtk2
PORTVERSION=	3.3.1
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby/WebKitGtk2 is a Ruby binding of WebKitGTK+ for Gtk 2.0 Toolkit

LICENSE=	LGPL21+

LIB_DEPENDS=	libwebkitgtk-1.0.so:www/webkit-gtk2
RUN_DEPENDS=	rubygem-gobject-introspection>=${PORTVERSION}:devel/rubygem-gobject-introspection \
		rubygem-gtk2>=${PORTVERSION}:x11-toolkits/rubygem-gtk2

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
