# $FreeBSD: head/x11-toolkits/rubygem-poppler/Makefile 448669 2017-08-24 13:45:13Z swills $

PORTNAME=	poppler
PORTVERSION=	3.1.8
PORTREVISION=	1
CATEGORIES=	x11-toolkits rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby binding for Poppler

LICENSE=	LGPL21+

LIB_DEPENDS=	libpoppler-glib.so:graphics/poppler-glib
RUN_DEPENDS=	rubygem-cairo>=1.14.0:graphics/rubygem-cairo \
		rubygem-gdk_pixbuf2>=${PORTVERSION}:graphics/rubygem-gdk_pixbuf2

USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
