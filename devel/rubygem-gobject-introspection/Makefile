# $FreeBSD: head/devel/rubygem-gobject-introspection/Makefile 445372 2017-07-09 06:59:18Z sunpoet $

PORTNAME=	gobject-introspection
PORTVERSION=	3.1.6
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby binding for GObjectIntrospection

LICENSE=	LGPL21+

BUILD_DEPENDS=	rubygem-pkg-config>=0:devel/rubygem-pkg-config
RUN_DEPENDS=	rubygem-glib2>=${PORTVERSION}:devel/rubygem-glib2

BROKEN_sparc64=	does not build: fails to compile rb-gi-function-info.c

USE_GNOME=	introspection
USE_RUBY=	yes
USES=		gem gnome

.include <bsd.port.mk>
