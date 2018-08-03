# Created by: Joe Kelsey
# $FreeBSD: head/devel/libical/Makefile 475857 2018-07-29 22:18:44Z gerald $

PORTNAME=	libical
PORTVERSION=	2.0.0
DISTVERSIONPREFIX=	v
PORTREVISION=	6
CATEGORIES=	devel

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Implementation of the IETF Calendaring and Scheduling protocols

LICENSE=	LGPL21 MPL10
LICENSE_COMB=	dual

LIB_DEPENDS=	libicuuc.so:devel/icu

CFLAGS_amd64=	-fPIC

USES=		cmake compiler:c++11-lib pathfix perl5
USE_GITHUB=	yes
USE_GNOME=	introspection:build
USE_PERL5=	build
USE_LDCONFIG=	yes

.include <bsd.port.mk>
