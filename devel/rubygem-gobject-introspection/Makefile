# $FreeBSD: head/devel/rubygem-gobject-introspection/Makefile 467093 2018-04-11 19:39:02Z sunpoet $

PORTNAME=	gobject-introspection
PORTVERSION=	3.2.4
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby binding for GObjectIntrospection

LICENSE=	LGPL21+

BROKEN_sparc64=	does not build: fails to compile rb-gi-function-info.c

BUILD_DEPENDS=	rubygem-pkg-config>=0:devel/rubygem-pkg-config
RUN_DEPENDS=	rubygem-glib2>=${PORTVERSION}:devel/rubygem-glib2

USE_GNOME=	introspection
USE_RUBY=	yes
USES=		gem gnome

.include <bsd.port.mk>
