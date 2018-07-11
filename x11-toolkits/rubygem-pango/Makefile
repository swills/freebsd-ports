# $FreeBSD: head/x11-toolkits/rubygem-pango/Makefile 474173 2018-07-08 10:34:36Z miwi $

PORTNAME=	pango
PORTVERSION=	3.2.7
CATEGORIES=	x11-toolkits rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby binding for Pango

LICENSE=	LGPL21+

RUN_DEPENDS=	rubygem-cairo>=1.14.0:graphics/rubygem-cairo \
		rubygem-cairo-gobject>=${PORTVERSION}:devel/rubygem-cairo-gobject \
		rubygem-gobject-introspection>=${PORTVERSION}:devel/rubygem-gobject-introspection

USE_GNOME=	pango
USE_RUBY=	yes
USES=		gem gnome

.include <bsd.port.mk>
