# $FreeBSD: head/devel/rubygem-cairo-gobject/Makefile 476762 2018-08-09 14:44:01Z sunpoet $

PORTNAME=	cairo-gobject
PORTVERSION=	3.2.9
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
