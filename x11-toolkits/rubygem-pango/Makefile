# $FreeBSD: head/x11-toolkits/rubygem-pango/Makefile 486123 2018-11-28 19:20:10Z sunpoet $

PORTNAME=	pango
PORTVERSION=	3.3.0
CATEGORIES=	x11-toolkits rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby binding for Pango

LICENSE=	LGPL21+

RUN_DEPENDS=	rubygem-cairo-gobject>=${PORTVERSION}:devel/rubygem-cairo-gobject \
		rubygem-gobject-introspection>=${PORTVERSION}:devel/rubygem-gobject-introspection

USES=		gem gnome
USE_GNOME=	pango
USE_RUBY=	yes

.include <bsd.port.mk>
