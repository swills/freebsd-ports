# $FreeBSD: head/devel/rubygem-cairo-gobject/Makefile 445371 2017-07-09 06:59:12Z sunpoet $

PORTNAME=	cairo-gobject
PORTVERSION=	3.1.6
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby binding for cairo-gobject

LICENSE=	LGPL21+

RUN_DEPENDS=	rubygem-cairo>=0:graphics/rubygem-cairo \
		rubygem-glib2>=${PORTVERSION}:devel/rubygem-glib2

USE_GNOME=	cairo glib20
USE_RUBY=	yes
USES=		gem gnome

.include <bsd.port.mk>
