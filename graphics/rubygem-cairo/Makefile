# $FreeBSD: head/graphics/rubygem-cairo/Makefile 477739 2018-08-21 18:24:40Z sunpoet $

PORTNAME=	cairo
PORTVERSION=	1.15.14
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
