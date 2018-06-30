# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/x11-toolkits/rubygem-vte3/Makefile 473049 2018-06-22 17:18:45Z danilo $

PORTNAME=	vte3
PORTVERSION=	3.2.5
PORTREVISION=	1
CATEGORIES=	x11-toolkits rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Ruby binding for VTE

LICENSE=	LGPL21+

BUILD_DEPENDS=	rubygem-rake>=0:devel/rubygem-rake
RUN_DEPENDS=	rubygem-gobject-introspection>=${PORTVERSION}:devel/rubygem-gobject-introspection \
		rubygem-gtk3>=${PORTVERSION}:x11-toolkits/rubygem-gtk3

NO_ARCH=	yes
USE_GNOME=	vte3
USE_RUBY=	yes
USES=		gem gnome

.include <bsd.port.mk>
