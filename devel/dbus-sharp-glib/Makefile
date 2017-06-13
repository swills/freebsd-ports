# $FreeBSD: head/devel/dbus-sharp-glib/Makefile 440839 2017-05-13 13:24:31Z romain $

PORTNAME=	dbus-sharp-glib
PORTVERSION=	0.6
DISTVERSIONPREFIX=v
CATEGORIES=	devel

MAINTAINER=	mono@FreeBSD.org
COMMENT=	D-Bus for .NET: GLib integration module

LICENSE=	MIT

BUILD_DEPENDS=	${LOCALBASE}/libdata/pkgconfig/dbus-sharp-2.0.pc:devel/dbus-sharp
RUN_DEPENDS=	${LOCALBASE}/libdata/pkgconfig/dbus-sharp-2.0.pc:devel/dbus-sharp

USES=		autoreconf gmake pathfix pkgconfig
USE_GITHUB=	yes
GH_ACCOUNT=	mono

GNU_CONFIGURE=	yes
CONFIGURE_ENV=	ac_cv_path_GMCS=${LOCALBASE}/bin/mcs

.include <bsd.port.mk>
