# Created by: Maxim Sobolev <sobomax@FreeBSD.org>
# $FreeBSD: head/textproc/yelp-xsl/Makefile 480951 2018-09-30 11:58:29Z kwm $

PORTNAME=	yelp-xsl
PORTVERSION=	3.28.0
CATEGORIES=	textproc gnome
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome3

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	DocBook XSLT stylesheets for yelp

PORTSCOUT=	limitw:1,even

BUILD_DEPENDS=	itstool:textproc/itstool

USES=		gettext gmake gnome localbase pathfix \
		pkgconfig tar:xz
USE_GNOME=	gnomeprefix intlhack libxml2 libxslt
GNU_CONFIGURE=	yes

.include <bsd.port.mk>
