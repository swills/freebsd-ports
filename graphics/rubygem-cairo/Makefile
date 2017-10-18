# $FreeBSD: head/graphics/rubygem-cairo/Makefile 452232 2017-10-16 17:47:26Z sunpoet $

PORTNAME=	cairo
PORTVERSION=	1.15.10
CATEGORIES=	graphics rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby binding for GLib2

LICENSE=	GPLv2 RUBY
LICENSE_COMB=	dual

RUN_DEPENDS=	rubygem-native-package-installer>=1.0.3:devel/rubygem-native-package-installer \
		rubygem-pkg-config>=1.2.2:devel/rubygem-pkg-config

USE_GNOME=	cairo
USE_RUBY=	yes
USES=		gem gnome pkgconfig

.include <bsd.port.mk>
