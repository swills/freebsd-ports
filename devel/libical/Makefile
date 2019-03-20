# Created by: Joe Kelsey
# $FreeBSD$

PORTNAME=	libical
PORTVERSION=	3.0.4
CATEGORIES=	devel
MASTER_SITES=	https://github.com/libical/libical/releases/download/v${PORTVERSION}/

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Implementation of the IETF Calendaring and Scheduling protocols

LICENSE=	LGPL21 MPL20
LICENSE_COMB=	dual

LIB_DEPENDS=	libicuuc.so:devel/icu

CFLAGS_amd64=	-fPIC

USES=		cmake compiler:c++11-lib gnome pathfix perl5 pkgconfig
USE_PERL5=	build
USE_LDCONFIG=	yes

MAKE_JOBS_UNSAFE= yes

BUILD_DEPENDS=	valac:lang/vala
USE_GNOME=	introspection:build glib20 libxml2
CMAKE_ARGS+=	-DGOBJECT_INTROSPECTION=true \
		-DICAL_GLIB_VAPI=true

PLIST_SUB+=	VERSION=${PORTVERSION}

OPTIONS_DEFINE=	GTKDOC
OPTIONS_SUB=	yes

GTKDOC_DESC=		Build API documentation (requires textproc/gtk-doc)
GTKDOC_BUILD_DEPENDS=	gtkdoc-check:textproc/gtk-doc
GTKDOC_CMAKE_BOOL=	ICAL_BUILD_DOCS

.include <bsd.port.mk>
