# $FreeBSD: head/devel/rubygem-gio2/Makefile 474173 2018-07-08 10:34:36Z miwi $

PORTNAME=	gio2
PORTVERSION=	3.2.7
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby binding for gio 2.x

LICENSE=	LGPL21+

RUN_DEPENDS=	rubygem-glib2>=${PORTVERSION}:devel/rubygem-glib2 \
		rubygem-gobject-introspection>=${PORTVERSION}:devel/rubygem-gobject-introspection

USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
